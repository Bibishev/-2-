CC = gcc

all : sed_simplified

sed_simplified : main.o functions.o checkconfirm.o
$(CC) - o sed_simplified main.o functions.o checkconfirm.o

main.o : main.c title.h
$(CC) - c main.c

functions.o : functions.c title.h
$(CC) - c functions.c

checkconfirm.o : checkconfirm.c title.h
$(CC) - c checkconfirm.c

test1 :
. / sed_simplified input.txt - r "new" "prog"

test2 :
	. / sed_simplified input.txt - i - f "mega"

	test3 :
	. / sed_simplified input.txt - i - b "lol"

	test4 :
	. / sed_simplified input.txt - d "prog"

	clean :
	rm - f * .o sed_simplified
