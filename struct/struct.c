#include<stdio.h>
#include<Windows.h>
#include<string.h>

struct book
{
	char name[20];
	int pice;
} ;
int main()
{
		struct book b1={ "c���Գ������",88 };
		strcpy(b1.name,"c++�������");
		struct book* pb = &b1;

		printf("%s\n", pb->name);
		printf("%d\n", pb->pice);
		
		
		
		//������ṹ�ļ�������
		//�ṹ�������.��Ա
		//ָ������ṹ����->��Ա
		//printf("%s\n", (*pb).name);
		//printf("%d\n", (*pb).pice);

		//printf("����=%s\n", b1.name);
		//printf("�۸�=%d\n", b1.pice);




	system("pause");
	return 0;

}