#include <stdio.h>
#include <string.h>


//getchar ve putchar sadece karakter i�in kullan�l�r
//kelime girilirse sadece ilk karakteri al�r
main ()
{
	char ch;
	printf("Enter a character:");
	ch=getchar(); //Girilen karakteri al�p ch ye atad�k
	printf("The Character entered is:");
	putchar(ch); //Girilen karakteri yazd�rd�k
}
