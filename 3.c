#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&num1, &num2, &num3);
    printf("num1 = %d\nnum2 = %d\nnum3 = %d\n",num1,num2,num3);
    
    if(num1>=num2 && num1>=num3){
        printf("Num1 = %d is the largest number\n",num1);
    }
    else if(num2>=num1 && num2>=num3){
        printf("Num2 = %d is the largest number\n",num2);
    }
    else{
        printf("Num3 = %d is the largest number\n",num3);
    }
    
    return 0;
}
