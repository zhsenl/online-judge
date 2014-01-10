//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//const int N = 50005;
//int n, arr[N], dp1[N], dp2[N];
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		cin >> n;
//		for(int i = 0; i < n; i++) cin >> arr[i];
//		int sum, mx;
//
//		sum = 0, mx = -100005;
//		for(int i = 0; i < n; i++){
//			sum += arr[i];
//			mx = max(sum, mx);
//			sum = max(sum, 0);
//			dp1[i] = mx;
//		}
//
//		sum = 0, mx = -100005;
//		for(int i = n - 1; i >= 0; i--){
//			sum += arr[i];
//			mx = max(sum, mx);
//			sum = max(sum, 0);
//			dp2[i] = mx;
//		}
//
//		mx = -200010;
//		for(int i = 1; i < n; i++){
//			mx = max(mx, dp1[i - 1] + dp2[i]);
//		}
//
//		cout << mx << endl;
//	}
//
//}