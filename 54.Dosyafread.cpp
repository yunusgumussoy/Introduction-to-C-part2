#include <stdio.h>
#include <conio.h>
int main (){
	FILE *f;
	char buffer[20]; //20 karakterli yapý
	if (f=fopen("out.txt","r"))
	{
		fread(buffer,1,10,f); //1 karakterden 10 kere oku
		buffer[10]=0;
		fclose(f);
		printf("first 10 characters of the file:\n%s\n",buffer);
	}
	else{
		printf("Dosya acilamadý");
	}
	return 0;
}
