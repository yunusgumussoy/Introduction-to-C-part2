#include <stdio.h>
#include <conio.h>

int main(){
	int c;
	FILE *fp;
	fp=fopen("out.txt","w"); // YAZMA modunda aç //fp=file pointer
	fprintf(fp,"Yunus Gumussoy", c);
	fclose(fp);
	fp=fopen("out.txt","r"); //okumaya baþlar
	while(!feof(fp)) //dosyanýn sonuna geldiðini gösterir
	{					// yoksa okuma sonsuza kadar devam eder
		c=getc(fp); // dosyanýn içindeki karakteri göstermek için
		printf("\n%c",c);
	}
	getch();
}
