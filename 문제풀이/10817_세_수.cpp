#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	a>=b ? a>=c ? b>=c ? printf("%d", b) : printf("%d", c) : printf("%d", a) : b>=c ? c>=a ? printf("%d", c) : printf("%d", a) : printf("%d", b);
}
