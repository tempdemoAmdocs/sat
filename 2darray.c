#include<stdio.h>
int main(){
    int a[2][2] = {{1,0},{2,3}};
    int b[2][2] = {{5,0},{6,0}};
    int res_sum[2][2];
    int res_diff[2][2];
    int res_mul[2][2];
    for(int i = 0 ;i < 2; i++){
        for(int j = 0; j < 2; j++){
            res_sum[i][j] = a[i][j] + b[i][j];
            res_diff[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Sum of two matrix\n");
    for(int i = 0 ;i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t",res_sum[i][j]);
        }
        printf("\n");
    }
    printf("Difference of two matrix\n");
    for(int i = 0 ;i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t",res_diff[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res_mul[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                res_mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Mulitplication of two matrix\n");
    for(int i = 0 ;i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t",res_mul[i][j]);
        }
        printf("\n");
    }
}