CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter
CPPFLAGS += -I include

all : bin/compiler


bin/compiler : c_compiler.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler $^
clean :
	rm *.o
