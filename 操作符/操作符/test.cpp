#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
//int main()
//{
//	int a= 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf(" a = %d, b = %d\n", a, b);
//	a ^= b;
//	b ^= a;
//	a ^= b;
//	printf(" a = %d, b = %d\n", a, b);
//	return 0;
//}
//  
// 
// 这个函数是打印一个数的二进制
//void digui(int n)
//{
//	int m = n;
//	if (m > 0)
//	{
//		int a = n & 1;
//		digui(m / 2);
//		printf("%d", a);
//	}
//}
//这个函数是打印一个数二进制的奇数位和偶数位
void print_number(int n)
{
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };
	int count = 0;
	int m = n;
	while (n)
	{
		n /= 2;
		count++;
	}//此时n=0了，所以需要重新初入n的原来值
	for(int i=0;i<count;i++)
	{
		int ji = m & 1;
		m = m >> 1;
		int ou = m & 1;
		m = m >> 1;
		arr1[i] = ji;
		arr2[i] = ji;
	}
	for (int i = 0; i < count/2; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < count/2; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	print_number(n);
	return 0;
}