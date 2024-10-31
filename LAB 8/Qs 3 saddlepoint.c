#include <stdio.h>

int main()
{
    int arr[3][3];
    int i,j,k;
    printf("enter elements in array");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        int minrow=arr[i][0];
        int colidx=0;
        for(int j=1;j<3;j++){
            if(arr[i][j]<minrow){
                minrow=arr[i][j];
                colidx=j;
            }
        }
    
    int saddlepoint = 1;
        for (k = 0; k < 3; k++) {
            if (arr[k][colidx] > minrow) {
                saddlepoint = 0; 
                break;
            }
        }
    if(saddlepoint){
        printf("%d %d %d",i,colidx,minrow);
    }
    }
    

    return 0;
}