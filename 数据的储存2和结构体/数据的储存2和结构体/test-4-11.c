#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>

//struct book {
//	char name[20];
//	char author[10];
//	float price;
//	char id[11];
//};
//
//struct book a = { .author = "鹏哥",.id = "JD10086",.name = "鹏哥c语言",.price = 18.8 };//全局变量
//int main()
//{
//	printf("%s %s %f %s\n", a.name, a.author, a.price, a.id);
//	return 0;
//}

//typedef struct Node {
//	int data;
//	struct Node* p;//结构体的自引用
//} Node;
//int main() {
//	Node first;
//	Node second;
//	return 0;
//}

//匿名结构体不能完成结构体的自引用

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