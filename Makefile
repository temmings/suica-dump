build: suica

suica: main.c
	gcc -g -O0 -Wall -o $@ $^ -lpafe

clean:
	rm -rf *.o *.dSYM suica
