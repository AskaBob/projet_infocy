all : exec

affichage.o : affichage.c affichage.h
	gcc -c affichage.c -o affichage.o

choice.o: choice.c choice.h
	gcc -c choice.c -o choice.o

fight.o: fight.c fight.o
	gcc -c fight.c -o fight.o

file.o: file.c file.h
	gcc -c file.c -o file.o

init.o: init.c init.h
	gcc -c init.c -o init.o

save.o: save.c save.h
	gcc -c save.c -o save.o

main.o: main.c struct.h affichage.h choice.h fight.h file.h init.h save.h
	gcc -c main.c -o main.o

exec : main.o save.o init.o file.o fight.o choice.o affichage.o 
	gcc $^ -o $@

clean :
	rm*.o
	rm exec