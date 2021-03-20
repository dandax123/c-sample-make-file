#include <stdio.h>
#include <stdlib.h>
#include "functions/sum.h"
#include "functions/multiply.h"
int main (int argc, char *argv[]){
	int sum_a_b = sum(1,3);
	float multiply_a  = multiply(2,3.4);
	printf("sum: %d, multiply:  %.1f\n",sum_a_b, multiply_a);
	return 0;
}
