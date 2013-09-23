//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//	int col;
//	string mess;
//	while(cin >> col && col != 0){
//		cin >> mess;
//		int size = mess.size();
//		int row = size/col;
//		//int count = 0;
//		char mess_matrix[200][200];
//		int c = 0;
//		for(int i = 0; i < row; i ++){
//			int b, e;
//			if(i%2 == 0){
//				for(int j = 0; j < col; j++){
//					mess_matrix[i][j] = mess[c++];
//				}
//			}
//			else{
//				for(int j = col - 1; j >=  0; j--){
//					mess_matrix[i][j] = mess[c++];
//				}
//			}
//			
//		}
//		for(int j = 0; j < col; j++){
//			for(int i = 0; i < row; i++){
//				/*if(count > size)
//					break;*/
//				cout << mess_matrix[i][j];
//			}
//		}
//		cout << endl;
//	}
//
//}