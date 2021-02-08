//Array Initialization:

//takeaways:
/*
	1 - Use integers for the size of the arrays, as C doesn't store that itself
	2 - Remember the ways to access variables in printf commands:
		%c - a character
		%s - a string
		%d - a decimal integer
		%o - an octal integer
		%x - a hexadecimal integer
		%p - an address (pointer)
		%f - for floats
		%e - a floating point number in scientific notation
		%E- a floating point number in scientific notation
		%%- The % symbol
	3 - You have to initiate the size of the array in a separate line from the values stored in the array
 */

#include<stdio.h>

int main(void){
	
	int NUMSIZE = 5; //takeaway 1
	
	int nums[NUMSIZE];
	
	for(int j=0;j<NUMSIZE;++j){
		nums[j] = j+1;
	}
	
	for(int i=0;i<NUMSIZE;++i){
		printf("ELEMENT %d of nums[]: %d\n", i, nums[i]);
	}
	
	return 0;
}