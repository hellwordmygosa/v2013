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
		struct book b1={ "c语言程序设计",88 };
		strcpy(b1.name,"c++程序设计");
		struct book* pb = &b1;

		printf("%s\n", pb->name);
		printf("%d\n", pb->pice);
		
		
		
		//数据体结构的几种类型
		//结构体变量用.成员
		//指针变量结构体用->成员
		//printf("%s\n", (*pb).name);
		//printf("%d\n", (*pb).pice);

		//printf("书名=%s\n", b1.name);
		//printf("价格=%d\n", b1.pice);




	system("pause");
	return 0;

}