
#include <stdio.h>

int main() {
    int n = 0;
    printf("How many Hello world : ");
    scanf("%d",&n);
    for( int i = 0; i < n; i++) {
        printf("[%d] Hello world\n",i+1);
    }

    return 0;
}
