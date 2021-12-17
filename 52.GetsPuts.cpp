#include <stdio.h>
#include <string.h>

//gets puts tanýmlanan stringin uzunluðuna göre komple cümleyi alýr
main ()
{
	char str[35];
	printf("Enter a string:");
	gets(str); //Girilen string alýr
	printf("The String entered is:");
	puts(str); //Girilen stringi yazdýrdýk
}
