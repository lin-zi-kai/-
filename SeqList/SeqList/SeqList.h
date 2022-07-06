#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

// 增强程序可维护性
#define MAX_SIZE 100
typedef int SQDataType;

//静态顺序表
//typedef struct SeqList
//{
//    SQDataType a[MAX_SIZE]; // 定长数组
//    int size; //有效数据的个数
//}SL;
//动态顺序表
typedef struct SeqList
{
    SQDataType* a; // 指向动态开辟的数组
    size_t size; // 有效数据个数
    size_t capacity; // 容量空间的大小
}SL;

//初始化
void SeqListInit(SL* ps);
//打印
void SeqListPrint(SL* ps);
//扩容
void SeqListCheckCapacity(SL* ps);
//头插 尾插 头删 尾删
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPushFront(SL* ps, SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);
//插入和删除
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);
//销毁
void SeqListDestory(SL* ps);
//查找
int SeqListFind(SL* ps, SQDataType x);
//修改
void SeqListModity(SL* ps, int pos, SQDataType x);


