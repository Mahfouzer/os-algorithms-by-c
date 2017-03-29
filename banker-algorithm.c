#include <stdio.h>
#include <stdlib.h>
int n ,m ;
void input(){
    int i, j ;
    printf("enter n ,  m ");
    scanf(" %d %d",  &n ,&m);

    int av[m],allo[n][m],max[n][m],need[n][m] ;
    //int i,j;
    for ( i=0 ; i < m ; i++){
        printf("enter available resource %d ",i);
        scanf("%d",&av[i]);
    }
    for ( i =0 ; i <  n ; i ++){
        printf("enter the  allocation resource for p%d ", i);
        for ( j =0 ; j < m ; j++){
            scanf("%d",&allo[i][j]);
            av[j]-=allo[i][j];
        }
        printf("enter the  MAX resource for p%d ", i);
        for ( j =0 ; j < m ; j++){
            scanf("%d",&max[i][j]);
        }
        printf("___________\n");
    }
printf("Process\tAllocation\tMAX\tNeed\n");
    for ( i =0 ; i <  n ; i ++){

        printf("p%d\t\t",i);
        for ( j =0 ; j < m ; j++){

            printf("%d ",allo[i][j]);
        }
        printf("\t\t");
        for ( j =0 ; j < m ; j++){

            printf("%d ",max[i][j]);
        }
        printf("\t\t");
        for ( j =0 ; j < m ; j++){

            need[i][j]=max[i][j]-allo[i][j];
            printf("%d ",need[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    printf("\n available resource now \n");
    for( i=0 ; i < m ;i++){
        printf("%d ",av[i]);
    }
}
int main()
{

    int x;
    int flag ;
    while(1){
    printf("\n\n\nenter your choice: ");
    printf("\n 1-input \n 2-new process \n 3- Exit \n");
    scanf("%d",&x);
    switch (x){
    case 1: {

        input();
        break;
    }
    case 2 : {

        input();
        break;
    }
    case 3: return 0 ;
    default : {
    printf("you entered wrong number , try again \n ");

    }
    }

    }
    return 0;
}
