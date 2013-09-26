//#include <iostream>
//#include <string>
//#include <fstream>
//#include <sstream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//string rules[11] = {"","","double ","triple ","quadruple ","quintuple " ,"sextuple ","septuple ","octuple ","nonuple ","decuple "};
//string num_to_en[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
//
//ifstream fin("A-large.in");
//ofstream fout("A-large.out");
//
//vector<string> &split(const string &s, char delim, vector<string> &format_vector){
//	stringstream ss(s);
//	string item;
//	while(getline(ss, item, delim)){
//		format_vector.push_back(item);
//	}
//	return format_vector;
//}
//void display(int count, char a){
//	fout << " " << rules[count] << num_to_en[a-'0'];
//
//}
//void num_to_english(const string &num){
//	char a = num[0];
//	int count = 1;
//	for(int i = 1; i < num.size(); i++){
//		if(num[i] == a){
//			count++;
//		}else{
//			display(count, a);
//			a = num[i];
//			count = 1;
//		}
//	}
//	display(count, a);
//}
//
//
//int main(){
//	int t;
//	
//	fin >> t;
//	string num;
//	string format;
//	for(int i = 0; i < t; i++){
//		fin >> num;
//		fin >> format;
//		vector<string> format_vector;
//		split(format, '-', format_vector);
//		vector<string> sub_string_vector;
//		int begin = 0;
//		for(vector<string>::iterator it = format_vector.begin(); it != format_vector.end(); it++ ){
//			int end = stoi(*it);
//			sub_string_vector.push_back(num.substr(begin, end));
//			begin += end;
//		}
//		fout << "Case #" << i+1 << ":";
//		for(vector<string>::iterator it = sub_string_vector.begin(); it != sub_string_vector.end(); it++ ){
//			num_to_english(*it);
//		}
//		fout << endl;
//	}
//	//system("pause");
//	return 0;
//}