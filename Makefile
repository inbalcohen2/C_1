

mymaths:power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o


power.o:power.c myMath.h
	gcc -Wall -g -c power.c

basicMathc:	basicMath.c myMath.h
	gcc -Wall -g -c basicMath.c


mymathd:power.o basicMath.o
	gcc -Wall -g -shared power.o basicMath.o -o libmyMath.so

mains:main.o mymaths 
	gcc -Wall -g -o mains main.o libmyMath.a

maind:main.o mymathd 
	gcc -Wall -g -o maind main.o ./libmyMath.so

main.o:main.c myMaths.h
	gcc -o main.o main.c

all:basicMath.o  power.o main.o mymathd mymaths mains maind

clean:
	rm -f *.o *.so *.a maind mains
 
	