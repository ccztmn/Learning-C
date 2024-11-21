//输入一个数，判断是不是素数
//#include <stdio.h>
//int main()
//{
//	int x;
//	int i = 0;
//	int isPrime = 1;    //是素数
//
//	printf("please enter a number：");
//	scanf_s("%d",&x);
//
//	for (i = 2;i < x;i++)
//	{
//		if (x % i == 0)
//		{
//			//printf("No,not is prime number!");
//			isPrime = 0;
//			break;
//		}
//	}
//	if (isPrime)
//	{
//		printf("Yes,is prime number!");
//	}
//	else
//	{
//		printf("No,not is prime number!");
//	}
//
//	return 0;
//}




//输出100以内的素数
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 2;i < 100;i++)
//	{
//		int j;
//		int isPrime = 1;    //是素数
//		for (j=2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				isPrime = 0;
//				break;
//			}
//		}
//		if (isPrime)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}