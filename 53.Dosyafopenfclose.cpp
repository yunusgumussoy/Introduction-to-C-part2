#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	FILE *outfile, *infile;
	int b=5,f;
	float a=13.72, c=6.68, e,g;
	outfile=fopen("testdata","w"); // YAZMA modunda a�
	fprintf(outfile, "%f %d %f", a,b,c); //dosyaya yaz
	fclose(outfile);//dosyay� kapat!
	infile=fopen("testdata","r"); //OKUMA modunda a�
	fscanf(infile,"%f %d %f",&e,&f,&g); //dosyay� oku
	printf("%f %d %f \n", a,b,c);
	printf("%f %d %f \n", e,f,g);
}
