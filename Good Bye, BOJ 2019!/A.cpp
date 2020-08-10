#include <stdio.h>

int main() {
	int T, N, M;
	scanf("%d", &T);
	while (T) {
		--T;
		scanf("%d %d", &N, &M);
		if (N < 12) printf("-1");
		else printf("%d", 11 * M + 4);
	}
}
