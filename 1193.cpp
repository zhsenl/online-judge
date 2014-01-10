//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//#define N 1000
//
//int main(){
//	int t, n , f, b;
//	int a[N + 1];
//	bool flag;
//	cin >> t;
//	while(t--){
//		cin >> n >> f >> b;
//		for(int i = 0; i < n; i++){
//			cin >> a[i] >> flag;
//			if(flag) a[i] = 2*f - a[i];
//		}
//		sort(a, a + n);
//		int times = b / n;
//		int last = b % n;
//		if(last > 0){
//			last -= 1;
//			times += 1;
//		}else{
//			last = n - 1;
//		}
//		cout << a[last] + (2 * times - 1) * f << endl; 
//	}
//	//system("pause");
//
//}
