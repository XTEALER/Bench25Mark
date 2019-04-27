#include <stdio.h>
#include <time.h>

/* this program uses functions described here: https://www.gnu.org/software/libc/manual/html_node/CPU-Time.html
use it as you want to measure functions or anything else you like.

**UPDATE: Changed clock() to time() because it gives USER TIME rather than CPU TIME.**
Use as wish :) @xtealer
*/

// explicit declaration of function types
int srand();
int rand();
int main(void) {
	int total_time;
	unsigned long x, num[2], number_count = 25000000;
	clock_t start, end;

	//time count starts
	start = time(NULL);
	//----------------------------your-code-here--------------------------
	
	srand(rand() + time(NULL));
	for(x = 0; x < number_count; ) {
		num[0] = rand() % (99999 + 1);
		num[0] *= rand() % (99999 + 1);
		if(num[0] > 999999999 && num[0] < 10000000000) {
			printf("\nNumber[%lu] = %lu", x + 1, num[0]);
			num[1] = num[0];
			x++;
		}
	}

	//--------------------------------------------------------------------
	end = time(NULL);
	//time count stops 

	total_time = end - start;
	printf("\n\n>>> %d SECONDS TAKEN (C)! \n\n", total_time);
	return 0;
}