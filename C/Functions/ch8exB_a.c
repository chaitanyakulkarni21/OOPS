#include<stdio.h>
int addmul(int,int);
int main()
{
	int i=3,j=4,k,l;
	k=addmul(i,j);
	l=addmul(i,j);
	printf("\nIn Main: ");
	printf("%d %d\n",k,l);
}
int addmul(int ii,int jj)
{
	printf("\nIn Funtion: ");
	printf("%d %d\n",ii,jj);
	int kk,ll;
	kk = ii + jj;
	ll = ii * jj;
	return (kk,ll);
}

