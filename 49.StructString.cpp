#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef enum{
	bay,
	bayan
}cinsiyet;
typedef enum{
	pazartesi,
	sali,
	carsamba,
	persembe,
	cuma,
	cumartesi,
	pazar
} gunler;
typedef struct {
	int yas;
	char *isim;
	cinsiyet c;
	gunler tatilgunu;
	} insan;
	int emeklimi(insan*birey){
		printf("\n %d %u", birey->yas,birey->c); //kodun buraya kadar nasýl geldiðini görmek için
		fflush(stdout); //hata yakalamak için
		perror("gecti"); // hata debugging yöntemi
		if (birey->c==bay && birey->yas>55)
		return 1;
		if (birey->c==bayan && birey->yas>50)
		return 1;
		return 0;
	}
	int main (){
		int a;
		insan ali;
		insan *veli;
		veli=(insan*)malloc(sizeof(insan));
		veli->c=bay;
		veli ->yas=60;
		ali.yas=30;
		ali.c = bay;
		ali.tatilgunu=persembe;
		printf("alinin yasi:%d %u %u", ali.yas, ali.c, ali.tatilgunu);
		printf("\nvelinin yasi:%d", veli->yas);
		printf("\nali emekli mi:%d", emeklimi(&ali)); //ali yi göstermesi için &
		printf("\nveli emekli mi:%d", emeklimi(veli));
	}
