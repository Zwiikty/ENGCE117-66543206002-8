
#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
 int *data, m, n ;
 data = GetMatrix( &m, &n ) ;
 return 0 ;
}//end function

int *GetMatrix( int *row, int *col) {
  printf("\tInput row of set : ");
  scanf("%d", row);
  printf("\tInput col of set : ");
  scanf("%d", col);
  int *data = new int (*row * *col);
  for (int i = 0; i < *row; i++) {
    for (int j = 0; j < *col; j++) {
      printf("\tdata[%d][%d] : ", i+1, j+1);
      scanf("%d", &data[i * *col +j]);
    }
  }
  printf("\tOutput : ");
  for(int i = 0; i < *row; i++) {
    for (int j = 0; j < *col; j++) {
      printf("%d ", data[i * *col +j]);
    }
  }
  
}
