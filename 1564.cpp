//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int dp[105];
//
//int main(){
//	int n;
//	while(cin >> n){
//		memset(dp, 0, sizeof(dp)), dp[0] = 1;
//		for(int i = 5; i <= n; i++){
//			for(int j = i; j <= n; j++){
//				dp[j] += dp[j - i];
//			}
//		}
//		cout << dp[n] << endl;
//	}
//
//}