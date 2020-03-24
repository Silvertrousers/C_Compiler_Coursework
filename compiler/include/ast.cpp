

#ifndef ast_cpp
#define ast_cpp
#include <iostream>
#include <string>
#include "ast.hpp"

#include <regex>


static int name_counter = 0;
static int start_counter = 0;
static int end_counter = 0;
static int case_counter = 0;

std::string makeName(std::string in){
    name_counter++;
    return in + std::to_string(name_counter);
}

std::string makeStart(bool increment){
    if (increment == 1){
        start_counter++;
    }
    return "start" + std::to_string(start_counter);
}

std::string makeEnd(bool increment){
    if (increment == 1){
        end_counter++;
    }
    return "end" + std::to_string(end_counter);
}

std::string makeCaseStart(bool increment){
    if (increment == 1){
        case_counter++;
    }
    return "casestart" + std::to_string(case_counter);
}

std::string makeCaseEnd(bool increment){
    if (increment == 1){
        case_counter++;
    }
    return "caseend" + std::to_string(case_counter);
}

bool is_a_variable(std::string in);
std::string var_or_const_instr(std::string v_instr, std::string c_instr, std::string arg1, std::string arg2, symbol_table table);

std::string ast_node::make_mips(symbol_table &table, int &sp, int &pc){

  //std::cout<<node_type<<std::endl;
  //  table.print_table(0);

  std::string arg1, arg2;
  for(int i=0;i<branches.size();i++){
    if(branches[i] == NULL){
      ast_node * temp = new ast_node("NULL","");
      branches[i] = temp;
    }
  }
  if(node_type == "NULL"){
    return "";
  }
  if(node_type == "TRANSLATION_UNIT"){/*std::cout<<node_type<<std::endl;*/
    std::cout<<branches[0]->make_mips(table, sp, pc);
    std::cout<<branches[1]->make_mips(table, sp, pc);
  }

  if(node_type == "EXTERNAL_DECLARATION"){/*std::cout<<node_type<<std::endl;*/}\

  if(node_type == "FUNCTION_DECLARATION"){
    symbol_table new_scope = symbol_table(&table);
    symbol temp;
    temp.name = branches[1]->branches[0]->value;
    temp.type = "function";
    temp.label = pc;
    table.insert(temp);
    if(table.stack_pointer == 0){
      std::cout<<temp.name<<":"<<std::endl;
      std::cout<<".globl "<<temp.name<<std::endl;
    }
    //symbol_table new_scope = symbol_table(&newscope);

    /*std::cout<<node_type<<std::endl;*/
    std::cout<<branches[0]->make_mips(new_scope, sp, pc);//reutrn type
    //fn name should already be in the stack
    //assign memory locations to labels has already been done since symbol table keeps track of stack
    std::cout<<temp.name<<":"<<std::endl;
    branches[1]->make_mips(new_scope, sp, pc);//arguments

    for (int i = 0; i < new_scope.symbols.size(); i++){
        arg1 = new_scope.symbols[i].name; //assuming the argument calls added them to new scope, these should be the 4 parameters.
        std::cout<<"addi $sp, $gp, "<<new_scope.stack_pointer<<std::endl;
        std::cout<<"lw $a0, "<<new_scope.find_symbol(arg1).offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        std::cout << "add $a0, $a1, $zero" << std::endl;
        std::cout << "add $a1, $a2, $zero" << std::endl;
        std::cout << "add $a2, $a3, $zero" << std::endl;
        std::cout << "add $a0, $zero, $zero" << std::endl;
    }
    std::cout<<branches[3]->make_mips(new_scope, sp, pc);//body
  }

  if(node_type == "STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "LABELED_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
      if (branches[0]->node_type == "T_CASE"){
          std::string casestart = makeCaseStart(1);
          std::string caseend = makeCaseEnd(0);
          std::cout << "beq $zero, $zero," << caseend << std::endl;
          std::cout<<"nop"<<std::endl;
          std::cout << casestart << ":" << std::endl;
          arg1 = branches[1]->make_mips(table, sp, pc);
          std::cout<<"lw $t0, "<<table.find_symbol("3").offset<<"($sp)"<<std::endl;
          std::cout<<"nop"<<std::endl;
          std::cout<<"lw $t1, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
          std::cout<<"nop"<<std::endl;
          std::cout<<"bne $t0, $t1, casestart" << std::to_string(case_counter+1) << std::endl;
          std::cout<<"nop"<<std::endl;
          std::cout << caseend << ":" << std::endl;
          branches[2]->make_mips(table, sp, pc);
      }
  }
  if(node_type == "DEFAULT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "CASE"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "COMPOUND_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    //symbol_table new_scope = symbol_table(&table);
    branches[0]->make_mips(table, sp, pc);
    branches[1]->make_mips(table, sp, pc);
  }
  if(node_type == "DECLARATION_LIST"){/*std::cout<<node_type<<std::endl;*/
    if(branches[0] != NULL){branches[0]->make_mips(table, sp, pc);}
    if(branches[1] != NULL){branches[1]->make_mips(table, sp, pc);}
  }
  if(node_type == "STATEMENT_LIST"){/*std::cout<<node_type<<std::endl;*/
    branches[0]->make_mips(table, sp, pc);
    branches[1]->make_mips(table, sp, pc);
  }
  if(node_type == "EXPRESSION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "EXPRESSION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "SELECTION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    symbol_table new_scope = symbol_table(&table);
    if (branches[0]-> node_type == "T_IF"){
      std::string skip = makeName("skip");
      std::string end = makeName("end");
      arg1 = branches[1]->make_mips(new_scope, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<< "beq $t0, $zero, " << skip << std::endl;
      std::cout<<"nop"<<std::endl;
      //branch if condition is not met to label else
      std::cout<<branches[2]->make_mips(new_scope, sp, pc);
      std::cout<< "beq " << "$zero, " << "$zero, " << end << std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout << skip  << ":"<< std::endl;
      if (branches[3]-> node_type == "T_ELSE"){
        std::cout<<branches[4]->make_mips(new_scope, sp, pc);
      }
      std::cout << end  << ":"<< std::endl;
    }
    if (branches[0]->node_type == "T_SWITCH"){
        arg1 = branches[1]->make_mips(new_scope, sp, pc);
        std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        symbol temp;
        temp.name = "3";
        temp.type = "switch_value";
        table.insert(temp);
        std::cout<<"sw $t0, "<<table.find_symbol("3").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        std::cout << "beq $zero, $zero, casestart" << std::to_string(case_counter+1);
        branches[2]->make_mips(new_scope, sp, pc);
        std::string temp_name = makeCaseEnd(1);
        std::cout << temp_name << ":" << std::endl;
        case_counter++;
    }
  }
  if(node_type == "T_SWITCH"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_IF"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_ELSE"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "ITERATION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    symbol_table new_scope(&table);

    if (branches[0]-> node_type == "FOR"){
      std::cout<<branches[1]->make_mips(new_scope, sp, pc);
      std::string start = makeStart(1);
      new_scope.start_label = start;
      std::string end = makeEnd(1);
      new_scope.end_label = end;
      std::cout << start << ":" << std::endl;
      arg1 = branches[2]->make_mips(new_scope, sp, pc);
      std::cout<<"addi $sp, $zero, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<< "beq $t0, $zero, " << end << std::endl;
      std::cout<<"nop"<<std::endl;
      branches[3]->make_mips(new_scope, sp, pc);
      branches[5]->make_mips(new_scope, sp, pc);
      std::cout<< "beq " << "$zero, " << "$zero, " << start << std::endl;
      std::cout<<"nop"<<std::endl;
      //label end
      std::cout << end << ":" << std::endl;
    }
    if (branches[0]-> node_type == "T_WHILE"){
      std::cout<<branches[1]->make_mips(new_scope, sp, pc);
      std::string start = makeStart(1);
      new_scope.start_label = start;
      std::string end = makeEnd(1);
      new_scope.end_label = end;
      std::cout << start << ":" << std::endl;
      arg1 = branches[1]->make_mips(new_scope, sp, pc);
      std::cout<<"addi $sp, $zero, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<< "beq $t0, $zero, " << end << std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<branches[5]->make_mips(new_scope, sp, pc);
      std::cout << end<< ":" << std::endl;
    }
  }
  if(node_type == "T_FOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_WHILE"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_DO"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "JUMP_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    if (branches[0]->node_type == "RETURN"){
      if (branches[1]->node_type != "NULL"){
        arg1 = branches[1]->make_mips(table, sp, pc);
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"lw $2, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
      }
      std::cout << "jr $ra" << std::endl;
      std::cout<<"nop"<<std::endl;
    }
    if (branches[0]->node_type == "T_BREAK"){
        std::cout << "beq $zero, $zero," << table.end_label;
        std::cout << "nop" << std::endl;
    }
    if (branches[0]->node_type == "T_CONTINUE"){
        std::cout << "beq $zero, $zero," << table.start_label;
        std::cout << "nop" << std::endl;
    }
  }

  if(node_type == "PRIMARY_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "CONSTANT"){/*std::cout<<node_type<<std::endl;*/
    std::cout<<"addi $t2, $zero, "<<value<<std::endl;
    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      return "temp1";
      table.t1_free = false;
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      return "temp2";
      table.t2_free = false;
    }

  }

  if(node_type == "POSTFIX_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/
    if(value == "array_indexing"){
      arg1 = branches[0]->make_mips(table, sp, pc);
      if(branches[1] != NULL){
        arg2 = branches[1]->make_mips(table, sp, pc);
        int array_index = branches[1]->eval_expr();
        //std::cout<<"I want to access: "<<arg1<<"_index_"<<std::to_string(array_index)<<std::endl;
        return arg1+"_index_"+std::to_string(array_index);
      }
    }
    if (value == "fn_call"){
      symbol fn = table.find_symbol(branches[0]->value);
      symbol_table new_scope = symbol_table(&table);

      if (branches[1]->node_type == "ARGUMENT_EXPRESSION_LIST"){
          branches[1]->make_mips(new_scope, sp, pc);
      }
      if (table.find_symbol(branches[0]->value).name != "NULL"){
        //save old return address
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $ra, "<<table.find_symbol("return_address").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        //put in new return address for fn call
        std::cout << "jal " << fn.name << std::endl;
        std::cout<<"nop"<<std::endl;
        //put back old return address
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"lw $ra, "<<table.find_symbol("return_address").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
      }
      //fn call return value goes to register $v0, which is then stored in temp1/2 to be used in operations
      if(table.t1_free){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        return "temp1";
        table.t1_free = false;
      }
      if(table.t2_free){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        return "temp2";
        table.t1_free = false;
      }
    }
  }

  if(node_type == "ARGUMENT_EXPRESSION_LIST"){/*std::cout<<node_type<<std::endl;*/
      if (branches[0]->node_type == "ARGUMENT_EXPRESSION_LIST"){
          branches[0]->make_mips(table, sp, pc);
      }
      if (branches[0]->node_type == "ASSIGNMENT_EXPRESSION"){
          arg1 = branches[0]->make_mips(table, sp, pc);
          std::cout << "add $a3, $a2, $zero" <<std::endl;
          std::cout << "add $a2, $a1, $zero" <<std::endl;
          std::cout << "add $a1, $a0, $zero" <<std::endl;
          std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
          std::cout<<"lw $a0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
          std::cout<<"nop"<<std::endl;
      }
      arg1 = branches[1]->make_mips(table, sp, pc);
      std::cout << "add $a3, $a2, $zero" <<std::endl;
      std::cout << "add $a2, $a1, $zero" <<std::endl;
      std::cout << "add $a1, $a0, $zero" <<std::endl;
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $a0, "<<table.find_symbol(arg2).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
  }
  if(node_type == "UNARY_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/
    if(value == "++"){
      arg1 = branches[0]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"addi $t2,$t0,1"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
      return arg1;
    }
    if(value == "--"){
      arg1 = branches[0]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"addi $t1,$zero,1"<<std::endl;
      std::cout<<"sub $t2,$t0,$t1"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
      return arg1;
    }
    if(branches[0]->value == "AND"){}//pointers
    if(branches[0]->value == "times"){}//pointers so dont do yet
    if(branches[0]->value == "plus"){}//type level promotion, do later
    if(branches[0]->value == "minus"){}//type level demotion, do later
    if(branches[0]->value == "bitwise_not"){
      arg1 = branches[0]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"Nor $t2,$t0,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
      return arg1;
    }
    if(branches[0]->value == "logical_not"){
      arg1 = branches[0]->make_mips(table, sp, pc);
      std::string skip = makeName("skip");
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"addi $t2, $zero, 1"<<std::endl;
      std::cout<<"beq $t2, $zero, "<<skip<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"addi $t2, $zero, 0"<<std::endl;
      std::cout<<skip<<":"<<std::endl;
      std::cout<<"Nor $t2,$t0,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
      return arg1;
    }
  }

  if(node_type == "SIZE_OF"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "UNARY_OPERATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "CAST_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/

  }


  if(node_type == "EXPR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
    if(branches[0] != NULL){branches[0]->make_mips(table, sp, pc);}
    if(branches[1] != NULL){branches[1]->make_mips(table, sp, pc);}
  }
  if(node_type == "DECLARATION_SPECIFIERS"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "INIT_DECLARATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->make_mips(table, sp, pc);
    branches[1]->make_mips(table, sp, pc);
  }
  if(node_type == "INIT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/

    if(branches[0]-> node_type=="IDENTIFIER"){
      symbol s;
      s.name = branches[0]->value;
      s.type = "int";
      if(branches[1]->node_type == "NULL"){
        s.value = "0";
        table.insert(s);
      }
      else{
        arg1 = branches[1]->make_mips(table, sp, pc);
        s.value = table.find_symbol(arg1).value;
        table.insert(s);
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"lw $t2, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol(s.name).offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
      }
      return s.name;
    }
    else{
      arg1 = branches[0]->make_mips(table, sp, pc);
      arg2 = branches[1]->make_mips(table, sp, pc);
      if(branches[1]->node_type == "NULL"){}
      else{
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"lw $t2, "<<table.find_symbol(arg2).offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
      }
      return arg1;
    }

  }
  if(node_type == "STORAGE_CLASS_SPECIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPE_SPECIFIER"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "STRUCT_or_UNION_SPECIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_OR_UNION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_DECLARATION_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_DECLARATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "STRUCT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUM_SPECIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUM"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUMERATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUMERATOR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ENUM_CONSTANT"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPE_QUALIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "DECLARATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DIRECT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/

    if(value == "array_decl"){
      int array_size = branches[1]->eval_expr();
      for(int i=0; i<array_size; i++){
        symbol * s = new symbol();
        s->name = branches[0]->value+"_index_"+std::to_string(i);
        s->type = "int array";
        table.insert(*s);
        //s->offset = table.var_pointer + i*4;
      }
      //table.var_pointer += array_size*4;
      return branches[0]->value;
    }

    if(value == "fn_dcl"){
      symbol s;
      s.name = branches[0]->value;
      s.type = "function";
      //s.value = number of arguments
      table.insert(s);
      if(branches[1]->node_type != "NULL"){
        branches[1]->make_mips(table, sp, pc);
      }
    }
  }
  if(node_type == "POINTER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "DEREFERENCE"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPE_QUALIFIER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "PARAMETER_TYPE_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "ELIPSIS"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "PARAMETER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "PARAMETER_DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "IDENTIFIER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "IDENTIFIER"){
    return value;
  }
  if(node_type == "TYPE_NAME"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "ABSTRACT_DECLARATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DIRECT_ABSTRACT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPEDEF_NAME"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "INITIALIZER"){
    /*std::cout<<node_type<<std::endl;*/

  }
  if(node_type == "INITIALIZER_LIST"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "MULTIPLICATIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == "*"){
      arg1 =branches[0]->make_mips(table, sp, pc);//need a way to check if arg1 is a constant
      arg2 =branches[1]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(arg2).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"MULT $t0, $t1"<<std::endl;
      std::cout<<"MFLO $t2"<<std::endl;

      if(table.t1_free == true){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      if(table.t2_free == true){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        table.t2_free = false;
        return "temp2";
      }
    }
    if(value == "/" or value == "%"){
      arg1 =branches[0]->make_mips(table, sp, pc);//need a way to check if arg1 is a constant
      arg2 =branches[1]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(arg2).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      std::cout<<"DIV $t0, $t1"<<std::endl;
      if(value == "/"){std::cout<<"MFLO $t2"<<std::endl;}//get quotient
      if(value == "%"){std::cout<<"MFHI $t2"<<std::endl;}//get remainder

      if(table.t1_free == true){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      if(table.t2_free == true){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        table.t2_free = false;
        return "temp2";
      }
    }
  }
  if(node_type == "ADDITIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == "+"){
      arg1 =branches[0]->make_mips(table, sp, pc);//need a way to check if arg1 is a constant
      arg2 =branches[1]->make_mips(table, sp, pc);
      var_or_const_instr("add", "addi", arg1, arg2, table);


      if(table.t1_free == true){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      if(table.t2_free == true){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        table.t2_free = false;
        return "temp2";
      }
    }
    if(value == "-"){
      arg1 =branches[0]->make_mips(table, sp, pc);//need a way to check if arg1 is a constant
      arg2 =branches[1]->make_mips(table, sp, pc);
      var_or_const_instr("sub", "sub", arg1, arg2, table);

      if(table.t1_free == true){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      if(table.t2_free == true){
        std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
        std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
        std::cout<<"nop"<<std::endl;
        table.t2_free = false;
        return "temp2";
      }
    }
  }
  if(node_type == "SHIFT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);//need a way to check if arg1 is a constant
    arg2 =branches[1]->make_mips(table, sp, pc);


    if(value == "<<"){var_or_const_instr("sllv", "sll", arg1, arg2, table);}
    if(value == ">>"){var_or_const_instr("srlv", "srl", arg1, arg2, table);}//changes for unsigned ints (gotta use sra)

    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }

  if(node_type == "RELATIONAL_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);

    var_or_const_instr("SLT", "SLTI", arg1, arg2, table);

    if(value == "<"){}
    if(value == ">"){
      std::cout<<"xori $t2, $t2, 1"<<std::endl;//if set to 1, this will turn the 1 to a 0
    }//this nots the less than to make a greater than instruction


    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "EQUALITY_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);
    std::string skip = makeName("skip");

    var_or_const_instr("sub", "subi", arg1, arg2, table);
    std::cout<<"addi $t0,$t2,0"<<std::endl;
    std::cout<<"addi $t2,$zero,1"<<std::endl;//set result to 1

    if(value == "=="){
      std::cout<<"beq $t0,$zero, "<<skip<<std::endl;
      std::cout<<"nop"<<std::endl;
    }
    if(value == "!="){
      std::cout<<"bne $t0,$zero, "<<skip<<std::endl;
      std::cout<<"nop"<<std::endl;
    }//this nots the less than to make a greater than instruction

    std::cout<<"addi $t2,$zero,0"<<std::endl;//set result to 0
    std::cout<<skip<<":"<<std::endl;

    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);

    var_or_const_instr("AND", "ANDI", arg1, arg2, table);

    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "EXCLUSIVE_or_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);

    var_or_const_instr("xor", "xori", arg1, arg2, table);

    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "INCLUSIVE_or_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);

    var_or_const_instr("or", "ori", arg1, arg2, table);

    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }//hi
  if(node_type == "LOGICAL_AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/

    std::string sc = makeName("short_circuit");
    std::string nsc = makeName("not_short_circuit");

    arg1 =branches[0]->make_mips(table, sp, pc);//eval arg1
    var_or_const_instr("xor", "xori", arg1, "0", table);//check if arg1 = 0

    std::cout<<"beq $t2, $zero, "<<sc<<std::endl;
    std::cout<<"nop"<<std::endl;
    arg2 =branches[1]->make_mips(table, sp, pc);//else eval second arg
    var_or_const_instr("xor", "xori", arg2, "0", table);//check if arg2 = 0

    std::cout<<"addi $t1,$zero,1"<<std::endl;// set result to 1
    std::cout<<"bne $t2, $zero, "<<nsc<<std::endl;//result stays 1 if arg2 != 0
    std::cout<<"nop"<<std::endl;
    std::cout<<sc<<":"<<std::endl;
    std::cout<<"addi $t1,$zero,0"<<std::endl;// set result to 0
    std::cout<<nsc<<":"<<std::endl;

    std::cout<<"add $t2,$t1, $zero"<<std::endl;

    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "LOGICAL_or_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    std::string sc = makeName("short_circuit");
    std::string nsc = makeName("not_short_circuit");

    arg1 =branches[0]->make_mips(table, sp, pc);//eval arg1
    var_or_const_instr("xor", "xori", arg1, "0", table);//check if arg1 = 0

    std::cout<<"bne $t2, $zero, "<<sc<<std::endl;
    std::cout<<"nop"<<std::endl;
    arg2 =branches[1]->make_mips(table, sp, pc);//else eval second arg
    var_or_const_instr("xor", "xori", arg2, "0", table);//check if arg2 = 0

    std::cout<<"addi $t1,$zero,0"<<std::endl;// set result to 0
    std::cout<<"beq $t2, $zero, "<<nsc<<std::endl;//result stays 1 if arg2 != 0
    std::cout<<"nop"<<std::endl;
    std::cout<<sc<<":"<<std::endl;
    std::cout<<"addi $t1,$zero,1"<<std::endl;// set result to 1
    std::cout<<nsc<<":"<<std::endl;

    std::cout<<"add $t2,$t1, $zero"<<std::endl;

    if(table.t1_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp1").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free == true){
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol("temp2").offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "CONDITIONAL_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "ASSIGNMENT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/
    std::string s = branches[0]->make_mips(table, sp, pc);

    if(branches[1]->value == "="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t2, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "+="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"add $t2,$t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "-="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;

      std::cout<<"sub $t2,$t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "*="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"MULT $t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"MFLO $t2"<<std::endl;

      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "/="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"DIV $t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"MFLO $t2"<<std::endl;

      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "%="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"DIV $t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"MFHI $t2"<<std::endl;

      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "<<="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"sllv $t2,$t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == ">>="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"srlv $t2,$t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "&="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"AND $t2,$t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "|="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"or $t2,$t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    if(branches[1]->value == "^="){
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
      std::cout<<"lw $t0, "<<table.find_symbol(res).offset<<"($sp)"<<std::endl;//this is the location of temp1
      std::cout<<"nop"<<std::endl;
      std::cout<<"lw $t1, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;//this is the location of old x
      std::cout<<"nop"<<std::endl;
      std::cout<<"xor $t2,$t1,$t0"<<std::endl;//x=x+the rest
      std::cout<<"sw $t2, "<<table.find_symbol(s).offset<<"($sp)"<<std::endl;
      std::cout<<"nop"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
    return s;
  }
  return "";
}

int ast_node::eval_expr(){

  if(node_type == "SIZE_OF"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "UNARY_OPERATOR"){/*std::cout<<node_type<<std::endl;*/

  }
  if(node_type == "CAST_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "MULTIPLICATIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == "*"){
      return (branches[0]->eval_expr() * branches[1]->eval_expr());
    }
    if(value == "/"){
      return (branches[0]->eval_expr() / branches[1]->eval_expr());
    }
    if(value =="%"){
      return (branches[0]->eval_expr() % branches[1]->eval_expr());
    }
  }
  if(node_type == "ADDITIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == "+"){
      return (branches[0]->eval_expr() + branches[1]->eval_expr());
    }
    if(value == "-"){
      return (branches[0]->eval_expr() - branches[1]->eval_expr());
    }
  }
  if(node_type == "SHIFT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/
    if(value == ">>"){
      return (branches[0]->eval_expr() >> branches[1]->eval_expr());
    }
    if(value == "<<"){
      return (branches[0]->eval_expr() << branches[1]->eval_expr());
    }
  }

  if(node_type == "RELATIONAL_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == ">"){
      return (branches[0]->eval_expr() > branches[1]->eval_expr());
    }
    if(value == "<"){
      return (branches[0]->eval_expr() < branches[1]->eval_expr());
    }
  }
  if(node_type == "EQUALITY_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    return (branches[0]->eval_expr() == branches[1]->eval_expr());
  }
  if(node_type == "AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    return (branches[0]->eval_expr() & branches[1]->eval_expr());
  }
  if(node_type == "EXCLUSIVE_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    return (branches[0]->eval_expr() ^ branches[1]->eval_expr());
  }
  if(node_type == "INCLUSIVE_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    return (branches[0]->eval_expr() | branches[1]->eval_expr());
  }//hi
  if(node_type == "LOGICAL_AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    return (branches[0]->eval_expr() && branches[1]->eval_expr());
  }
  if(node_type == "LOGICAL_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    return (branches[0]->eval_expr() || branches[1]->eval_expr());
  }

  if(node_type == "CONSTANT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/

  }
  if(node_type == "ASSIGNMENT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/
    return branches[1]->eval_expr();
  }
  if(node_type == "PRIMARY_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/

  }
  if(node_type == "CONSTANT"){/*std::cout<<node_type<<std::endl;*/
    return stoi(value);
  }
  if(node_type == "IDENTIFIER"){/*std::cout<<node_type<<std::endl;*/
  }
}

std::string var_or_const_instr(std::string v_instr, std::string c_instr, std::string arg1, std::string arg2, symbol_table table){
  if(is_a_variable(arg1) && is_a_variable(arg2)){
    std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
    std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
    std::cout<<"nop"<<std::endl;
    std::cout<<"lw $t1, "<<table.find_symbol(arg2).offset<<"($sp)"<<std::endl;
    std::cout<<"nop"<<std::endl;
    std::cout<<v_instr<<" $t2, $t0, $t1"<<std::endl;
    std::cout<<"nop"<<std::endl;
  }
  if(is_a_variable(arg1) && !is_a_variable(arg2)){
    std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
    std::cout<<"lw $t0, "<<table.find_symbol(arg1).offset<<"($sp)"<<std::endl;
    std::cout<<"nop"<<std::endl;
    std::cout<<"addi $t1, $zero, "<<arg2<<std::endl;
    std::cout<<v_instr<<" $t2, $t0, $t1"<<std::endl;
    std::cout<<"nop"<<std::endl;
  }
  if(!is_a_variable(arg1) && is_a_variable(arg2)){
    std::cout<<"addi $sp, $gp, "<<table.stack_pointer<<std::endl;
    std::cout<<"lw $t0, "<<table.find_symbol(arg2).offset<<"($sp)"<<std::endl;
    std::cout<<"nop"<<std::endl;
    std::cout<<"addi $t1, $zero, "<<arg1<<std::endl;
    std::cout<<v_instr<<" $t2, $t0, $t1"<<std::endl;
    std::cout<<"nop"<<std::endl;
  }
  if(!is_a_variable(arg1) && !is_a_variable(arg2)){

    std::cout<<"addi $t0, $zero, "<<arg1<<std::endl; //load $t0 -> arg1
    std::cout<<"addi $t1, $zero, "<<arg2<<std::endl; //load $t1 -> arg2

    std::cout<<v_instr<<" $t2, $t0, $t1"<<std::endl;
  }
  return "$t2";
}

bool is_a_variable(std::string in){
  std::regex r("[0]|[1-9][0-9]*");
  return !regex_match(in,r);
}
#endif
