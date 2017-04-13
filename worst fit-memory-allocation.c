#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("First Fit \n");
   int max , i , j ,tmp;
   printf("enter max \n");
   scanf("%d",&max);
   int b_n, f_n;
   printf("enter file number and block number \n ");
   scanf("%d %d",&f_n,&b_n);
   int f[max],b[max],b_v[max],ff[max],frag[max];
    for ( i =0 ; i < max; i++)b_v[i]=0;
    for ( i =0 ; i < max; i++)frag[i]=0;

   for (i =0 ; i < b_n ; i++){
        printf("enter block %d size: ",i);
        scanf("%d",&b[i]);
   }
   for (i =0 ; i < f_n ; i++){
        printf("enter file %d size",i);
        scanf("%d",&f[i]);
   }
    for ( i =0 ; i < f_n; i++){
        int maxx =0 , max_index= 0;
        int  flag = 0;
        for ( j =0 ; j < b_n; j++){
            tmp = b[j]-f[i];
            if( tmp> maxx && b_v[j] == 0){
                maxx=tmp;
                max_index = j;
                flag= 1;
            }
        }
        if( flag== 1){
        //
        if(maxx ==0){

               b_v[max_index]=1;
                ff[i]=max_index;
                if (frag[ i] == 0) frag[i]=maxx;
                else frag[i]-=maxx;
        }
        else{
                ff[i]=max_index;
                if (frag[ i] == 0) frag[i]=maxx;
                else frag[i]-=maxx;
        }
        }
        else{
            printf("no space \n ");
            return 0;
        }

    }
    for( i =0 ; i  < f_n; i++){
        printf(" file %d  , size %d , in block %d , fragmentation equal  %d \n", i,f[i] , ff[i], frag[i]  );
    }
    return 0;
}