#include <stdio.h>

void GetMatrix( int *value[], int *row, int *col ) ;

int main() {
 int *data, m, n ;
 GetMatrix( &data, &m, &n ) ;
 return 0 ;
}

void GetMatrix( int *value[], int *row, int *col) {
  printf("\tInput row : ");
  scanf("%d", row);
  printf("\tInput col : ");
  scanf("%d", col);
  for (int i = 0; i < *row; i++) {
    for (int j = 0; j < *col; j++) {
      printf("\t data[%d][%d] = ", i+1, j+1);
      scanf("%d", &value[i * *col + j ]);
    }
  }
  printf("\tOutput\n");
  for (int k = 0; k < *row; k++) {
    for (int l = 0; l < *col; l++) {
      printf("\t data[%d][%d] = %d\n", k+1, l+1, value[k * *col + l]);
    }
  }
  
}
