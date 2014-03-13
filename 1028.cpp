//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <assert.h>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//void stringtoint(string temp, int x[]){
//	for(int i = 0; i < temp.size(); i++){
//		x[i] = temp[i] - '0';
//	}
//}
//
//int solve(int x[], int n){
//	int ans = 1;
//	while (x[n - 1] % 2 == 0)
//	{
//		ans ++;
//
//		int remain = 0;
//		for(int i = 0; i < n; i++){
//			remain = remain * 10 + x[i];
//			x[i] = remain / 2;
//			remain = remain % 2;
//		}
//
//	}
//	return ans;
//}
//
//int main(){
//	int t;
//	cin >> t;
//	for(int c = 1; c <= t; c++){
//		string temp;
//		cin >> temp;
//		int x[100];
//		int n = temp.size();
//		stringtoint(temp, x);
//		cout << "Case " << c << ": " << solve(x, n) << endl ;
//		if(c != t) cout << endl;
//	}
//
//
//}                                 