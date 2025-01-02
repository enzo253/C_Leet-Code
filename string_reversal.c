#include <stdlib.h>
#include <stdio.h>

void string_reverse() {
	int i;
	int j;
	char str[100];
	char temp;

	i = 0;
	j = 0;

	printf("choose your words wisely: ");
	scanf("reversed word: ", str);

	for (i > str[i]; 1++) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

}


int main() {

}
