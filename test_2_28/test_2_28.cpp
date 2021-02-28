#include<stdio.h>
#include<Windows.h>

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));


	/*int a = 20;
	int* p = &a;
	printf("a=%d\n", *p);
	*p = 66;
	printf("a=%d\n", *p);*/


		system("pause");
		return 0;
}