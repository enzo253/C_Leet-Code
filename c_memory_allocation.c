#include <stdio.h>
#include <stdlib.h>

void my_function() {
	int n;
	int i;

	printf("insert array size here: ");
	scanf("%d", &n);

	int *arr = (int *)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("memory allocation failed\n");
		return;
	}
	
	else {
		printf("memory allocation succesfull\n\n");
		
	}

	printf("input array here: ");
		for (i = 0; i < n; i++) {
		scanf("%d ", &arr[i]);
	}

	printf("you entered: ");
		for (i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}
	
	free(arr);
	
}


int main() {
	my_function();
	return 0;
}
