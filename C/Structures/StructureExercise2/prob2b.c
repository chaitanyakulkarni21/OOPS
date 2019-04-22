/* Structure exercise prob2b */
#include<stdio.h>
main( )
{
 struct employee	// structure name missing 
 {
 	char name[25] ; 
 	 char language[10] ;
 } ;
 struct employee e = { "Hacker", "C" } ;
 printf ( "\n%s %s", e.name, e.language ) ;
} 
