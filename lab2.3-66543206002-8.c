#include <stdio.h>

void explode(char str1[], char *splitter, char str2[][10], int *count);

int main() {
  char out[20][10];
  int num;
  explode("I/Love/You", '/', out, &num);

  return 0;
}

void explode(char str1[], char *splitter, char str2[][10], int *count) {
    int i = 0, j = 0, len = 0, pos = 0;
    while(str1[len] != '\0') {
        len++;
    }
    
    while(i < len) {
        if(str1[i] == splitter) {
            for(int k = pos; k < i; k++) {
                str2[j][k - pos] = str1[k];
            }
        pos = i + 1;
        j++;
        }
    i++;
    }
    for ( int k = pos; k < i; k++) {
        str2[j][k - pos] = str1[k];
    }
    *count = j +1;
    
    for (int i = 0; i < *count; i++) {
    printf("str2[%d] = %s\n", i, str2[i]);
    }
    printf("\ncount = %d\n", *count);
}
