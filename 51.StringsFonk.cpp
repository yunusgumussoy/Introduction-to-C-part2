#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char str1[]="\ndeneme mesaji";
	
	printf("\ndizgi boyutu:%d", strlen(str1));
	
	char str2[]={};
	strcpy(str2, str1); //birini di�erine kopyalama
	printf("%s", str2);
	
	char str3[]="merhaba";
	printf("%s", strcat(str1,str3)); // iki stringi birle�tirme
}
