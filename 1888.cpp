//#include <iostream>
//#include <climits>
//#include <algorithm>
//using namespace std;
//
//const int N = 100005;
//int a[N];
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		long long s = 0;
//		for(int i = 0; i < n; i++) cin >> a[i], s += a[i];
//		long long sum, mx1, mx2;
//		sum = 0, mx1 = INT_MIN;
//		for(int i = 0; i < n; i++){
//			sum += a[i];
//			mx1 = max(sum, mx1);
//			sum = max(sum, 0ll);
//		}
//		sum = 0, mx2 = INT_MAX;
//		bool flag = true;
//		for(int i = 0; i < n; i++){
//			if(a[i] > 0) flag = false;
//			sum += a[i];
//			mx2 = min(sum, mx2);
//			sum = min(sum, 0ll);
//		}
//		mx2 = s - mx2;
//		if(!flag)
//			cout << max(mx1, mx2) << endl;
//		else
//			cout << mx1 << endl;
//	}
//	//system("pause");
//}