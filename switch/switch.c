#include<stdio.h>
#include<Windows.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		//printf("%d\n", i);
		if (i % 2 == 1)
		{
			printf("%d\n", i);

		}


	}

	system("pause");
	return 0;
}