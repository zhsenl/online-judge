//#include <iostream>
//using namespace std;
//
//int dp[2];
//
//int main(){
//	int n, k;
//	while(scanf("%d%d", &n, &k)!=EOF){
//		dp[0] = 1; //��iλΪ���K����������Ŀ���������K������������Ϊ�˺�����㣩
//		dp[1] = k - 1; //��iλ��Ϊ���K����������Ŀ
//		for(int i = 2; i <=n ;i++){
//			int temp = dp[0];
//			dp[0] = dp[1];
//			dp[1] = (temp + dp[1])*(k-1);
//		}
//		cout << dp[1] << endl;
//	}
//}