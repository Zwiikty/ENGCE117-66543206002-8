#include <stdio.h>
struct student {
    int id;
    char name[ 20 ];
    float score;
};

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function

void GetStudent( struct student child[][ 10 ], int *room ) {
    printf("Enter number of classrooms : ");
    scanf("%d", room);
    
    for (int i = 0; i < *room; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Enter information for student [%d]\n", j+1);
            printf("\tID : ");
            scanf("%d", &child[i][j].id);
            printf("\tName : ");
            scanf("%s", child[i][j].name);
            printf("\tscore : ");
            scanf("%f", &child[i][j].score);
        }
    }  
}
