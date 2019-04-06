/*Menu driven program*/
#include<stdio.h>
int main()
{
	int n,num,i,f=1,flag = 0;
	int ch;
	printf("Choose an option\n");
	while(ch != 0){
	
		printf("1 .Factorial of a number\n");
		printf("2 .Odd or Even\n");
		printf("3 .Prime number\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1 : printf("Enter a number\n");
					 scanf("%d",&num);
					 for(i=num;i>=1;i--){
	        			f=f*i;
					 }
					 printf("%d! = %d\n",num,f);
					 break;
			case 2 : printf("Enter a number\n");
					 scanf("%d",&num);
					 if(num%2==0){
					 	printf("EVEN\n");
					 }else {
					 	printf("ODD\n");
					 }
					 break;
			case 3 : printf("Enter a number \n");
					 scanf("%d",&num);
					  for(i = 2; i <= num/2; ++i)
	   				 {
				        if(num%i == 0)
				        {
				            flag = 1;
				            break;
				        }
				     }
	
				    if (num == 1) 
				    {
				      printf("1 is neither a prime nor a composite number.");
				    }
				    else 
				    {
				        if (flag == 0)
				          printf("%d is a prime number.", num);
				        else
				          printf("%d is not a prime number.", num);
				    }
				    break;
		 	default: printf("Invalid Case\n");
		}
		printf("Do you wish to continue?\n");
		scanf("%d",&ch);
	}
}
