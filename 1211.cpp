#include <iostream>
#include <vector>
#include <math.h>
#include <memory.h>
#include <stdio.h>
using namespace std;
const int N = 105;

struct E{
	int u, v;
} e[N*100];
int dp[N][N][N];
int n, m , l;

//int dfs(int x, int y, int l){
//    if(dp[x][y][l]) return dp[x][y][l];
//    int sum = 0;
//    if(x == y) return 1;
//    if(l){
//        for(int i = 0; i < g[x].size(); i++){
//			sum += dfs(g[x][i], y, l - 1);
//        }
//    }
//    return dp[x][y][l] = sum;
//}

//dp
int main(){
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    memset(dp, 0, sizeof(dp));
    int x, y;
    cin >> n >> m >> l;
    for(int i = 1; i <= m; i++){
        scanf("%d%d", &e[i].u, &e[i].v);
        dp[e[i].u][e[i].v][1] = 1;
    }
	for(int k = 2; k <= l; k++){
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				dp[e[i].u][j][k] += dp[e[i].v][j][k - 1];
			}

		}
	}
    int c;
    cin >> c;
    while(c--){
        cin >> x >> y;
        cout << dp[x][y][l]<< endl;
    }
}

//#include <iostream>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//struct Way
//{
//	int u, v;
//}w[10100];
//
//int f[110][110][110];
//
//int main()
//{   
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	int n, m, L;
//	int a, b;
//	int q;
//	int ans;
//
//	memset(f, 0, sizeof(f));
//	scanf("%d%d%d", &n, &m, &L);
//
//	for (int i = 1; i <= m; i ++)
//	{
//		scanf("%d%d", &w[i].u, &w[i].v);
//		f[w[i].u][w[i].v][1] = 1;
//	}
//
//	for (int l = 2; l <= L; l ++)
//		for (int i = 1; i <= n; i ++)
//			for (int j = 1; j <= m; j ++)
//				f[i][w[j].v][l] += f[i][w[j].u][l - 1];
//
//	scanf("%d", &q);
//
//	while (q --)
//	{
//		scanf("%d%d", &a, &b);
//
//		printf("%d\n", f[a][b][L]);
//	}
//
//	return 0;
//}