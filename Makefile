build: suica

suica: main.c
	gcc -lpafe -g -O0 -Wall -o $@ $^

clean:
	rm -rf *.o *.dSYM suica
