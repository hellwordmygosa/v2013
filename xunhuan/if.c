#include<stdio.h>
#include<Windows.h>
int main()
{
	int age;
	scanf("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else if (age>=18&&age<28)
	{
		printf("青年\n");
	}
	else if (age>=28 && age < 40)
	{
		printf("壮年\n");
	}
	else
	{
		printf("老爷爷\n");
	}





	system("pause");
	return 0;
}