//�����������������������֦����ͨ�������Ҽ�֦����ʮ�����棬������һ��������չ�����ٵģ����˴�ţ�����Ż��
//Ҳ����˵���統ǰ�����8�������ߵ���չ�㣬��ÿ��������չ���ټ������Ŀ�����չ����Ȼ�����������Ǹ�������չ����С��
//���������Ǹ���ûǰ;�ĵ㣬��������죬��Ϊ����ôûǰ;��Ҫ�������㵽�����͸����ˣ���������
//#include<iostream>
//#include<cstring>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int dir[8][2] = {-1,-2,-1,2,-2,1,-2,-1,1,2,1,-2,2,1,2,-1};
//bool vis[64];
//int ans[64];
//bool legal(int x,int y)
//{
//	if(x < 0 || x > 7 || y < 0 || y > 7)	return false;
//	return true;
//}
//int cal_ok(int x,int y)//���㵱ǰ���Ŀ��п���չ��
//{
//	int cnt = 0;
//	for(int i = 0;i < 8;++i)
//	{
//		int X = x + dir[i][0];
//		int Y = y + dir[i][1];
//		if(legal(X,Y) && !vis[X+Y*8])
//			++cnt;
//	}
//	return cnt;
//}
//struct coord
//{
//	int x,y;
//	int cnt;
//	coord(int X,int Y)
//	{	x = X;	y = Y;	cnt = cal_ok(X,Y);	}//cnt��¼������չ��
//};
//bool cmp(coord a,coord b)
//{
//	return a.cnt < b.cnt;
//}
//bool dfs(int x,int y,int cur)//��DFS��������ΪBOOL�ͣ�һ���ݹ�ɹ��������⣬��ôֱ��ͨ��if����һ���return����
//{
//	cout << "x: " << x * 8 + y + 1 << "\t" << "depth: " << cur << endl;
//	vector<coord> v;
//	vis[y*8+x] = 1;
//	ans[cur] = y*8 + x + 1;
//	if(cur == 63)	return true;
//	for(int i = 0;i < 8;++i)
//	{
//		int X = x + dir[i][0];
//		int Y = y + dir[i][1];
//		if(legal(X,Y) && !vis[X+Y*8])
//			v.push_back(coord(X,Y));//���캯���д��м��������չ��
//	}
//	sort(v.begin(),v.end(),cmp);
//	for(int i = 0;i < v.size();++i)
//	{
//		if(dfs(v[i].x,v[i].y,cur + 1))
//			return true;//��չ�ɹ���������ǰ��
//	}
//	vis[y*8+x] = 0;
//	return false;//��ǰ�����չʧ��
//}
//int main()
//{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt","w",stdout);
//	int n;
//	while(scanf("%d",&n) && n != -1)
//	{
//		memset(vis,0,sizeof(vis));
//		dfs( (n-1)/8,(n-1) %8, 0);
//		printf("%d",ans[0]);
//		for(int i = 1;i < 64;++i)
//			printf(" %d",ans[i]);
//		printf("\n");
//	}
//	return 0;
//}