#include<stdio.h>

main( ) { int i = 3 ,*j ; j = &i ; printf ( "\nAddr of i = %u", &i ) ; printf ( "\nAddr of i = %u", j ) ; printf ( "\nAddr of j = %u", &j ) ; printf ( "\n j = %u", j ) ; printf ( "\n i = %d", i ) ; printf ( "\n i = %d", *( &i ) ) ; printf ( "\n i = %d", *j ) ;
}