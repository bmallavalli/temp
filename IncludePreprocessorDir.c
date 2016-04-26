#include<stdio.h>
#include<conio.h>

/*
This is used to include another files or pgms into our pgm
We have two formats to specify it
#include<file_name>
and
#include"file_name"
<> indicates to check for the file specified in tools-compiler options-c-includes
"" indicates first check file in the dictory in which this particular program is stored, if not found then search in path specified in compiler options

*/

#include "display.c"

int main(){
	display();
	
	getch();
	return 0;
	
}
