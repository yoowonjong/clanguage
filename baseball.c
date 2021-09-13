#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
	int qeustion[3];

	int i;
	int j;
	srand(time(NULL));

	qeustion[0] = rand() % 9 + 1;
	
	do {
		qeustion[1] = rand() % 9 + 1;
	} while (qeustion[0] == qeustion[1]);
	
	do {
		qeustion[2] = rand() % 9 + 1;
	} while (qeustion[0] == qeustion[2] || qeustion[1] == qeustion[2]);
		
	int count = 1; 
	for (;;) {
		int strike = 0;
		int ball = 0;
		
		int answer[3];
		
		// scanf();
		printf("input answer : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		// count #strike #ball
		for (i = 0; i < 3; ++i) {
			for (j = 0; j < 3; ++j) {
				if (qeustion[i] == answer[j]) {
					if ( i == j) {
						++strike;
					} else {
						++ball;
					}
				}	
			}
		}

		// printf #strike #ball
		printf("%d strike  %d ball\n", strike, ball);
		
		if (strike == 3)
			break;
		++count;
	}

	printf("Your count : %d\n", count);

	return 0;
}
