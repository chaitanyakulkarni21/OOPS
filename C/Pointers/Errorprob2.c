/* Error prob 2 */
#include<stdio.h>
void jiaayjo (int ,int);	// Error : ; needed
int main()
{
	int p = 23 ,f = 24;
	jiaayjo(&p,&f);
	printf("%d %d\n",p,f);
	return 0;
}
void jiaayjo(int q ,int g)
{
	q = q + q;
	g = g + g;
 } 
