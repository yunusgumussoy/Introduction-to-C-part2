#include <stdio.h>
#include <conio.h>

int main(){
	char c;
	FILE *f;
	f=fopen("myfile.txt","w");
	fputs("Yunus GUMUSSOY",f); //dosyaya ekleme yapt�
	fseek(f,15,SEEK_SET); //seek_set= dosyan�n ba��ndan
						//seek_cur=cursor un oldu�u yerden
						//seek_end=dosyan�n sonundan istenen noktaya ta��r
	fputs("Ankara",f);
	fclose(f);
	f=fopen("myfile.txt","r");
	while(!feof(f)){ //dosyan�n i�indeki karakterleri okutur
	c=getc(f);
	printf("%c",c);
}
	return 0;
}
