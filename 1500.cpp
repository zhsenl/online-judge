//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int kMaxN = 1299711;
//bool is_prime[kMaxN];
//
//int main(){
//	//freopen("output.txt", "w", stdout);
//	memset(is_prime, 1, sizeof(is_prime));
//	is_prime[0] = is_prime[1] = false;
//	for(int i = 4; i < kMaxN; i+=2) is_prime[i] = false;
//	for(int i = 3; i < kMaxN; i++) if(is_prime[i]){
//		for(int j = i + i; j < kMaxN; j += i){
//			is_prime[j]= false;
//		}
//	}
//	int n;
//	while(cin >> n && n){
//		if(is_prime[n]) {cout << 0 << endl; continue;}
//		int i, j;
//		for(i = n + 1; i < kMaxN && !is_prime[i]; i++) ;
//		for(j = n - 1; j > 0 && !is_prime[j]; j--) ;
//		cout << i - j << endl;
//	}
//
//
//}