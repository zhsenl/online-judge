//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool cmp(int a,int b){return a > b;}
//int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt","w",stdout);
//	
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int n;
//		scanf("%d", &n);
//		vector<int> w, odd, even;
//		for(int i = 0; i < n; i++){
//			int temp;
//			scanf("%d", &temp);
//			w.push_back(temp);
//			if(temp % 2 == 0) even.push_back(temp);
//			else odd.push_back(temp);
//		}
//
//		
//		sort(odd.begin(), odd.end());
//		sort(even.begin(), even.end(), cmp);
//
//		for(int i = 0, j = 0, k = 0; i < n; i++){
//			if(w[i] % 2 == 0){
//				w[i] = even[j++];
//			}else{
//				w[i] = odd[k++];
//			}
//		}
//		static int id = 1;
//		printf("Case #%d:", id++);
//		for(int i = 0; i < w.size(); i++){
//			printf(" %d", w[i]);
//		}
//		printf("\n");
//	}
//}