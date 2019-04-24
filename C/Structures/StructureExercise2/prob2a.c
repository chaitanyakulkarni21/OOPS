/* Structure exercise prob2a */
#include<stdio.h>
main( )
{
 struct employee
 {
	 char name[25] ;
	 int age ;
	 float bs ;
 } ;
 struct employee e ;
 strcpy ( e.name, "Hacker" ) ;
 e.age = 25 ;		// (.)dot operator required to access the structure element
 printf ( "\n%s %d", e.name, e.age ) ;
} 
