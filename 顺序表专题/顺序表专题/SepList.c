#include "SepList.h"


void SLInit(SL* ps){
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

void SLDestroy(SL* ps) {
	if (ps->arr)//判断arr不为空 
	{
		free(ps->arr);
	}//释放内存后，初始化
	SLInit(ps);
}

void SLPrint(SL ps) {
	for (int i = 0; i < ps.size; i++)
	{
		printf("%d ", ps.arr[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)//字符大小等于内存，需要添加内存，内存一般成倍加;
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));
		//这一步是为了防止内存不足导致原数据被删除进行的测试；
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newcapacity;
	}
}

void SLInsertEnd(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps->size++]= x;
}

void SLInsertTop(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	for (int i = ps->size; i>0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];//ps->arr[1]=ps->arr[0];
	}
	ps->arr[0] = x;
	ps->size++;
}

void SLPopEnd(SL* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--;
}

void SLPopFirst(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	assert(pos < ps->size);
	for (int i = ps->size; i>pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];//ps->arr[pos+1]=ps->arr[pos]
	}
	ps->arr[pos] = x;
	ps->size++;
}

void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(ps->size);
	for (int i = pos; i <ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];//ps->arr[ps->size-2]=ps->arr[ps->size-1]
	}
	ps->size--;
}


