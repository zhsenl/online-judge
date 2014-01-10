#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int MAX=100002;
int prime[MAX];
bool flag[MAX];
int main(void)
{
	int t;
	scanf("%d", &t);
	memset(flag, true, sizeof(flag));
	int cnt = 0;
	for (int i = 2; i * i <= 100000; ++i)
	{
		if (flag[i])
			for (int j = i*2; j <= 100000; j+=i)
				flag[j] = false;
	}
	for (int i = 2; i <= 100000; ++i) if(flag[i]) prime[cnt++] = i;
	while (t--)
	{
		int G, L;
		scanf("%d%d", &G, &L);
		int ans = 1;
		if (L % G)
		{
			printf("0\n");
			continue;
		}
		int K = L / G, S = K;
		for (int i = 0; i < cnt; ++i)
		{
			if (prime[i] * prime[i] > S) break;
			if (K%prime[i] == 0)
			{
				int touch = 0;
				while (K%prime[i] == 0)
				{
					K /= prime[i]; touch++;
				}
				ans *= touch * 6;
			}
		}
		if (K != 1) ans *= 6;
		printf("%d\n", ans);
	}
	return 0;
}