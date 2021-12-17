#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char str1[]="\ndeneme mesaji";
	
	char str3[]="merhaba";
	
	if(!strcmp(str1,str3)) // iki stringi karþýlaþtýrma
	{
		printf ("Stringler ayni");
	}
	else
	{
	printf("Stringler farkli"); 
	}
	
	char str2[]="Nasilsiniz";
	
	if(strchr(str2,'N')) //String içinde karakter arama
	{
		printf("Karakter stringin icinde var");
	}
	else
	{
		printf("Karakter stringin icinde yok");
	}
	
	if(strstr(str2,str3)) //String içinde string arama
	{
		printf("String stringin icinde var");
	}
	else
	{
		printf("String stringin icinde yok");
	}
}
