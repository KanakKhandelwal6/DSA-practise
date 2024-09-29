#include<stdio.h>
int main(){
    int arr[2][2][2][2];
    for(int i=0 ;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                for(int p=0;p<2;p++){
                    printf("Enter element:");
                    scanf("%d",&arr[i][j][k][p]);
                }
            }
        }
    }


    printf("The elements are:- \n");

    for(int i=0 ;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                for(int p=0;p<2;p++){
                    printf("%d\t",arr[i][j][k][p]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }

}