
#include <stdio.h>
#include <string.h>

void GetSet( int *[], int *) ;

int main() {                    
 int *data, num;
 GetSet(&data, &num) ;
 return 0 ;
}

void GetSet( int *data[], int *num) {
  printf("\tInput number of set : ");
  scanf("%d", num);
  for (int i = 0; i < *num; i++) {
      printf("\t data[%d] = ", i+1);
      scanf("%d", &data[i]);
  }
  printf("\tThe number of set is %d\n", *num);
  for(int i = 0; i < *num; i++) {
      printf("\t data[%d] : %d\n", i+1, data[i]);
  }
}
