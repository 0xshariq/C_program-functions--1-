#include<stdio.h>
int power(int x,int y);
int main()
{
    int x,y;
    printf("Enter number :");
    scanf("%d %d",&x,&y);
    power(x,y);
    return 0;
}
int power(int x,int y){
    int mul = 1;
    for(int i = 1;i <= y;i++){
        mul = mul * x;
    }
    printf("Power of %d is %d",x,mul);
    return mul;
}