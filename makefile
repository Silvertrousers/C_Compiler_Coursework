CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

all : bin/c_compiler 

src/c_compiler_parser.tab.cpp src/c_compiler_parser.tab.hpp : src/c_compiler_parser.y
	bison -v -d src/c_compiler_parser.y -o src/c_compiler_parser.tab.cpp

src/c_compiler_lexer.yy.cpp : src/c_compiler_lexer.flex src/c_compiler_parser.tab.hpp
	flex -o src/c_compiler_lexer.yy.cpp  src/c_compiler_lexer.flex

bin/c_compiler : c_compiler.o src/c_compiler_parser.tab.o src/c_compiler_lexer.yy.o src/c_compiler_parser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler $^




clean :
	rm *.o
	rm src/*.o
	rm bin/*
	rm src/*.tab.cpp
	rm src/*.yy.cpp
