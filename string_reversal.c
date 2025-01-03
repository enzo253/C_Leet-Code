#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void string_reverse() {
	int i;
	int j;
	char str[100];
	char temp;

	printf("choose your words wisely: ");
	scanf("%99s", str);

	int len = strlen(str);
	j = len - 1;

	for (i = 0; i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	printf("reversed word: %s\n", str);
}


int main() {
	string_reverse();
	return 0;
}
