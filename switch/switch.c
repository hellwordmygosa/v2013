#include<stdio.h>
#include<Windows.h>

int main()
{
	int day = 0;
	scanf("%d",&day);

	switch (day)
	{

		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("������\n");
			break;
		case 7:
		case 6:
			printf("��Ϣ��\n");
			break;
		default:
			printf("�������\n");
			break;


		/*case 1:
			printf("����������1\n");
			break;
		case 2:
			printf("����������2\n");
			break;
		case 3:
			printf("����������3\n");
			break;
		case 4:
			printf("����������4\n");
			break;
		case 5:
			printf("����������5\n");
			break;
		case 6:
			printf("����������6\n");
			break;
		case 7:
			printf("����������7\n");
			break;*/

	}



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