#include<stdio.h>
#include<conio.h>
void main(){
int size =6;
int marks[size];
int counter;
printf("Enter values");
for(counter=0;counter<size; counter++){

scanf("%d",&marks[counter]);
}

for(counter=0;counter<size; counter++){

printf("values are at index %d is %d\n",counter, marks[counter]);
}

getch();

}
