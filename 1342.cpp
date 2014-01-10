//#include <iostream>
//#include <stdio.h>
//#include <memory.h>
//using namespace std;
//int f[10];
//int main()
//{
//	int n,m;
//	int v[25],p[25];
//	while((scanf("%d%d",&n,&m))!=EOF){
//		memset(f,0,sizeof(f));
//		for(int i=1;i<=m;i++){
//			scanf("%d%d",&v[i],&p[i]);
//		}
//		for(int i=1;i<=m;i++)
//			for(int j = v[i]; j <= n; j++){ //wrong answer
//				//for(int j = n; j >= v[i]; j--){ //accepted
//				f[j] = max( f[j-v[i]] + v[i] * p[i], f[j]); //出错的原因是 f[j-v[i]] 此时已经是 i 的状态下的值，而不是i-1 状态下的值
//			}
//			printf("%d\n",f[n]);
//
//	}
//}                                 