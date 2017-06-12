monte: montecarlo.c
	clang -lm montecarlo.c
monteT: monteThread.c
	gcc -Wall -o threadMonte monteThread.c -pthread 
