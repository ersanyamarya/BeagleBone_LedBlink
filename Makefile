Blinky:Blinky.out
Blinky.out:Main.o
	arm-linux-gnueabihf-gcc Main.o -o Blinky.out -static
Main.o:Main.c
	arm-linux-gnueabihf-gcc Main.c -c
clean: 
	rm Main.o Blinky.out
	echo All 

