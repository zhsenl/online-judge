//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		int n;
//		scanf("%d", &n);
//		vector<pair<int,int> > v;
//		vector<int> x, y;
//		vector<long long> sumx, sumy;
//		for(int i = 0; i < n; i++){
//			int x1, y1, x2, y2;
//			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//			for(int tx = x1; tx <= x2; tx++){
//				for(int ty = y1; ty <= y2; ty++){
//					v.push_back(make_pair(tx, ty));
//					x.push_back(tx);
//					y.push_back(ty);
//				}
//			}
//		}
//		sort(x.begin(), x.end());
//		sort(y.begin(), y.end());
//		sort(v.begin(), v.end());
//
//		sumx.push_back(0);
//		sumy.push_back(0);
//		for(unsigned int i = 0; i < x.size(); i++){
//			sumx.push_back(sumx.back() + x[i]);
//			sumy.push_back(sumy.back() + y[i]);
//		}
//		long long smallest_dist = 1ll << 62;
//		pair<int, int> ans;
//		for(unsigned int i = 0; i < v.size(); i++){
//			int tx = lower_bound(x.begin(), x.end(), v[i].first) - x.begin();
//			int ty = lower_bound(y.begin(), y.end(), v[i].second) - y.begin();
//			long long dist = (long long)v[i].first * (tx + 1) - sumx[tx + 1] + sumx.back() - sumx[tx + 1] - (long long)v[i].first * (v.size() - tx - 1)
//				   + (long long)v[i].second * (ty + 1) - sumy[ty + 1] + sumy.back() - sumy[ty + 1] - (long long)v[i].second * (v.size() - ty - 1);
//			if(dist < smallest_dist){
//				ans = v[i];
//				smallest_dist = dist;
//			}
//
//		}
//		static int id = 1;
//		cout << "Case #" << id++ << ": " << ans.first << " " << ans.second << " " << smallest_dist << endl;
//	}
//}
//
