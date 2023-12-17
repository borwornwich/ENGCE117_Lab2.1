#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
	char text[50] = "I Love You";
    char out[50];
	reverse( text, out ) ;
	printf( "str1 = %s\nstr2 = %s\n ", text, out ) ;
	return 0;
}// end function

void reverse( char str1[], char str2[] ) {
	int i, j = 0 ;
	int length = strlen( str1 ) ;
	
	for ( i = length - 1 ; i >= 0 ; i-- ) {
		str2[j] = str1[i] ;
		j++ ;
	}
}
