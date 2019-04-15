/* Comparison of two pointer variables */
#include<stdio.h>
int main()
{
	int arr[]= {10,20,30,36,72,45,36};
	int *j, *k;
	j = &arr[4];
	k = (arr + 4);
	if(j == k){
		printf("The pointers point to the same location\n");
	} else {
		printf("The two pointers donot point to the same location\n");
	}
	return 0;
}
