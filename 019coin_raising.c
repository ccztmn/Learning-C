//用1角，2角，5角凑出10元以下的面额
//#include <stdio.h>
//int main()
//{
//	int x;
//	int one, two, five;
//	scanf_s("%d", &x);
//
//	for (one = 1;one < x*10;one++)
//	{
//		for (two = 1;two < x*10/2;two++)
//		{
//			for (five = 1; five < x * 10 / 5; five++)
//			{
//				if (one+two*2+five*5 == x*10)
//				{
//					printf("可以用%d个1角加%d个2角加%d个5角的到%d元\n",one,two,five,x);
//				}
//			}
//		}
//	}
//	return 0;
//}






//只输出一种情况，接力break
//#include <stdio.h>
//int main()
//{
//	int x;
//	int one, two, five;
//	int exit = 0;
//	scanf_s("%d", &x);
//
//	for (one = 1;one < x*10;one++)
//	{
//		for (two = 1;two < x*10/2;two++)
//		{
//			for (five = 1; five < x * 10 / 5; five++)
//			{
//				if (one+two*2+five*5 == x*10)
//				{
//					printf("可以用%d个1角加%d个2角加%d个5角的到%d元\n",one,two,five,x);
//					exit = 1;
//					break;
//				}
//			}
//			if (exit)
//				break;
//		}
//		if (exit)
//			break;
//	}
//	return 0;
//}


//goto语句
//#include <stdio.h>
//int main()
//{
//	int x;
//	int one, two, five;
//	scanf_s("%d", &x);
//
//	for (one = 1;one < x*10;one++)
//	{
//		for (two = 1;two < x*10/2;two++)
//		{
//			for (five = 1; five < x * 10 / 5; five++)
//			{
//				if (one+two*2+five*5 == x*10)
//				{
//					printf("可以用%d个1角加%d个2角加%d个5角的到%d元\n",one,two,five,x);
//					goto out;
//				}
//			}
//		}
//	}
//out:
//	return 0;
//}