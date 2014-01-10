//#include <iostream>
//using namespace std;
//
//const int N = 1005;
//int n, arr[N];
//
//int main(){
//	while(cin >> n && n){
//		for(int i = 0; i < n; i++) cin >> arr[i];
//		int ans = 1;
//		for(int i = 1; i < n; i++){
//			if(ans % 2 == 1 && arr[i] < arr[i - 1]) ans ++;
//			if(ans % 2 == 0 && arr[i] > arr[i - 1]) ans ++;
//		}
//		cout << ans << endl;
//	}
//
//}

/*
	f[i] = f[i - 1] + 1 when (f[i - 1] % 2 == 0 and a[i] > a[i - 1]) or (f[i - 1] % 2 == 1 and a[i] < a[i - 1]) 
					+ 0 otherwise
*/