#include <stdio.h>
#include <conio.h>
int main(){
	int a=10;
	int *p;
	p=&a;
	printf("%d\n",*p); //p nin g�sterdi�i de�eri basar
	printf("%d\n",p); // p nin g�sterdi�i yerin adresi
	printf("%d\n",a); // a nin de�erini 
	printf("%d\n",&a); //a nin adresi
	printf("%d\n",&p); //p nin adresi
	getch();
}
