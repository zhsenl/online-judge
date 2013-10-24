//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
////取模
////为什么从前往后算可以
////从后往前算不可以
////哪里出错了呢？
//
////
////int mod(string a, int b){
////	int p = a.size() - 1;
////	int temp = a[p--] - '0';
////	while(1){
////		for(int i = 1;temp < b;i++){
////			if(p < 0) return temp;
////			temp = (a[p--] - '0') * pow(10.0, i)   + temp;
////		}
////		temp %= b;
////	}
////
////}
//
//int mod(string dividend,int divisor)
//{
//	int p = 0;//对被除数的位数的指针
//	int temp = dividend[p++] - '0';
//	while(1)
//	{
//		while(temp < divisor)
//		{
//			if(p == dividend.size())	return temp;//如果指针超过被除数最低位还不能找到比除数小的数跳出，此时temp为答案
//			temp = temp * 10 + dividend[p++] - '0';
//		}
//		temp %= divisor;
//	}
//}
//
//int main(){
//	int t;
//	int n;
//	int b[102];
//	string x;
//	cin >> t;
//	while(t--){
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> b[i];
//		}
//		cin >> x;
//		cout << "(";
//		for (int i = 0; i < n - 1; i++)
//		{
//			cout <<  mod(x, b[i]) << ',';
//		}
//		cout << mod(x, b[n - 1]) << ')' <<endl;
//	}
//	system("pause");
//	return 0;
//}