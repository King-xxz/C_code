#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "assert.h"

typedef int SLDataType;
//#define N 100

////���徲̬˳���
//typedef struct SeqList {
//	SLDataType arr[N];
//	int size;
//}SL;

//���嶯̬˳���
typedef struct SeqList {
	SLDataType* arr;
	int size;
	int capacity;
}SL;

//��ʼ��˳���
void SLInit(SL* ps);

//˳��������
void SLDestroy(SL* ps);

//˳���Ĵ�ӡ�������ֶΣ�
void SLPrint(SL ps);

//˳����ڴ���ж�
void SLCheckCapacity(SL* ps);

//˳����ĩβ����
void SLInsertEnd(SL* ps,SLDataType x);

//˳����ͷ������
void SLInsertTop(SL* ps, SLDataType x);

//˳����β��ɾ����
void SLPopEnd(SL* ps);

//˳����ͷ��ɾ����
void SLPopFirst(SL* ps);

//˳��������λ�ò�����ɾ��
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);


