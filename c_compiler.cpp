#include <iostream>
#include <vector>
#include <string>
#include <fstream>



int main(int argc, char * argv[]){
  // define file:
  //   c_filename = argv[2]
  //   destination_file = argv[4]
  std::string command;

  if(std::string(argv[1]) == "--translate"){
    std::cout<<"Translator Activated"<<std::endl;
    command = "./translator/bin/c_translator < "+std::string(argv[2]) +" > "+std::string(argv[4]);
    system(command.c_str());
  }
  if(std::string(argv[1]) == "-S"){
    std::cout<<"Compiler Activated"<<std::endl;
    command = "./compiler/bin/compiler < "+std::string(argv[2]) +" > "+std::string(argv[4]);
    system(command.c_str());
  }
  return 0;
}
