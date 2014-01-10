//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <string>
//#include <vector>
//using namespace std;
//
//string num[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//string times[] = {"","","double","triple","quadruple","quintuple","sextuple","septuple","octuple","nonuple","decuple"};
//
//int main(){
//	freopen("input.txt","r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		static int id = 1;
//		printf("Case #%d:", id++);
//		string phone, format;
//		cin >> phone >> format;
//		for(int i = 0; i < format.size(); i++){
//			if(format[i] == '-') format[i] = ' ';
//		}
//		stringstream ss(format);
//		vector<int> v;
//		int temp;
//		while(ss >> temp){
//			v.push_back(temp);
//		}
//		int m = 0;
//		for(int i = 0; i < v.size(); i++){
//			int size = v[i];
//			for(int j = 0, k; j < size; j = k){
//				for(k = j + 1; k < size && phone[m + j] == phone[m + k]; k++)
//					;
//				if(k - j < 2 || k - j > 10){
//					for(int i2 = 0; i2 < k - j; i2++){
//						cout << " " << num[phone[m+j] - '0'];
//					}
//				}else{
//					cout << " " << times[k - j] << " " << num[phone[m+j] - '0'];
//					
//				}
//				
//			}
//			m += v[i];
//		}
//		printf("\n");
//	}
//}