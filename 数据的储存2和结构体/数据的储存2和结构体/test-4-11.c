#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>

//struct book {
//	char name[20];
//	char author[10];
//	float price;
//	char id[11];
//};
//
//struct book a = { .author = "����",.id = "JD10086",.name = "����c����",.price = 18.8 };//ȫ�ֱ���
//int main()
//{
//	printf("%s %s %f %s\n", a.name, a.author, a.price, a.id);
//	return 0;
//}

//typedef struct Node {
//	int data;
//	struct Node* p;//�ṹ���������
//} Node;
//int main() {
//	Node first;
//	Node second;
//	return 0;
//}

//�����ṹ�岻����ɽṹ���������

struct S {
	char a;
	int b;
	char c;
};
int main()
{
	struct S s;
	int sz = sizeof(s);
	printf("%zd\n", sz);
	return 0;
}