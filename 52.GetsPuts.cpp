#include <stdio.h>
#include <string.h>

//gets puts tan�mlanan stringin uzunlu�una g�re komple c�mleyi al�r
main ()
{
	char str[35];
	printf("Enter a string:");
	gets(str); //Girilen string al�r
	printf("The String entered is:");
	puts(str); //Girilen stringi yazd�rd�k
}
