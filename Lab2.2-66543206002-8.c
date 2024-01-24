// Online C compiler to run C program online
#include <stdio.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
}

char* reverse(char str1[]) {
    printf("Input\t\t\tOutput\n%s", str1);
    int j, len = 0;
    while(str1[len] != '\0') {
        len++;
    }
    j = len - 1;
    for (int i = 0; i < j; i++) {
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        j--;
    }
    printf("\t\t%s", str1);
    return str1;
}
