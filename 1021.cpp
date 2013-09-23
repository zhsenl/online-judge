//#include <iostream>
//#include "string.h"
//#include <stack>
//using namespace std;
//int couples[200010];  
//int main(){
//	int n;
//	while(cin >> n && n != 0){
//		memset(couples,-1,sizeof(couples));  
//		stack<int> circle;
//		int l, r;
//		for(int i = 0; i < n; i++){
//			cin >> l >> r;
//			couples[l] = r;
//			couples[r] = l;
//		}
//		for(int i = 1; i <= n*2; i++){
//			if(circle.empty()){
//				circle.push(i);
//			}
//			else{
//				if(circle.top() == couples[i]){
//					circle.pop();
//				}else{
//					circle.push(i);
//				}
//			}
//
//		}
//		if(circle.empty()){
//			cout << "Yes" << endl;
//		}
//		else{
//			cout << "No" << endl;
//		}
//	}
//	return 1;
//}