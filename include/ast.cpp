#ifndef ast_cpp
#define ast_cpp
#include <iostream>
#include <string>
#include "ast.hpp"
#include "symbol_table.hpp"
#include <regex>

std::string makeName(std::string in);
bool is_a_variable(std::string in);
std::string var_or_const_instr(std::string v_instr, std::string c_instr, std::string arg1, std::string arg2, symbol_table table);

std::string ast_node::make_mips(symbol_table &table, int &sp, int &pc){
  //table.print_table();
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
    symbol_table newscope = symbol_table(&table);
    symbol temp;
    temp.name = branches[1]->branches[0]->value;
    temp.type = "function";
    temp.label = pc;
    table.insert(temp);
    symbol_table new_scope = symbol_table(&newscope);
    /*std::cout<<node_type<<std::endl;*/
    std::cout<<branches[0]->make_mips(new_scope, sp, pc);//reutrn type
    //fn name should already be in the stack
    std::cout<<branches[2]->make_mips(new_scope, sp, pc);//arguments
    //assign memory locations to labels has already been done since symbol table keeps track of stack
    std::cout<<temp.name<<":"<<std::endl;
    std::cout<<branches[3]->make_mips(new_scope, sp, pc);//body
  }

  if(node_type == "STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "LABELED_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "DEFAULT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "CASE"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "COMPOUND_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    symbol_table new_scope = symbol_table(&table);
    branches[0]->make_mips(new_scope, sp, pc);
    branches[1]->make_mips(new_scope, sp, pc);

  }
  if(node_type == "DECLARATION_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "STATEMENT_LIST"){/*std::cout<<node_type<<std::endl;*/
    branches[0]->make_mips(table, sp, pc);
    branches[1]->make_mips(table, sp, pc);
  }
  if(node_type == "EXPRESSION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
   if(node_type == "SELECTION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    symbol_table new_scope = symbol_table(&table);
    if (branches[0]-> node_type == "if"){
      std::string skip = makeName("skip");
      std::string end = makeName("end");
      std::cout<< "beq " << branches[2]->make_mips(new_scope, sp, pc) << "r0, " << skip << std::endl;
      //branch if condition is not met to label else
      std::cout<<branches[3]->make_mips(new_scope, sp, pc);
      std::cout<< "beq " << "r0" << "r0 " << end << std::endl;
      std::cout << skip  << ":"<< std::endl;
      if (branches[4]-> node_type == "else"){
        std::cout<<branches[5]->make_mips(new_scope, sp, pc);
      }
      std::cout << end  << ":"<< std::endl;
    }
  }
  if(node_type == "T_SWITCH"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_IF"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_ELSE"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "ITERATION_STATEMENT"){/*std::cout<<node_type<<std::endl;*/
    symbol_table new_scope(&table);
    if (branches[0]-> node_type == "for"){
      std::cout<<branches[1]->make_mips(new_scope, sp, pc);
      std::string start = makeName("start");
      std::string end = makeName("end");
      std::cout << ":" << start << std::endl;
      std::cout<< "beq" << branches[2]->make_mips(new_scope, sp, pc) << "r0" << end << std::endl;
      std::cout<<branches[3]->make_mips(new_scope, sp, pc);
      std::cout<<branches[5]->make_mips(new_scope, sp, pc);
      std::cout<< "beq " << "r0" << "r0 " << start << std::endl;
      //label end
      std::cout << ":" << end << std::endl;
    }
    if (branches[0]-> node_type == "while"){
      std::string end = makeName("end");
      std::cout<< "beq " << branches[1]->make_mips(new_scope, sp, pc) << "r0" << end << std::endl;
      std::cout<<branches[5]->make_mips(new_scope, sp, pc);
      std::cout << ":" << end << std::endl;
    }
  }
  if(node_type == "T_FOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_WHILE"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "T_DO"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "JUMP_STATEMENT"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "GOTO"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "RETURN"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "PRIMARY_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "CONSTANT"){/*std::cout<<node_type<<std::endl;*/
    return value;
  }

  if(node_type == "POSTFIX_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "ARGUMENT_EXPRESSION_LIST"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "UNARY_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "SIZE_OF"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "UNARY_OPERATOR"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "CAST_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/

  }
  if(node_type == "MULTIPLICATIVE_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    if(value == "*"){
      arg1 =branches[0]->make_mips(table, sp, pc);//need a way to check if arg1 is a constant
      arg2 =branches[1]->make_mips(table, sp, pc);
      std::cout<<"lw r1, "<<table.find_symbol(arg1).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      std::cout<<"lw r2, "<<table.find_symbol(arg2).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      std::cout<<"mult r1, r2"<<std::endl;
      std::cout<<"mflo r3"<<std::endl;

      if(table.t1_free == true){
        std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      if(table.t2_free = true){
        std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
        table.t2_free = false;
        return "temp2";
      }
    }
    if(value == "/" or value == "%"){
      arg1 =branches[0]->make_mips(table, sp, pc);//need a way to check if arg1 is a constant
      arg2 =branches[1]->make_mips(table, sp, pc);
      std::cout<<"lw r1, "<<table.find_symbol(arg1).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      std::cout<<"lw r2, "<<table.find_symbol(arg2).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      std::cout<<"div r1, r2"<<std::endl;
      if(value == "/"){std::cout<<"mflo r3"<<std::endl;}//get quotient
      if(value == "%"){std::cout<<"mfhi r3"<<std::endl;}//get remainder

      if(table.t1_free == true){
        std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      if(table.t2_free = true){
        std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
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
      // std::cout<<"lw r1, "<<table.find_symbol(arg1).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      // std::cout<<"lw r2, "<<table.find_symbol(arg2).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      // std::cout<<"add r3, r1, r2"<<std::endl;


      if(table.t1_free == true){
        std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      if(table.t2_free = true){
        std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
        table.t2_free = false;
        return "temp2";
      }
    }
    if(value == "-"){
      arg1 =branches[0]->make_mips(table, sp, pc);//need a way to check if arg1 is a constant
      arg2 =branches[1]->make_mips(table, sp, pc);
      std::cout<<"lw r1, "<<table.find_symbol(arg1).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      std::cout<<"lw r2, "<<table.find_symbol(arg2).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      std::cout<<"sub r3, r1, r2"<<std::endl;

      if(table.t1_free == true){
        std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
        table.t1_free = false;
        return "temp1";
      }
      if(table.t2_free = true){
        std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
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
      std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free = true){
      std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }

  if(node_type == "RELATIONAL_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);

    var_or_const_instr("slt", "slti", arg1, arg2, table);
    if(value == "<"){}
    if(value == ">"){std::cout<<"nor r3, r3, r3"<<std::endl;}//this nots the less than to make a greater than instruction

    if(table.t1_free == true){
      std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free = true){
      std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "EQUALITY_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);

    var_or_const_instr("and", "andi", arg1, arg2, table);

    if(table.t1_free == true){
      std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free = true){
      std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "EXCLUSIVE_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);

    var_or_const_instr("xor", "xori", arg1, arg2, table);

    if(table.t1_free == true){
      std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free = true){
      std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }
  if(node_type == "INCLUSIVE_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
    arg1 =branches[0]->make_mips(table, sp, pc);
    arg2 =branches[1]->make_mips(table, sp, pc);

    var_or_const_instr("or", "ori", arg1, arg2, table);

    if(table.t1_free == true){
      std::cout<<"sw r3, "<<table.find_symbol("temp1").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t1_free = false;
      return "temp1";
    }
    if(table.t2_free = true){
      std::cout<<"sw r3, "<<table.find_symbol("temp2").offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t2_free = false;
      return "temp2";
    }
  }//hi
  if(node_type == "LOGICAL_AND_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "LOGICAL_OR_EXPRESSION"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "CONDITIONAL_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "ASSIGNMENT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/
    if(branches[1]->value == "="){
      std::string s = branches[0]->value;
      std::string res = branches[2]->make_mips(table, sp, pc);
      std::cout<<"lw r3, "<<table.find_symbol(res).offset<<"("<<table.stack_pointer<<")"<<std::endl;//this is the location of temp1
      std::cout<<"sw r3, "<<table.find_symbol(s).offset<<"("<<table.stack_pointer<<")"<<std::endl;
      table.t1_free = true;
      table.t2_free = true;
    }
  }
  if(node_type == "ASSIGNMENT_OPERATOR"){/*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "CONSTANT_EXPRESSION"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "EXPR"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "DECLARATION"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->make_mips(table, sp, pc);
    branches[1]->make_mips(table, sp, pc);
  }
  if(node_type == "DECLARATION_SPECIFIERS"){/*std::cout<<node_type<<std::endl;*/}

  if(node_type == "INIT_DECLARATOR_LIST"){
    /*std::cout<<node_type<<std::endl;*/
    branches[0]->make_mips(table, sp, pc);
    branches[1]->make_mips(table, sp, pc);
  }
  if(node_type == "INIT_DECLARATOR"){
    /*std::cout<<node_type<<std::endl;*/
    symbol s;
    s.name = branches[0]->value;
    s.type = "int";
    s.value = "0";
    if(branches[1] != NULL && branches[1]->node_type != "NULL"){s.value = branches[1]->value;}
    table.insert(s);
    //table.print_table();
  }
  if(node_type == "STORAGE_CLASS_SPECIFIER"){
    /*std::cout<<node_type<<std::endl;*/
  }
  if(node_type == "TYPE_SPECIFIER"){/*std::cout<<node_type<<std::endl;*/}
  if(node_type == "STRUCT_OR_UNION_SPECIFIER"){
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
  return "";
}
std::string makeName(std::string in){
  return in;
}

std::string var_or_const_instr(std::string v_instr, std::string c_instr, std::string arg1, std::string arg2, symbol_table table){
  if(is_a_variable(arg1) && is_a_variable(arg2)){
    std::cout<<"lw r1, "<<table.find_symbol(arg1).offset<<"("<<table.stack_pointer<<")"<<std::endl;
    std::cout<<"lw r2, "<<table.find_symbol(arg2).offset<<"("<<table.stack_pointer<<")"<<std::endl;
    std::cout<<v_instr<<" r3, r1, r2"<<std::endl;
  }
  if(is_a_variable(arg1) && !is_a_variable(arg2)){
    std::cout<<"lw r1, "<<table.find_symbol(arg1).offset<<"("<<table.stack_pointer<<")"<<std::endl;
    std::cout<<c_instr<<" r3, r1, "<<arg2<<std::endl;
  }
  if(!is_a_variable(arg1) && is_a_variable(arg2)){
    std::cout<<"lw r1, "<<table.find_symbol(arg2).offset<<"("<<table.stack_pointer<<")"<<std::endl;
    std::cout<<c_instr<<" r3, r1, "<<arg1<<std::endl;
  }
  if(!is_a_variable(arg1) && !is_a_variable(arg2)){
    std::cout<<"addi r1, r1, 0"<<std::endl;
    std::cout<<"addi r1, r1, "<<arg1<<std::endl; //load r1 -> arg1
    std::cout<<"addi r2, r2, 0"<<std::endl;
    std::cout<<"addi r2, r2, "<<arg2<<std::endl; //load r2 -> arg2

    std::cout<<v_instr<<" r3, r1, r2"<<std::endl;
  }
}

bool is_a_variable(std::string in){
  std::regex r("[0]|[1-9][0-9]*");
  return !regex_match(in,r);
}
#endif
