//��1�ǣ�2�ǣ�5�Ǵճ�10Ԫ���µ����
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
//					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵĵ�%dԪ\n",one,two,five,x);
//				}
//			}
//		}
//	}
//	return 0;
//}






//ֻ���һ�����������break
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
//					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵĵ�%dԪ\n",one,two,five,x);
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


//goto���
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
//					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵĵ�%dԪ\n",one,two,five,x);
//					goto out;
//				}
//			}
//		}
//	}
//out:
//	return 0;
//}