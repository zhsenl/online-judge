//#include<iostream>
//using namespace std;
//int m,n,table[12][12],res;
//void dfs(int sum,int x,int y)
//{
//	sum+=table[x][y];
//	if(x==m&&y==n&&sum>0)
//	{
//		if(res==-1)
//			res=sum;
//		else
//			res=min(res,sum);    
//	}
//	if(x<m)
//		dfs(sum,x+1,y);    //ÏòÏÂ¼ÌĞøËÑË÷
//	if(y<n)
//		dfs(sum,x,y+1);    //ÏòÓÒ¼ÌĞøËÑË÷
//}
//int main()
//{
//	while(cin>>m>>n)
//	{
//		for(int i=1;i<=m;++i)    //M*N¾ØÕó
//			for(int j=1;j<=n;++j)
//				cin>>table[i][j];
//		res=-1;
//		dfs(0,1,1);
//		cout<<res<<endl;
//	}
//	return 0;
//}