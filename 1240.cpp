//#include <iostream>
//#include <cmath>
//#include <string>
//using namespace std;
//string nine_digit(const string &a) 
//{
//	string nine;
//	for(int i = 0; i < a.size(); i++){
//		if(a[i] > '4'){
//			nine += a[i] - 1;
//		}else{
//			nine += a[i];
//		}
//	}
//	return nine;
//}
//int nine_to_ten(const string&a){
//	int ten = 0;
//	int len = a.size() - 1;
//	for(int i = len; i > -1; i--){
//		ten += (a[i] - '0') * pow(9.0,(len - i));
//	}
//	return ten;
//}
//int main(){
//	string n;
//	while(cin >> n && n[0] != '0'){
//		string nine = nine_digit(n);
//		int ten = nine_to_ten(nine);
//		cout << n << ": " << ten << endl; 
//	}
//}