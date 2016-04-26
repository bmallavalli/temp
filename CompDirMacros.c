#include<stdio.h>
#include<conio.h>

/*
conditional compailation macros 
#ifdef ----- this executes if the given macro is defined
#ifndef ------ this executes if the spcified macro is not defined
#undef ------- this is used to undefine a defined macro

All these are demonstrated below

*/


#define INTEL
#define MOTOROLA
#undef MOTOROLA

int main(){
	
	#ifdef INTEL
	printf("intel is defined\n");
	#endif
	
	#ifndef SAMSUNG
	printf("Samnsung is not defined\n");
	#endif
	
	#ifndef MOTOROLA
	printf("Motorola is undefined\n");
	#endif
	
	getch();
	return 0;
	
	
	
}

