//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int diff(string a, string b){
//	int pos[5];
//	for(int i = 0; i < 5; i++){
//		pos[a[i]-'A'] = i;
//	}
//	int value  = 0;
//	for(int i = 0; i < 5; i++){
//		for(int j = i; j < 5; j++){
//			if(pos[b[i] - 'A'] > pos[b[j] - 'A']){
//				value++;
//			}
//		}
//	}
//	return value;
//}
//
//int main(){
//	int n;
//	while(cin >> n && n!= 0){
//		string ranks[101];
//		for(int i= 0; i < n; i++){
//			cin >> ranks[i];
//
//		}
//		char next[] = "ABCDE";
//		int min = 1000;
//		string min_next;
//		do 
//		{
//			int sum = 0;
//			for(int i = 0; i < n; i++){
//				sum  += diff(next, ranks[i]);
//			}
//			if(sum < min){
//				min = sum;
//				min_next = next;
//			}
//		} while (next_permutation(next, next+5));
//		cout << min_next << " is the median ranking with value " << min  << "." << endl;
//	}
//	return 0;
//}