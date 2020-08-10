#include <stdio.h>

int main() {
	char s[100] = "abcaaabbbccfaabbcc";
	char buf[100];
	sscanf(s, "%*[abc]%s", buf);
	printf("%s", buf);
}
