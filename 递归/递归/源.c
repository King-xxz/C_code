#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////�ݹ�ʵ��쳲�����
//int Fun(int a)
//{
//	if (a <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fun(a - 1) + Fun(a - 2);
//	}
//
//}
////����ʵ��쳲�����
//int Func(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(x>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//
//	}
//	return c;
//
//}
//

////ʵ��n�η��ĵݹ�
//int Fun(int x,int n)
//{
//	if (n == 1)
//	{
//		return x;
//	}
//	else
//	{
//		return x * Fun(x, n - 1);
//	}
//}

////ʵ��ÿһλ�ĺ�
//int DigitSum(int n,int b)
//{
//	if (n <= 9)
//	{
//		int a = n;
//		b += a;
//		return b;
//	}
//	else
//	{
//		int a = n % 10;
//		b += a;
//		return DigitSum(n/10,b);
//	}
//
//
//}
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int m=DigitSum(x,0);
//	printf("%d\n", m);
//
//	return 0;
//}

////�ݹ���׳�
//int Fac0(int x)
//{
//	if (x <=1)
//	{
//		return 1;
//	}
//	return x * Fac0(x - 1);
//}
////�õ�����׳�
//int Fac1(int x)
//{
//	int a = 1;
//	while (x)
//	{
//		a *= x;
//		x--;
//	}
//	return a;
//}
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int n = Fac0(x);
//	int m = Fac1(x);
//	printf("%d  %d", n, m);
//	return 0;
//}

//��ӡһ������ÿһλ(�淽��
void print(int n)
{
	if (n <= 9)
	{
		printf("%d  ", n);
	}
	else
	{
		printf("%d  ", n % 10);
		print(n / 10);
	}
}

void print1(int n)
{
	if (n > 9)
	{
		print1(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{	
	int a = 0;
	scanf("%d", &a);
	print(a);
	print1(a);

	return 0;
}