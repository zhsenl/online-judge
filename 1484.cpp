//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int m,s,t,tbuf,sbuf;
//	
//	scanf("%d%d%d",&m,&s,&t);
//	tbuf = t;
//	sbuf = s;
//	while (t > 0 && s > 0)
//	{
//		t--;
//		if(m>10)//跳跃速度快，跳完全部魔法
//		{
//			s -= 60;
//			m -= 10;
//		}
//		else if(s>(17*2) && m>=6)//只需停止1s,跳跃1s 34
//		{
//			m += 4;
//		}
//		else if(s>(17*3) && m >= 2)//需要停止2s，跳跃1s 51
//		{
//			m += 4;
//		}
//		else if(s>(17*7) && m < 2)//需要停5秒，跳跃2s，
//		{
//			m += 4;
//		}
//		else if(s <= (17*7))//没有魔法，距离小于119
//		{
//			s -= 17;
//		}
//	}
//	if(s<=0 && t>=0)
//	{
//		printf("Yes");
//		printf("%d",tbuf - t);
//	}
//	else
//	{
//		printf("No");
//		printf("%d",sbuf - s);
//	}
//	system("pause");
//	return 0;
//}