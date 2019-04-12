#include <stdio.h>
#include <time.h>

// use as you want to measure functions or anything else you like

int main(void) {
	int i, number_count = 25000000;
	double total_time;
	clock_t start, end;
	start = clock();
	//time count starts 
	srand(time(NULL));
	for (i = 0; i < number_count; i++) {
		printf("Random Number[%d] = %d\n", i + 1, rand());
	}
	end = clock();
	//time count stops 
	total_time = ((double) (end - start) / CLOCKS_PER_SEC);
	//calulate total time
	printf("\nCPU Time taken to print %d random numbers is: %f \n\n", number_count, total_time);
	return 0;
}