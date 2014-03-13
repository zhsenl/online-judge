//#include <iostream>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//int dp[320], coins[10], n, c;
//int main(){
//	while(cin >> n){
//		cin >> c;
//		for(int i = 0; i < c; i++) cin >> coins[i];
//		memset(dp, 0, sizeof(dp));
//		dp[0] = 1;
//		for(int i = 0; i < c; i++){
//			//for(int j = n; j >= coins[i]; j--){ //wrong answer
//			//出错的原因是coins[i]可以取多个，所以dp[j - coins[i]]应该是i状态下的，而不是i-1状态下的
//			for(int j = coins[i]; j <= n; j++){ //accepted
//				dp[j] += dp[j - coins[i]];
//			}
//		}
//		cout << dp[n] << endl;
//	}
//
//}