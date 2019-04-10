/* Errors Prob3 */
#include<stdio.h>
int check (int);
int main()
{
	int k=35,z;
	z = check(k); // trying to accept a returned value while using void as return type of the function 
	printf("%d\n",z);
	return 0;
}
int check(int m)	// int m should be a paramater instead of m
{
	//int m;		// re-declaration of m
	if(m>40)
		return(1);	// trying to return a value while using void
	else 
		return(0);	// trying to return a value while using void
}
