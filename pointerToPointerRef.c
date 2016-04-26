#include<stdio.h>
#include<conio.h>
int main(){
	int x = 10;
	int *p;
	int **q;
	p=&x;
	q=&p;
	printf("x value: %d\n", x);
	printf("address of x is %u\n\n",&x);
	
	printf(" value of pointer p is %u\n", p);
	printf("adress of pointer p is %u\n", &p);
	printf("The value pointer p is pointing to is %d\n\n", *p);
	
	printf(" value of pointer q is %u\n", q);
	printf("adress of pointer q is %u\n", &q);
	printf("The value pointer q is pointing to is %d\n\n", **q);
	
	getch();
	
	return 0;
	
	
}

