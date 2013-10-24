//#include <iostream>
//using namespace std;
//
//int dp[2];
//
//int main(){
//	int n, k;
//	while(scanf("%d%d", &n, &k)!=EOF){
//		dp[0] = 1; //第i位为零的K进制数的数目（不是真的K进制数，真是为了后面计算）
//		dp[1] = k - 1; //第i位不为零的K进制数的数目
//		for(int i = 2; i <=n ;i++){
//			int temp = dp[0];
//			dp[0] = dp[1];
//			dp[1] = (temp + dp[1])*(k-1);
//		}
//		cout << dp[1] << endl;
//	}
//}