# compile program 

#default target builds executable
all: pipegrep

#source fiels and header required by program
pipegrep: main.cpp args.cpp stage1.cpp stage2.cpp stage3.cpp stage4.cpp stage5.cpp pipeline.h bounded_buffer.h
	g++ -std=c++17 -pthread main.cpp args.cpp stage1.cpp stage2.cpp stage3.cpp stage4.cpp stage5.cpp -o pipegrep

#remove compiled executale
clean:
	rm -f pipegrep
#dont represent actual files
.PHONY: all clean