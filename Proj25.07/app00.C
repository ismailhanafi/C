#include <stdio.h>
#include <string.h>

void count(char *full_name);
void print(int *ages);
void total(int *pTotal, int num_totl);
int main(){
    char full_name[25] = "";
    printf("Enter your Full name: ");
    fgets(full_name, sizeof(full_name), stdin);
    full_name[strcspn(full_name, "\n")] = '\0';

    count(full_name);

    int ages[4] = {20, 21, 22, 23};

    print(ages);
    printf("Those are the Hardest\n");

    int sum = 0;
    int *pTotal = &sum;
    int num_totl;
    printf("Enter how many times you want to miltiply it: ");
    scanf(" %d", &num_totl);

    total(pTotal, num_totl);

return 0;    
}
void count(char *full_name){
    for(int i = 1; i < strlen(full_name); i++){
        printf(" %d ", i);
    }
}
void print(int *ages){
    for(int i = 0; i < 4; i++){
        printf("\n%d and %d\n", *(ages + i), *(ages + i));
    }
}
void total(int *pTotal, int num_totl){
    *pTotal += num_totl;
    printf("The Total now is %d", *pTotal);
}