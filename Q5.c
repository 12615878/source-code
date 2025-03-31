// 2D matrix
#include<stdio.h>
int main(){
    float temperature[5][7],avg[5]={0};
    for (int i=0;i<5;i++){
        printf("enter temperature of cities %d(7days):\n",i+1);
        for(int j=0;j<7;j++){
            scanf("%f", &temperature[i][j]);
            avg[i]+=temperature[i][j];
        }
        avg[i]/=7;
    }
    printf("\n Average temperature of each city :\n");
    for(int i=0;i<5;i++){
        printf("city %d\n",i+1,avg[i]);
    }
    return 0;
}
