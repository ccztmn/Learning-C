//输入一个数，输出它的逆序数，例如：输入1234，输出4321


//第一种输入700，只会输出7
//#include <stdio.h>
//int main()
//{
//	int in;
//	int digit;
//	int result = 0;
//
//	printf("please enter a number：");
//	scanf_s("%d",&in);
//	
//	while (in > 0) {
//		digit = in % 10;
//		result = result * 10 + digit;
//		printf("in=%d,digit=%d,result=%d\n", in, digit, result);
//		in =in / 10;
//
//	}
//	printf("result = %d", result);
//	return 0;
//}


//第二种输入700，输出007
//#include <stdio.h>
//int main()
//{
//	int in;
//	int digit;
//	int result = 0;
//
//	printf("please enter a number：");
//	scanf_s("%d", &in);
//
//	while (in > 0) {
//		digit = in % 10;
//		printf("%d", digit);
//		result = result * 10 + digit;
//		//printf("in=%d,digit=%d,result=%d\n", in, digit, result);
//		in = in / 10;
//
//	}
//	//printf("result = %d", result);
//	return 0;
//}