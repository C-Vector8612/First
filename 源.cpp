#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B, C;
	printf("��һֻС������أ�");
	scanf("%d",&A);
	printf("�ڶ�ֻС������أ�");
	scanf("%d",&B);
	printf("����ֻС������أ�");
	scanf("%d",&C);
	if (A>B && A>C)
	{
		printf("��һֻС������");
	}
	else if (B > A && B > C) {
		printf("�ڶ�ֻС������");
	}
	else if (C > A && C > B) {
		printf("����ֻС������");
	}
	return 0;
}