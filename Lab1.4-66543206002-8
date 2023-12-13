
#include <stdio.h>

int GetSet( int *[] ) ;

int main() {
 int *data, num ;
 num = GetSet( &data ) ;
 int **output = &data;
 printf("\tOutput\n");
 for(int i = 0; i < num; i++) {
   printf("\tdata[%d] = %d\n", i+1, output[i]);
 }
 return 0 ;
}

int GetSet( int *data[]) {
  int num;
  printf("\tInput number of set : ");
  scanf("%d", &num);
  for(int i = 0; i < num; i++) {
    printf("\tdata[%d] : ", i+1);
    scanf("%d", &data[i]);
  }
  return num;
}
