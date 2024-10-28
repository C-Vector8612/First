#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B, C;
	printf("第一只小猪的体重：");
	scanf("%d",&A);
	printf("第二只小猪的体重：");
	scanf("%d",&B);
	printf("第三只小猪的体重：");
	scanf("%d",&C);
	if (A>B && A>C)
	{
		printf("第一只小猪最重");
	}
	else if (B > A && B > C) {
		printf("第二只小猪最重");
	}
	else if (C > A && C > B) {
		printf("第三只小猪最重");
	}
	return 0;
}