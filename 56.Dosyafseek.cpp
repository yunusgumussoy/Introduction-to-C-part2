#include <stdio.h>
#include <conio.h>

int main(){
	char c;
	FILE *f;
	f=fopen("myfile.txt","w");
	fputs("Yunus GUMUSSOY",f); //dosyaya ekleme yaptý
	fseek(f,15,SEEK_SET); //seek_set= dosyanýn baþýndan
						//seek_cur=cursor un olduðu yerden
						//seek_end=dosyanýn sonundan istenen noktaya taþýr
	fputs("Ankara",f);
	fclose(f);
	f=fopen("myfile.txt","r");
	while(!feof(f)){ //dosyanýn içindeki karakterleri okutur
	c=getc(f);
	printf("%c",c);
}
	return 0;
}
