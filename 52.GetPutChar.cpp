#include <stdio.h>
#include <string.h>


//getchar ve putchar sadece karakter için kullanýlýr
//kelime girilirse sadece ilk karakteri alýr
main ()
{
	char ch;
	printf("Enter a character:");
	ch=getchar(); //Girilen karakteri alýp ch ye atadýk
	printf("The Character entered is:");
	putchar(ch); //Girilen karakteri yazdýrdýk
}
