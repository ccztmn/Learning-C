//����һ���Ǹ������������������ÿһλ��
//���룺14536       �����1 4 5 3 6
//#include <stdio.h>
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//
//	//x = 0;
//	int mask = 1;
//	int t = x;
//	while (t>9) 
//	{
//		t /= 10;
//		mask *= 10;
//	}
//	printf("x=%d,mask=%d\n", x, mask);
//	do{
//		int d = x / mask;
//		printf("%d", d);
//		if (mask > 9)
//		{
//			printf(" ");
//		}
//		x %= mask;
//		mask /= 10;
//	} while (mask > 0);
//	printf("\n");
//	return 0;
//}