#include <stdio.h>


main()
{
	int arr[5]={15,20,25,30,35};
	int *ptr;
	//ptr = &arr; �eklindeki komut �al��maz
	ptr = &arr[0]; // ya bu �ekilde olmal� yada;
	//ptr = arr; �eklinde olmal�
	
	for (int i=0; i<5 ;i++)
	{
		printf("Element %d: %d\n", i+1, *ptr);
		ptr++;
	}
}
