#To use this make file, navigate to the directory containing the makefile and type "make"
#		

all: main

newMain: main.c
	gcc -std=c11 main.c -o program.exe

main: myProg.c
	gcc -std=c11 myProg.c -o myAwesomeProgram.exe
	
clean:
	rm myAwesomeProgram.exe
	
fix: myProg.c
	rm myAwesomeProgram.exe
	gcc -std=c11 myProg.c -o myAwesomeProgram.exe
	./myAwesomeProgram.exe
	
	
	

