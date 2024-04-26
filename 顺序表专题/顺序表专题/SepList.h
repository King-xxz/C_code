#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "assert.h"

typedef int SLDataType;
//#define N 100

////定义静态顺序表
//typedef struct SeqList {
//	SLDataType arr[N];
//	int size;
//}SL;

//定义动态顺序表
typedef struct SeqList {
	SLDataType* arr;
	int size;
	int capacity;
}SL;

//初始化顺序表
void SLInit(SL* ps);

//顺序表的销毁
void SLDestroy(SL* ps);

//顺序表的打印（检验手段）
void SLPrint(SL ps);

//顺序表内存的判断
void SLCheckCapacity(SL* ps);

//顺序表的末尾插入
void SLInsertEnd(SL* ps,SLDataType x);

//顺序表的头部插入
void SLInsertTop(SL* ps, SLDataType x);

//顺序表的尾部删除；
void SLPopEnd(SL* ps);

//顺序表的头部删除；
void SLPopFirst(SL* ps);

//顺序表的任意位置插入与删除
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);


