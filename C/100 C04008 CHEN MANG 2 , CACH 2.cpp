#include <stdio.h>
void  nhap ( int  a [], int  n ) { 
    for ( int  i = 0 ; i < n ; i ++ ) 
        scanf ( "% d" , & a [ i ]); } 
void in ( int a [], int n , int d , int c ) 
{
	for ( int i = d ; i < c; i ++ ) 
        printf ( "% d" , a [ i ]); 
} 
main () { 
    int  a [ 100 ], b [ 100 ], n , m , p , t ; 
    scanf ( "% d" , & t ); 
    for ( int  i = 1 ; i <= t ; i ++ ) { 
        printf ( "Ki?m tra% d: \ n" ); 
        scanf ( "% d% d " , & n , & m ); 
        nhap ( a , n );  nhap ( b , m ); 
        scanf ( "% d " , & p );

        in ( a , n , 0 , p );    trong ( b , m , 0 , m );      in ( a , n , p , n ); 
        printf ( " \ n " ); 
    } 
}
