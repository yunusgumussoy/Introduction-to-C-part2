#include <stdio.h>
#include <conio.h>

int main(){
	FILE *f;
	f=fopen("dosyam.txt","w");
	fprintf(f,"Yunus GUMUSSOY"); //dosyaya yazd�rd�
	printf("Dosyadaki konum:%ld\n",ftell(f)); //cursor un yerini g�sterdi- 
											//yaz�lan ifadenin ka� karakter oldu�unu da g�sterir
	fclose(f);
	return 0;
}
