#include<stdio.h>
#include<Windows.h>
int main()
{
	int age;
	scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else if (age>=18&&age<28)
	{
		printf("����\n");
	}
	else if (age>=28 && age < 40)
	{
		printf("׳��\n");
	}
	else
	{
		printf("��үү\n");
	}





	system("pause");
	return 0;
}