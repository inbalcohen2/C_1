
GCC=gcc -Wall -g
POWBASIC=power.o basicMath.o

all: mymaths mymathd mains maind main.o $(POWBASIC)

power.o: power.c myMath.h
	$(GCC) -c power.c
basicMath.o: basicMath.c myMath.h
	$(GCC) -c basicMath.c

main.o: main.c myMath.h
	gcc -c main.c

mymaths: power.o basicMath.o
	ar -rcs libmyMath.a $(POWBASIC)

mymathd: power.o basicMath.o
	$(GCC) -o libmyMath.so -shared $(POWBASIC)

mains: main.o mymaths
	$(GCC) -o mains main.o libmyMath.a
maind: main.o mymathd
	$(GCC) -o maind main.o ./libmyMath.so

clean:
	rm -f *.o *.a *.so mains maind

