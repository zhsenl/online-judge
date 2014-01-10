//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(){
//	int t, n, m, c[1005];
//	cin >> t;
//	while(t--){
//		cin >> n >> m;
//		for(int i = 0; i < n; i++) cin >> c[i];
//		int dp[10010];
//		memset(dp, 0, sizeof(dp));
//		for(int i = 0; i < n; i++){
//			for(int j = m; j >= c[i]; j--){
//				dp[j] = max(dp[j - c[i]] + c[i], dp[j]);
//			}
//		}
//		cout << dp[m] << endl;
//	}
//	//system("pause");
//}