#include<stdio.h>
#include<conio.h>
void main()
{
    int i , j , a[5][5];
    printf("Enter the Elements 5*5 matrix: ");
    for(i=0 ; i<=4 ; i++){
        printf("\n");
        for(j=0 ; j<=4; j++){
            scanf("\t %d",&a[i][j]);
        }
    }
        printf("The 5*5 matrix is : ");
        for(i=0 ; i<=4 ; i++){
            printf("\n");
            for(j=0 ; j<=4 ; j++){
                printf("%d \t", a[i][j]);
            }
        }
        printf("\n");
        printf("The Transpose of 5*5 Matrix is ");
        for(i=0 ; i<=4 ; i++){
                printf("\n");
            for(j=0; j<=4; j++){
                printf("%d \t", a[j][i]);
            }
        }

    }

