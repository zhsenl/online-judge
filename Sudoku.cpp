//#include <iostream>
//#include <bitset>
//#include <vector>
//#include <string>
//#include "string.h"
//using namespace std;
//
//int main(){
//	int t, n;
//	cin >> t;
//	for(int c = 1; c <=t; c++){
//		cin >> n;	
//		int n_2 = n * n;
//		bitset<36> bits[36];
//		for(int i = 0; i < n_2; i++){
//			for(int j = 0; j < n_2; j++){
//				int temp = 0;
//				cin >> temp;
//				temp --;
//				if(temp > 35 || temp < 0){
//					cout << "Case #" << c << ": No" << endl;
//					goto escape;
//				}
//				bits[i][temp] = 1;
//			}
//		}
//		bitset<36> and_bits (0xFFFFFFFFFul);
//		//cout << and_bits<< endl;
//		for(int i = 0; i < n_2; i++){
//			//cout << bits[i] << " " << and_bits << endl;
//			and_bits &= bits[i];
//			//cout << and_bits << endl;
//		}
//		string temp = "";
//		for(int j = 0; j < n_2; j++){
//			for(int i = 0; i < n_2; i++){
//				temp = temp + bits[i][j];
//			}
//			bitset<36> col_bits(temp);
//			cout << col_bits << endl;
//		}
//
//escape:
//		continue;
//	}
//	system("pause");
//}