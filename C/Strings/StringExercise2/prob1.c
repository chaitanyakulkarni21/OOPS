/* String Exercise 2 prob1 */
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "United";
    char str2[] = "Front";
   // char *str3;
    printf("%s\n%s\n",str1,str2);
     strcat(str1,str2);     
    printf("%s\n",str1);
    return 0;    
}
