#include <stdio.h>
#include <conio.h>
int main(){
	int a=10;
	int *p;
	p=&a;
	printf("%d\n",*p); //p nin gösterdiði deðeri basar
	printf("%d\n",p); // p nin gösterdiði yerin adresi
	printf("%d\n",a); // a nin deðerini 
	printf("%d\n",&a); //a nin adresi
	printf("%d\n",&p); //p nin adresi
	getch();
}
