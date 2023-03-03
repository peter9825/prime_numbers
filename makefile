#Target creates executable file primeNum
primeNum: primeNum.o
        gcc primeNum.o -o primeNum -lm

#Target creates object file primeNum.o
primeNum.o: primeNum.c
        gcc -c primeNum.c

#Target deletes all object files
clean:
        rm *.o
