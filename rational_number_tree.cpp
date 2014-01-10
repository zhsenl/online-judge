//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef unsigned long long ull;
//
//
//void ten_to_two(ull n, vector<bool>& v){
//	while(n > 1){ //注意边界
//		v.push_back((1 & n));
//		n >>= 1;
//	}
//}
//
//int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt","w",stdout);
//
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		vector<bool> v;
//		int id;
//		static int c = 1;
//		printf("Case #%d: ", c++);
//		scanf("%d", &id);
//		if(id == 1){
//			ull n;
//			scanf("%llu", &n);
//			ten_to_two(n, v);
//			ull p = 1, q = 1;
//			for(int i = v.size()-1; i >=0 ; i--){
//				if(!v[i]){
//					q += p;
//				}else{
//					p += q;
//				}
//			}
//			printf("%llu %llu\n", p, q);
//		}else{
//			ull p ,q;
//			scanf("%llu%llu", &p, &q);
//			ull n = 0;
//			int l = 0;
//			while(p  && q ){ //注意边界
//				if(p >= q){ //注意边界
//					n |= (1ULL << l);
//					p -= q;
//				}else{
//					q -= p;
//				}
//				l++;
//			}
//			printf("%llu\n", n);
//		}
//
//	}
//
//}