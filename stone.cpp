//#include <iostream>
//using namespace std;
//const int SIZE=21;
//int w[SIZE];
//int dp[SIZE*100000/2 + 5];
//int main(){
//	int n, i, total, v, j;
//	cin >> n;
//	for(i = 1, total = 0; i <= n; i++){
//		cin >> w[i];
//		total += w[i];
//	}
//	v = total/2;
//	for(i =1 ; i <=n; i++){
//		for(j = v; j >= w[i]; j--){
//			dp[j] = max(dp[j], dp[j-w[i] + w[i]);
//		}
//	}
//	cout << total - 2*dp[v] << endl;
//	return 0;
//}