//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//struct Char_index{
//	char c;
//	int index;
//} char_index[101];
//
//bool cmp(Char_index a, Char_index b){
//	return a.c < b.c;
//}
//
//int main(){
//	string keyword;
//	while(cin >> keyword && keyword != "THEEND"){
//		string ciphertext;
//		cin >> ciphertext;
//		int col = keyword.size();
//		int row = ciphertext.size()/col;
//		for(int i = 0; i < col; i ++){
//			char_index[i].c = keyword[i];
//			char_index[i].index = i;
//		}
//		sort(char_index, char_index + col, cmp);
//		char matrix[101][101];
//		int c = 0;
//		for(int k = 0; k < col; k++){
//			for(int i = 0; i < row; i++){
//				int j = char_index[k].index;
//				matrix[i][j] = ciphertext[c++];
//			}
//		}
//		for(int i = 0; i < row; i++){
//			for(int j = 0; j < col; j++){
//				cout << matrix[i][j];
//			}
//		}
//		cout << endl;
//	}
//}