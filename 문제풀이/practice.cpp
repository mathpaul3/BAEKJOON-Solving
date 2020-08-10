#include <stdio.h>
#include <regex.h>

int main() {
	regex_t regex;
	regmatch_t matches[20];
	const char *pattern = "^[]$i";
	char buf[15] = {0, };
	int result;
	
	result = regcomp(&regex, pattern, REG_EXTENDED);
	if ( regexec(&regex, buf, 15, matches) == 0 ) {
		
	}
}
