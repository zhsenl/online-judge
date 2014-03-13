#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	int n;
	while(cin >> n && n != 0){
		string ip, id;
		map<string, string> m;
		map<string, string> ans;
		map<string, string>::iterator iter;
		while(n--){
			cin >> id >> ip;
			if(m.find(ip) != m.end()){
				ans[m[ip]] = id;
			}else{
				m[ip] = id;
			}
		}
		for(iter=ans.begin();iter!=ans.end();iter++){
			cout << iter->second << " is the MaJia of " + iter->first << endl;
		}
		cout << endl;
	}

	return 0;
}

//TAµÄ·½·¨
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	
	while(scanf("%d", &n) && n != 0){
		map<string, vector<string> > record;
		map<string, string> majia;
		string id, ip;
		for(int i = 0; i < n; i++){
			cin >> id >> ip;
			record[ip].push_back(id);
			if(record[ip].size() == 2){
				majia[record[ip][0]] = record[ip][1];
			}
		}
		for(map<string, string>::iterator it = majia.begin(); it != majia.end(); it++){
			cout << it->second << " is the MaJia of " <<  it->first << endl;
		}
		cout << endl;
	}

}

//³¢ÊÔstable_sort


