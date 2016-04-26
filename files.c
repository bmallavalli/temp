#include<stdio.h>
#include<conio.h>

int main(){

FILE *fp;
fp=fopen("newFile.txt","w"); 
/* 1)fopen function returns the address of a file. so hold that address we need a pointer and while opening a file, we need to store all
its details like file name, last byte it read, last byte it wrote. For that purpose stdio.h provided a structure called FILE and so we 
have to cretae a pointer of type FILE to store file's address 

2) if file is not opened successfully it returns null value to fp. so we have to check that condition to ensure the file is opened*/

if(fp==null){
	printf("file opening failed");
}else{
	printf("file opened successfully");
	fclose(fp);
}

getch();
return 0;

}



