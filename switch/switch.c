#include<stdio.h>
#include<Windows.h>

int main()
{

	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;//M变成 3
	case 2:n++;//n变成 2
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:m++; n++; break;//,m变成 4  n变成3
		}
	case 4:m++;//m变成5，n变成3
	default:
		break;

	}
	printf("n=%d\n m=%d\n", n, m);//最终输出结果 m=5   n=3




	/*int day = 0;
	scanf("%d",&day);

	switch (day)
	{

		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 7:
		case 6:
			printf("休息日\n");
			break;
		default:
			printf("输入错误\n");
			break;
*/

		/*case 1:
			printf("今天是星期1\n");
			break;
		case 2:
			printf("今天是星期2\n");
			break;
		case 3:
			printf("今天是星期3\n");
			break;
		case 4:
			printf("今天是星期4\n");
			break;
		case 5:
			printf("今天是星期5\n");
			break;
		case 6:
			printf("今天是星期6\n");
			break;
		case 7:
			printf("今天是星期7\n");
			break;*/

	



	//int i = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	//printf("%d\n", i);
	//	if (i % 2 == 1)
	//	{
	//		printf("%d\n", i);

	//	}


	//}

	system("pause");
	return 0;
}