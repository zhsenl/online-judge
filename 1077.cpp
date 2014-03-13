//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int dp[100010];
//vector<int> items;
//
//int main(){
//	int total, n, nk, dk;
//	while(cin >> total){
//		cin >> n;
//		items.clear();
//		memset(dp, 0, sizeof(dp));
//		for(int i = 0; i < n; i++){
//			cin >> nk >> dk;
//			int j;
//			for(j= 1; j <= nk/2; j *= 2){
//				items.push_back(j * dk);
//			}
//			items.push_back((dk * (nk - j + 1)));
//		}
//		for(int i = 0; i < items.size(); i++){
//			for(int j = total; j >= items[i]; j--){
//				dp[j] = max(dp[j], dp[j - items[i]] + items[i]);
//			}
//		}
//		cout << dp[total] << endl;
//	}
//}