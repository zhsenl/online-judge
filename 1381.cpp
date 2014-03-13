//// Problem#: 1381
//// Submission#: 2621497
//// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
//// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
//// All Copyright reserved by Informatic Lab of Sun Yat-sen University
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <assert.h>
//#include <cstring>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//static const int kMaxLen = 120;
//
//struct BigInteger
//{
//
//	int x[kMaxLen];
//	int len;
//	BigInteger(int a = 0){
//		memset(x, 0, sizeof(x));
//		x[0] = a;
//		len = 1;
//	}
//	BigInteger(string a){
//		int j = 0;
//		len = a.size();
//		memset(x, 0, sizeof(x));
//		for(int i = a.size() - 1; i >= 0; i--){
//			x[j++] = a[i] - '0';
//		}
//	}
//};
//
//BigInteger operator*(const BigInteger& a, const BigInteger& b){
//	BigInteger c(0);
//
//	for(int i = 0; i < a.len; i++){
//		for(int j = 0; j < b.len; j++){
//			int k = i + j;
//			c.x[k] += a.x[i] * b.x[j];
//			c.x[k + 1] += c.x[k] / 10;
//			c.x[k] %= 10;
//		}
//	}
//	return c;
//
//}
//
//ostream & operator<<(ostream &out, const BigInteger &a){
//	int i;
//	for(i = kMaxLen - 1; i >= 0 && a.x[i] == 0
//		; i--) ;
//
//		for(int j = i; j >= 0; j--){
//			out << a.x[j];
//		}
//
//		out << endl;
//		return out;
//}
//
//
//
//int main(){
//	//freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//	int t;
//	cin >> t;
//	while(t--){
//		string t1, t2;
//		cin >> t1 >> t2;
//		if(t1 == "0" || t2 == "0"){
//			cout << 0 << endl;
//			continue;
//		}
//		BigInteger a(t1);
//		BigInteger b(t2);
//		cout << a * b;
//
//	}
//}                                 