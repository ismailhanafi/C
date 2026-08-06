#include <stdio.h>

void nxt_age(int *pAge){
    *(pAge) ++;
    printf("Your next age is %d", *pAge);
}
int main(){
    int age;
    int *pAge = &age;
    printf("Enter your age: ");
    scanf(" %d", &age);
    
    nxt_age(&age);

return 0;    
}
