/* String Exercise 2 prob1 */
#include<stdio.h>
#include<string.h>
int main()
{
    char *str1 = "United";
    char *str2 = "Front";
    char *str3;
    str3 = strcat(str1,str2);
    printf("%s\n",str3);
    return 0;    
}