//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N = 22;
//int dp[N][N][N][N];
//int a[N], b[N], sum;
//
//int dfs(int la, int ra, int lb, int rb, int sum){
//	if(dp[la][ra][lb][rb] || (la > ra && lb > rb)){
//		return dp[la][ra][lb][rb];
//	}else if(la > ra){
//		dp[la][ra][lb][rb] = sum - min(dfs(la, ra, lb + 1, rb, sum - b[lb]), dfs(la, ra, lb, rb - 1, sum - b[rb]));
//	}else if(lb > rb){
//		dp[la][ra][lb][rb] = sum - min(dfs(la + 1, ra, lb, rb, sum - a[la]), dfs(la, ra - 1, lb, rb, sum - a[ra]));
//	}else{
//		dp[la][ra][lb][rb] = sum - min(
//			min(dfs(la + 1, ra, lb, rb, sum - a[la]), dfs(la, ra - 1, lb, rb, sum - a[ra])),
//			min(dfs(la, ra, lb + 1, rb, sum - b[lb]), dfs(la, ra, lb, rb - 1, sum - b[rb]))
//			);
//	}
//	return dp[la][ra][lb][rb];
//}
//
//int main(){
//	int t, n;
//	cin >> t;
//	while(t--){
//		sum = 0;
//		cin >> n;
//		for(int i = 1; i <= n; i++) cin >> a[i], sum += a[i];
//		for(int i = 1; i <= n; i++) cin >> b[i], sum += b[i];
//		memset(dp, 0, sizeof(dp));
//		cout << dfs(1, n, 1, n, sum) << endl;
//	}
//}
