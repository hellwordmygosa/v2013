#include<stdio.h>
#include<Windows.h>
int main()

{

	char cc = 0;
	while ((cc=getchar())!=EOF)
	{
		printf("%c", cc);
				
	}








	//int i = 0;
	//while (i<=10)
	//{
	//	if (i == 5)
	//	{
	//		i++;
	//		continue;
	//	}


	//		
	//	printf("%d\n", i);
	//	i++;
	//}


	system("pause");
	return 0;
}