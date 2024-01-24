#include <stdio.h>

struct student {
  int id;
  char name[20];
  float score;
};

struct student (*GetStudent( int *room ))[10] {
    static struct student child[10][10];
    printf("Enter number of classrooms : ");
    scanf("%d", room);
    for (int i = 0; i < *room; i++) {
        printf("Room [%d]\n", i+1);
        for (int j = 0; j < 3; j++) {
            printf("Enter Student's [%d] ID : ", j+1);
            scanf("%d", &child[i][j].id);
            printf("Enter Student's [%d] Name : ", j+1);
            scanf("%s", child[i][j].name);
            printf("Enter Student's [%d] Score : ", j+1);
            scanf("%f", &child[i][j].score);
        }
    }
    return child;
}

int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    for (int i = 0; i < group; i++) {
    printf("\nClass %d:\n", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("Student's [%d] ID : %d\n",j+1 , children[i][j].id);
      printf("Student's [%d] Name : %s\n",j+1 , children[i][j].name);
      printf("Student's [%d] Score : %.2f\n",j+1 , children[i][j].score);
        }
    }
    return 0 ;
}//end function
