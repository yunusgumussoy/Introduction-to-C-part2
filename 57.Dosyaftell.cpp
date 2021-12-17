#include <stdio.h>
#include <conio.h>

int main(){
	FILE *f;
	f=fopen("dosyam.txt","w");
	fprintf(f,"Yunus GUMUSSOY"); //dosyaya yazdýrdý
	printf("Dosyadaki konum:%ld\n",ftell(f)); //cursor un yerini gösterdi- 
											//yazýlan ifadenin kaç karakter olduðunu da gösterir
	fclose(f);
	return 0;
}
