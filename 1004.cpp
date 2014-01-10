//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//#define MAX 10000
//#define INF 1000000
//#define ESP 1e-6
//
//struct Line{
//	double x1, y1, x2, y2;
//	double k, b;
//}lines[MAX];
//
//inline bool dequal(double a, double b){
//	return fabs(a - b) <= ESP;
//}
//
//inline bool cmp(Line a, Line b){
//	if(!dequal(a.k, b.k)) return a.k < b.k;
//	if(!dequal(a.b, b.b)) return a.b < b.b;
//	if(!dequal(a.x1, b.x1)) return a.x1 < b.x1;
//	if(!dequal(a.y1, b.y1)) return a.y1 < b.y1;
//	if(!dequal(a.x2, b.x2)) return a.x2 < b.x2;
//	return a.y2 < b.y2;
//}
//
//inline bool judge(Line a, Line b){
//	if(dequal(a.k, b.k) && dequal(a.b, b.b)){
//		if(dequal(a.k, INF)) return dequal(b.y1, a.y2) || b.y1 < a.y2;
//		else return dequal(a.x2, b.x1) || a.x2 > b.x1;
//	}
//	return false;
//}
//
//int main(){
//	//freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//	  
//	int n, re;
//	while(cin >> n && n){
//		re = n;
//		for(int i = 0; i < n; i++){
//			cin >> lines[i].x1 >> lines[i].y1 >> lines[i].x2 >> lines[i].y2;
//			bool flag = dequal(lines[i].x1, lines[i].x2);
//			if(flag && lines[i].y1 > lines[i].y2) swap(lines[i].y1, lines[i].y2);
//			else if(!flag && lines[i].x1 > lines[i].x2){
//				swap(lines[i].x1, lines[i].x2);
//				swap(lines[i].y1, lines[i].y2);
//			}
//			lines[i].k = flag ? INF : (lines[i].y2 - lines[i].y1) / (lines[i].x2 - lines[i].x1);
//			lines[i].b = flag ? lines[i].x1 : lines[i].y1 - lines[i].k * lines[i].x1;
//		}
//		sort(lines, lines+n, cmp);
//		for(int i = 0; i < n - 1; i++){
//			if(judge(lines[i], lines[i + 1])){
//				re --;
//				if(dequal(lines[i].k, INF)) lines[i + 1].y2 = max(lines[i].y2, lines[i + 1].y2);
//				else{
//					lines[i + 1].x2 = max(lines[i].x2, lines[i + 1].x2);
//				}
//			}
//		}
//		cout << re << endl;
//	}
//	//system("pause");
//}