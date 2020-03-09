CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

all : bin/c_translator bin/eval_expr

src/c2python_parser.tab.cpp src/c2python_parser.tab.hpp : src/c2python_parser.y
	bison -v -d src/c2python_parser.y -o src/c2python_parser.tab.cpp

src/c2python_lexer.yy.cpp : src/c2python_lexer.flex src/c2python_parser.tab.hpp
	flex -o src/c2python_lexer.yy.cpp  src/c2python_lexer.flex

bin/c_translator : src/c_translator.o src/c2python_parser.tab.o src/c2python_lexer.yy.o src/c2python_parser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_translator $^

bin/eval_expr : src/eval_expr.o src/c2python_parser.tab.o src/c2python_lexer.yy.o src/c2python_parser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/eval_expr $^


clean :
	rm src/*.o
	rm bin/*
	rm src/*.tab.cpp
	rm src/*.yy.cpp
