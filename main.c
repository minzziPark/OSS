#include <stdio.h>
#include "mylib.h"

int main(void){
	printf("input");
	//scanf("%d %d", a, b);
	int a = 3, b = 5;
	printf("(initial) a=%d, b=%d\n", a, b);

	swap(&a, &b);
	printf("(swapped) a=%d, b=%d\n", a, b);

	printf("inhyuk");
	return 0;
}
