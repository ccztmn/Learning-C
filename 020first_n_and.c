//求1+1/2+1/3+......+1/n的和
//#include <stdio.h>
//int main()
//{
//	int n;
//	int i;
//	double sum = 0.0;
//	scanf_s("%d", &n);
//
//	for (i=1;i<=n;i++)
//	{
//		sum = sum + 1.0 / i;//除号两边有一个浮点数，那么运算结果也就是浮点数
//	}
//
//	printf("f(%d)=%f\n", n, sum);
//	return 0;
//}



//求1-1/2+1/3-1/4+......+1/n的和
//#include <stdio.h>
//int main()
//{
//	int n;
//	int i;
//	double sum = 0.0;
//	int sign = 1;
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + sign* 1.0 / i;//除号两边有一个浮点数，那么运算结果也就是浮点数
//		sign = -sign;
//	}
//
//	printf("f(%d)=%f\n", n, sum);
//	return 0;
//}