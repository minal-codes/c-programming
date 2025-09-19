#include<stdio.h>

int main(){
    int num;

    printf("enter a num:");
    scanf("%d" , &num);

    if(num>0){
        printf("The number is positive\n",num);
    }else{
        printf("The number is negative]\n",num);
    }

    return 0;
}