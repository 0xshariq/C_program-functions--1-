#include<stdio.h>

int printTable(int arr[][10],int n,int m,int number);
int main()
{
    int tables[3][10];
    printTable(tables,0,10,2);
    printTable(tables,1,10,3);
    printTable(tables,2,10,4);
    for(int i = 0;i < 10;i++){
        printf("%d\t",tables[0][i]);
    }
    for(int i = 0;i < 10;i++){
        printf("%d\t",tables[1][i]);
    }
    for(int i = 0;i < 10;i++){
        printf("%d\t",tables[2][i]);
    }
    return 0;
}
int printTable(int arr[][10],int n,int m,int number){
    for(int i = 0;i < m;i++){
        arr[n][i] = number * (i + 1);
    }
    return 0;
}