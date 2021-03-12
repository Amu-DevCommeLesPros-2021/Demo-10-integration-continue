test : main.c
	gcc -Wall -Werror --pedantic --debug main.c -I ./ -o test

check: test
	./test
