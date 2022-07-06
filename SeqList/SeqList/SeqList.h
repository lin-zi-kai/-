#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

// ��ǿ�����ά����
#define MAX_SIZE 100
typedef int SQDataType;

//��̬˳���
//typedef struct SeqList
//{
//    SQDataType a[MAX_SIZE]; // ��������
//    int size; //��Ч���ݵĸ���
//}SL;
//��̬˳���
typedef struct SeqList
{
    SQDataType* a; // ָ��̬���ٵ�����
    size_t size; // ��Ч���ݸ���
    size_t capacity; // �����ռ�Ĵ�С
}SL;

//��ʼ��
void SeqListInit(SL* ps);
//��ӡ
void SeqListPrint(SL* ps);
//����
void SeqListCheckCapacity(SL* ps);
//ͷ�� β�� ͷɾ βɾ
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPushFront(SL* ps, SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);
//�����ɾ��
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);
//����
void SeqListDestory(SL* ps);
//����
int SeqListFind(SL* ps, SQDataType x);
//�޸�
void SeqListModity(SL* ps, int pos, SQDataType x);


