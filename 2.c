#include <stdio.h>

int main(){
    int num;
    int num1, num2, num3, reversed_num;
    scanf("%d",&num);
    
    num1 = num%10;
    num2 = (num/10)%10;
    num3 = num/100;
    
    reversed_num = num1*100 + num2*10 + num3;
    printf("Reversed Number - %d\n",reversed_num);
    //'\n' for new line
    
    //num = 345
    //num1 = 345%10 = 5
    //num2 = (345/10)%10 = 34%10 = 4
    //num3 = 345/100 = 3
    
    //reversed number = num1*100 + num2*10 + num3 = 5*100 + 4*10 + 3 = 543
    return 0;
}
