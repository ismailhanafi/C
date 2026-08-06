#include <stdio.h>

void add_age(int *pAge){
    *pAge += 10;
    printf("Your age now is %d\n", *pAge);
}

int main(){
    int age = 10;
    int *pAge = &age;
    printf("%d\n", *pAge);
    *pAge += 10;
    printf("Your age now is %d\n", *pAge);

    return 0;
}
