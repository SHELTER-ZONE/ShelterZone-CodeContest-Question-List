#include <stdio.h>

int solve(int x, int n);
int main(){
	int testcase;
	scanf("%d", &testcase);
	for(int i = 0; i < testcase; i++){
		int x, n;
		scanf("%d%d", &x, &n);
		
		int ans = solve(x, n);
		if(ans == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}

int solve(int x, int n) {
	return ((x & -x) == x && x >= (1 << n));
}
