#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}

struct student upgrade( struct student child ) {
    if( child.sex == 'M' ) {
        float gpa_update = child.gpa * 0.1;
        child.gpa = child.gpa + gpa_update;
        printf( "update_gpa = %.2f\n", child.gpa );
    }
    if( child.sex == 'F' ) {
        float gpa_update = child.gpa * 0.2;
        child.gpa = child.gpa + gpa_update;
        printf( "update_gpa = %.2f\n", child.gpa );
    }
    return child;
}
