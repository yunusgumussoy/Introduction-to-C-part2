#include <stdio.h>
#include <conio.h>

int main(){
	int c;
	FILE *fp;
	fp=fopen("out.txt","w"); // YAZMA modunda a� //fp=file pointer
	fprintf(fp,"Yunus Gumussoy", c);
	fclose(fp);
	fp=fopen("out.txt","r"); //okumaya ba�lar
	while(!feof(fp)) //dosyan�n sonuna geldi�ini g�sterir
	{					// yoksa okuma sonsuza kadar devam eder
		c=getc(fp); // dosyan�n i�indeki karakteri g�stermek i�in
		printf("\n%c",c);
	}
	getch();
}
