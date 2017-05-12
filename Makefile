/*....................................................
* Author: Sanyam Arya
* ersanyamarya@gmail.com
* https://www.facebook.com/er.sanyam.arya
* https://www.linkedin.com/in/sanyam-arya-077ab638/
......................................................*/
Blinky:Blinky.out
Blinky.out:Main.o
	arm-linux-gnueabihf-gcc Main.o -o Blinky.out -static
Main.o:Main.c
	arm-linux-gnueabihf-gcc Main.c -c
clean: 
	rm Main.o Blinky.out
	echo All 

