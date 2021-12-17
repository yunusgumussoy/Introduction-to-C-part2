#include <stdio.h>


main()
{
	char *ptr[]={
	"ocak","subat","mart","nisan","mayis",
	"haziran","temmuz","agustos","eylul","ekim",
	"kasim","aralik"	
	};
	
	for (int i=0; i<12 ;i++)
	{
		printf("Aylar %d: %s\n", i+1, ptr[i]);
	}
}
