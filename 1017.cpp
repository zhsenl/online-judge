//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//#define N 13
//
//int main(){
//	/*freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);*/
//	int n;
//	while(cin >> n && n != -1){
//		int m[N];
//		double a[N];
//		
//		for(int i = 0; i <= n; i++){
//			cin >> m[i] >> a[i];
//		}
//		double lo = 0, hi = 1;
//		for(int i  = 0; i < 100; i++){
//			double mid = (lo + hi) / 2;
//			double sum = 0;
//			for(int j = 0; j < n; j++){
//				sum += a[j] * pow(1 + mid, m[n] - m[j] + 1);
//			}
//			if(sum < a[n]){
//				lo = mid;
//			}else{
//				hi = mid;
//			}
//		}
//		
//		static int id = 1;
//		if(id != 1) cout << endl;
//		printf("Case %d: %.5lf\n", id++, (lo+hi)/2);
//	}
//}