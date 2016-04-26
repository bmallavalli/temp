#include<stdio.h>
#include<conio.h>

#define CHECK(number) if(number>10){ \
                         printf("number is > 10"); \
                     }else{  \
                     printf("number<10"); \
					 }
					 				    
                         
				
					  

void main(){
	CHECK(23);
	
	getch();
	//return 0;
	
}
