#include "SeqList.h"

//void SeqListInit(SL* ps)
//{
//	
//	memset(ps->a, 0, sizeof(SQDataType) * MAX_SIZE);
//	ps->size = 0;
//}
//
//void SeqListPushBack(SL* ps, SQDataType x)
//{
//	if (ps->size >= MAX_SIZE)
//	{
//		printf("");
//		return 0;
//	}
//	ps->a[ps->size] = x;
//	ps->size++;
//}

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//ÂúÁËÀ©ÈÝ
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * 2 * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}

void SeqListPushBack(SL* ps, SQDataType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
	//SeqListInsert(ps, ps->size, x);
}

void SeqListPushFront(SL* ps, SQDataType x)
{
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
	//SeqListInsert(ps, 0, x);
}

void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
	//SeqListErase(ps, ps->size - 1);
}

void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--; 
	//SeqListErase(ps, 0);
}

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInsert(SL* ps, size_t pos, SQDataType x)
{
	assert(pos <= ps->size);
	SeqListCheckCapacity(ps);
	size_t end = ps->size;
	while (end > pos)
	{
		ps->a[end] = ps->a[end - 1];
		--end;
	}
	ps ->a[pos] = x;
	ps->size++;
}

void SeqListErase(SL* ps, size_t pos)
{
	assert(pos < ps->size);
	size_t start = pos + 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--;
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

int SeqListFind(SL* ps, SQDataType x)
{
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListModity(SL* ps, size_t pos, SQDataType x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;
}
