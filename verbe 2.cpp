#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char verbe [20] ;
char * add ;
char * fin[6] = {"e", "es", "e", "ons", "ez", "ent" } ;
char * pro[6] = {"je", "tu", "il", "nous", "vous", "ils"} ;

int i ;


//------
do
{ printf ("donnez verbe : ") ;
gets (verbe) ;
add = verbe + strlen(verbe) - 2 ;
}while (strcmp (add, "er")) ;

//-------
for (i=0 ; i<6 ; i++)
{ strcpy (add, fin[i]) ;
printf ("%s %s\n", pro[i], verbe) ;
}

return 0;
}
