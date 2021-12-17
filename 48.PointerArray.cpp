#include <stdio.h>


main()
{
	int arr[5]={15,20,25,30,35};
	int *ptr;
	//ptr = &arr; şeklindeki komut çalışmaz
	ptr = &arr[0]; // ya bu şekilde olmalı yada;
	//ptr = arr; şeklinde olmalı
	
	for (int i=0; i<5 ;i++)
	{
		printf("Element %d: %d\n", i+1, *ptr);
		ptr++;
	}
}
