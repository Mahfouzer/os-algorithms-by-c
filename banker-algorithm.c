#include <stdio.h>
#include <stdlib.h>
int i , j ;//count
int n ,m ;
int av[3],allo[10][3],max[10][3],need[10][3] ;
//amr mohqmed el sayed
void input(){
    printf("enter n ,  m ... n Should be less than 10 ");
    scanf(" %d %d",  &n ,&m);
    //int i,j;
    for ( i=0 ; i < m ; i++){
        printf("enter available resource %d :",i);
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

}
void print(){
printf("Process\tAllocation\tMAX\tNeed\n");
    for ( i =0 ; i <  n ; i ++){

        printf("p%d\t",i);
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
    printf("\n");
}


void add_pro(){
printf("enter new process");
for( i =0 ; i < m ; i ++){

    printf("enter the allocation resources %d for the new process ",i);

    scanf("%d",&allo[n][i]);

}
for( i =0 ; i < m ; i ++){

    printf("enter the max resources %d for the new process ",i);

    scanf("%d",&max[n][i]);

}
 n++;


}
int main()
{


    while(1){
    int x;
    printf("\n\n\nenter your choice: ");
    printf("\n 1-input \n 2-print \n 3- add process \n 4- Exit \n");
    scanf("%d",&x);
    switch (x){
    case 1: {
        input();
        break;
    }
    case 2 : {
        print();
        break;
    }
    case 3 : {
    add_pro();
    break;
    }
    case 4: return 0 ;
    default : {
    printf("you entered wrong number , try again \n ");
    }
    }



    }
    return 0;
}
