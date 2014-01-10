//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define MAX 1000
//
//int num[MAX];
//int buf[MAX][MAX];
//
//inline int max(int a, int b) { return a > b ? a : b; }
//
//int dp(int a, int b) {
//	if (a == b-1) return buf[a][b] = max(num[a], num[b]);
//	if (buf[a][b]) return buf[a][b];
//	int t1, t2;
//	t1 = num[a];
//	t1 += (num[a + 1] >= num[b]) ? dp(a + 2, b) : dp(a + 1, b - 1);
//	t2 = num[b];
//	t2 += (num[a] >= num[b - 1]) ? dp(a + 1, b - 1) : dp(a, b - 2);
//	return buf[a][b] = max(t1, t2);
//}
//
//int main(void) {
//	int n, s, cnt = 1;
//	while (cin >> n && n) {
//		s = 0;
//		for (int i = 0; i < n; ++i) {
//			cin >> num[i];
//			s += num[i];
//		}
//		memset(buf, 0, sizeof(buf));
//		cout << "In game " << cnt++ << ", the greedy strategy might lose by as many as " << 2 * dp(0, n - 1) - s << " points." << endl;
//	}
//	return 0;
//}