#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char ilks[20]="deneme mesaji";
	char ikincis[20]="ikinci mesaj";
	char *ilk =ilks;
	char *iki =ikincis;
	printf("\n%s %s", ilk, iki);
	//ilk=iki;
	strcpy(ilk,iki);
/*	char c=iki[0];
	int i=0;
	while(c!='\0'){
		ilk[i]=iki[i];
		i++;
		c=iki[i];
	}
	*/
	printf("\n%s %s", ilk, iki);
	ilk[3]='x';
	printf("\n%s %s", ilk, iki);
	printf("\ndizgi boyutu:%d", strlen(ilk));
}
