#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter two numbers to swap:\n");
    scanf("%d%d", &num1, &num2);
    //scanf is used take input from std console.
    //scanf function takes 2 arguments (1st - format[here "%d" denotes integer],  2nd - address of variable[denoted by '&' before variable name])
    
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    //eg: num1 = 2 , num2 = 3
    //num1 = 2 + 3 = 5
    //num2 = 5 - 3 = 2
    //num1 = 5 - 2 = 3
    //Therefore, num1 is now 3 & num2 is 2.
    
    printf("Number1 = %d\nNumber2 = %d\n",num1,num2);
    //printf takes format and actual values to print(no addresses)
    
    return 0;
}
