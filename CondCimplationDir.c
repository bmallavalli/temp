#include<stdio.h>
#include<conio.h>

#define MARK 40

int main(){
	#if MARK>75
	printf("distinction");
	
	#elif MARK>50
	printf("first class");
	
	#else
	printf("sec class");
	
	#endif
	
	getch();
	return 0;
}
