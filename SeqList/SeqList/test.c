#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void menu()
{
	printf("********************************************\n");
	printf("***1.β������************2.ͷ������*********\n");
	printf("***3.βɾ����************4.ͷɾ����*********\n");
	printf("***5.��ӡ����************-1.�˳�************\n");
	printf("***6.��������*******************************\n");
	printf( "�����������ѡ�" );
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
			printf("��������Ҫ��������ݣ���-1����\n");  
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
			printf("��������Ҫ��������ݣ���-1����\n");
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
			printf("��������Ҫɾ��������λ�ã���-1����\n");
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
			printf("��������Ҫɾ��������λ�ã���-1����\n");
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
			printf("��������Ҫ���ҵ�����λ�ã���-1����\n");
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
			printf("��������Ҫ���������λ��\n");
			int pos = 0;
			scanf("%d", &pos);
			printf("��������Ҫ���������\n");
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