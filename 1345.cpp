////e_max[i][j]=max(e_max[i][k]+e_max[k+1][j]+e[i]*e[k+1]*e[j+1])
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(){
//	int n, e[201], e_max[201][201];
//	while(cin >> n){
//		int ans = 0;
//		for(int i = 1; i <= n; i++) cin >> e[i], e[i + n] = e[i];
//		memset(e_max, 0, sizeof(e_max));
//		for(int j = 2; j < n + n; j++){
//			int i;
//			for(i = j - 1; i >= 1 && j - i < n; i--){
//				for(int k = i; k < j; k ++){
//					e_max[i][j] = max(e_max[i][j], e_max[i][k]+e_max[k+1][j]+e[i]*e[k+1]*e[j+1]); 
//				}
//			}
//			ans = max(ans, e_max[i + 1][j]);
//		}
//		cout << ans << endl;
//	}
//	
//	//system("pause");
//}