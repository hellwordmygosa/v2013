#include<stdio.h>
#include<Windows.h>

int main()
{

	int a = 20;
	int* p = &a;
	printf("a=%d\n", *p);
	*p = 66;
	printf("a=%d\n", *p);


		system("pause");
		return 0;
}