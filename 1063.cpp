//#include<iostream>        //排序
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n,m,q,y,k;
//struct node
//{
//	int id,sala,height;
//	int boss,child;            //sub存储第一层下属的位置,child记录所有下属subordinate的数目
//	vector<int> sub;
//	bool operator<(const node& o)const        //降序
//	{
//		return sala>o.sala;        //no two employees have the same salary. 
//	}
//}person[30010];
//int main()
//{
//	int i,j;
//	scanf("%d",&n);
//	while(n--)
//	{
//		scanf("%d%d",&m,&q);
//		for(i=0;i<m;++i)
//		{
//			scanf("%d%d%d",&person[i].id,&person[i].sala,&person[i].height);
//			person[i].sub.clear();
//			person[i].child=0;
//		}
//		sort(person,person+m);    //员工按薪水降序排列
//		for(i=m-1;i>=0;--i)
//		{
//			for(j=i-1;j>=0;--j)            //immediate boss赚的钱比你多出最少且身高不能低于你
//				if(person[j].height>=person[i].height)    
//					break;
//			if(j>=0)
//			{
//				person[i].boss=j;
//				person[j].sub.push_back(i);    //i是j的第一层下属
//			}
//			else
//				person[i].boss=-1;        //boss=-1表示没有上级
//		}
//		for(i=m-1;i>=0;--i)        
//		{
//			if(person[i].sub.size()>0)
//			{
//				for(j=0;j<person[i].sub.size();++j)
//					person[i].child+=person[person[i].sub[j]].child+1;        //只要计算第一层所有下属,就可知道全部下属数目
//			}
//		}
//		int id;
//		while(q--)
//		{
//			scanf("%d",&id);
//			for(i=0;i<m;++i)
//				if(person[i].id==id)
//					break;
//			if(person[i].boss==-1)
//				printf("0 %d\n",person[i].child);
//			else
//				printf("%d %d\n",person[person[i].boss].id,person[i].child);
//		}
//	}
//	system("pause");
//}