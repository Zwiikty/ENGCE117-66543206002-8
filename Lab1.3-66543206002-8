#include <stdio.h>
#include <stdlib.h>
int *GetSet( int * ) ;

int main() {
 int *data, num ;
 data = GetSet( &num ) ;
 printf("\tOutput\n");
 for(int i = 0; i < num; i++) {
   printf("\t data[%d] = %d\n", i+1, data[i]);
 }
 return 0 ;
}

int *GetSet (int *num) {
  int *data = (int *)malloc(sizeof(int));
  printf("\tInput number of set : ");
  scanf("%d", num);
  for (int i = 0; i < *num; i++) {
    printf("\t data[%d] : ", i+1);
    scanf("%d", data+i );
  }
  return data;
}
