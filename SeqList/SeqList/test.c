#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void menu()
{
	printf("********************************************\n");
	printf("***1.尾插数据************2.头插数据*********\n");
	printf("***3.尾删数据************4.头删数据*********\n");
	printf("***5.打印数据************-1.退出************\n");
	printf("***6.查找数据*******************************\n");
	printf( "请输入你操作选项：" );
}

int main()
{
	int control = 0;
	SL s;
	SeqListInit(&s);
	int x = 0;
	while (control != -1)
	{
		menu();
		scanf("%d",&control);
		switch (control)
		{
		case 1:
			printf("请输入你要插入的数据，以-1结束\n");  
			do 
			{
				scanf("%d",&x);
				if (x != -1)
				{
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;		
		case 2:
			printf("请输入你要插入的数据，以-1结束\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushFront(&s, x);
				}
			} while (x != -1);
			break;
		case 3:
			printf("请输入你要删除的数据位置，以-1结束\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPopBack(&s, x);
				}
			} while (x != -1);
			break;
		case 4:
			printf("请输入你要删除的数据位置，以-1结束\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPopFront(&s, x);
				}
			} while (x != -1); 
			break;
		case 5:
			SeqListPrint(&s);
			break;
		case 6:
			printf("请输入你要查找的数据位置，以-1结束\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListFind(&s, &x);
				}				
			} while (x != -1);
			break;
		case 7:
			printf("请输入你要插入的数据位置\n");
			int pos = 0;
			scanf("%d", &pos);
			printf("请输入你要插入的数据\n");
			scanf("%d", &x);
			SeqListInsert(&s, pos, x);
			break; 
		default:
			break;
		}
	}
	SeqListDestory(&s);
	return 0;
}