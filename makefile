run: compile
	./main.out

compile: main.cpp
	gcc -o main.out main.cpp -lstdc++