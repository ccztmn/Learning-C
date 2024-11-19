//让用户输入一系列正整数，最后输入-1表示输入结束
//程序计算出这些数字的平均数
//输出：输入的数字的个数和平均数
 

//first 
//#include <stdio.h>
//int main()
//{
//	int number, sum, average, count;
//	count = 0;
//	sum = 0;
//	average = 0;
//
//	printf("Please enter some numbers(-1 indicates the end)：\n");
//	do
//	{
//		scanf_s("%d",&number);
//		sum = sum+number;
//		count++;
//	}while(number != -1);
//	count = count - 1;
//	sum = sum + 1;
//	average = sum / count;
//	printf("the count=%d，the average=%d\n", count, average);
//
//	return 0;
//}



//second
//#include <stdio.h>
//int main()
//{
//	int number, sum, average, count;
//	count = 0;
//	sum = 0;
//	average = 0;
//
//	printf("Please enter some numbers(-1 indicates the end)：\n");
//	do
//	{	
//		scanf_s("%d", &number);
//		if (number != -1) 
//		{
//			sum = sum + number;
//			count++;
//		}
//	} while (number != -1);
//	average = sum / count;
//	printf("the count=%d，the average=%d\n", count, average);
//
//	return 0;
//}




//third
//#include <stdio.h>
//int main()
//{
//	int number, sum, average, count;
//	count = 0;
//	sum = 0;
//	average = 0;
//
//	printf("Please enter some numbers(-1 indicates the end)：\n");
//	scanf_s("%d", &number);
//	while(number != -1)
//	{
//		sum = sum + number;
//		count++;
//		scanf_s("%d", &number);
//	}
//	average = sum / count;
//	printf("the count=%d，the average=%d\n", count, average);
//
//	return 0;
//}