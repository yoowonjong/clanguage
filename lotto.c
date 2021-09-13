#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
/*	int i, j;
	int num[7];

	srand(time(NULL));
	
	for (i = 0; i < 7; ++i) {
		// lotto[i] = unique num [1, 45]
		num[i] = rand() % 45 + 1;
		for ( j = 0; j < i; ++j) {
			if (num[j] == num[i]) {
				num[i] = rand() % 45 + 1;
			}
		}
	printf("%d ", num[i]);
	}
	printf("\n");
	
	int k, l;
	for (k = 6; k >= 1; --k) {
		for (l = 0; l < k; ++l) {
			if (num[l] > num[l + 1]) {
				int tmp = num[l];
				num[l] = num[l + 1];
				num[l + 1] = tmp;
			}
		}
	}
	for (k = 0; k < 7; ++k) {
		printf("%d ", num[k]);
	}
	printf("\n");
	
*/
	int lotto[7];
	
	srand(time(NULL));

	for (int i = 0; i < 7;) {
		lotto[i] = rand() % 45 + 1;
		
		int j;
		for (j = 0; j < i; ++j) {
			if (lotto[i] == lotto[j]) {
				break;
			}
		}
		if (i == j)
			++i;
		
			
	}
	for (int i = 0; i < 7; ++i) {
		printf("%d ", lotto[i]);
	}
	printf("\n");

	
	
	
	
	
	
	
	return 0;
}
