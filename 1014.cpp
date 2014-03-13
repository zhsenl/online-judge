//#include <iostream>
//using namespace std;
//
//int toBase(int num, int base){
//	int sum = 0;
//	while(num / base){
//		sum += num % base;
//		num /= base;
//	}
//	return sum += num;
//}
//
//int main(){
//	for(int i = 1000; i < 10000; i++){
//		if( toBase(i,10) == toBase(i,12) && toBase(i,10) == toBase(i,16) )  
//			cout << i << endl; 
//	}
//}