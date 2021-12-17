#include <stdio.h>


main()
{
	int a, *b, **c;
	a=100;
	b=&a;
	c=&b;
	printf("Address : %d\n", &a);
	printf("Address : %d\n", b);
	printf("Address : %d\n", *c);
	printf("Address : %d\n", &b);
	printf("Address : %d\n", c);
	printf("Address : %d\n", &c);
	printf("Address : %d\n", a);
	printf("Address : %d\n", b);
	printf("Address : %d\n", c);
	printf("Address : %d\n", *b);
	printf("Address : %d\n", *c);
	printf("Address : %d\n", **c);
	
}
