//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct Node{
//	int begin;
//	int end;
//	int sum;
//	double avg;
//};
//
//bool cmp(Node a,Node b)
//{
//
//	if(a.avg!=b.avg) return a.avg > b.avg;
//	else if ((a.end-a.begin)!=(b.end-b.begin)) return (a.end-a.begin) > (b.end-b.begin);
//	else if(a.end!=b.end) return a.end < b.end;
//	return false;
//}
//
//int main()
//{
//	int time;
//	int all_q,out_q,min_q;
//	int count=0;
//	cin>>time;
//	while(time--)
//	{
//		int a[305];
//		int i;
//		count++; 
//		vector<Node>ve;
//		ve.clear();
//		cin>>all_q>>out_q>>min_q;
//		for(i=1;i<=all_q;i++)
//		{
//			cin>>a[i];
//		}
//		for(i=min_q;i <= all_q;i++) //一开始选定 i 个 元素 ，逐步增加 
//		{
//			for(int j=1;j+i-1 <= all_q;j++) //从 J 开始 ，每次至少加 i-1 个 
//			{
//				Node noe;
//				noe.begin=j;
//				noe.end=j+i-1;
//				noe.sum=0;
//				for(int k=0;k < i;k++) //求这段队列里面的总数 
//				{
//					noe.sum+=a[j+k];
//				}
//				noe.avg=1.0*noe.sum/i;
//				ve.push_back(noe);
//			}
//		}
//		sort(ve.begin(),ve.end(),cmp);
//		cout<<"Result for run "<<count<<":"<<endl;
//
//		for(int x=0;x < out_q && x < ve.size();x++)
//		{
//			cout<<ve[x].begin<<"-"<<ve[x].end<<endl;
//		}
//
//	}
//	system("pause");
//	return 0;
//} 
//
//
