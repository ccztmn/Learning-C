//��1+1/2+1/3+......+1/n�ĺ�
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
//		sum = sum + 1.0 / i;//����������һ������������ô������Ҳ���Ǹ�����
//	}
//
//	printf("f(%d)=%f\n", n, sum);
//	return 0;
//}



//��1-1/2+1/3-1/4+......+1/n�ĺ�
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
//		sum = sum + sign* 1.0 / i;//����������һ������������ô������Ҳ���Ǹ�����
//		sign = -sign;
//	}
//
//	printf("f(%d)=%f\n", n, sum);
//	return 0;
//}