//让计算机想一个数，然后让用户来猜，用户每输入一个数，就告诉他大了还是小了，直到用户猜中为止，最后还要告诉用户猜了几次。
//# include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//	int number, count, guess;
//	number = rand()%100+1;       //x%n的结果会是：[0,n-1]的一个整数
//	count = 0;
//
//	printf("I have already thought of the number 1-100!\n");
//	do
//	{
//		printf("Please enter the number you guessed：");
//		scanf_s("%d", &guess);
//		count++;
//		if (guess > number) 
//		{
//			printf("Higher!\n");
//		}
//		else if (guess < number) 
//		{
//			printf("Lower!\n");
//		}
//	} while (guess != number);
//
//	printf("You guessed %d times in total!\n", count);
//
//	return 0;
//}