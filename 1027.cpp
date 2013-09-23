//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int main(){
//	int n;
//	while(cin >> n && n != 0){
//		string ip, id;
//		map<string, string> m;
//		map<string, string> ans;
//		map<string, string>::iterator iter;
//		while(n--){
//			cin >> id >> ip;
//			if(m.find(ip) != m.end()){
//				ans[m[ip]] = id;
//			}else{
//				m[ip] = id;
//			}
//		}
//		for(iter=ans.begin();iter!=ans.end();iter++){
//			cout << iter->second << " is the MaJia of " + iter->first << endl;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}