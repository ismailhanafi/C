#include <stdio.h>
#include <string.h>

void printarr(int *pArry, int size, int *pTotal);

int main(){
    char nickname[10] = "";
    printf("Enter you nickname: ");
    fgets(nickname, sizeof(nickname), stdin);
    nickname[strcspn(nickname, "\n")] = '\0';

    int arry[3] = {1, 2, 3};
    int size = sizeof(arry) / sizeof(arry[0]);
    int total = 0;

    printarr(arry, size, &total);

    printf("\nNickname: %s\n", nickname);
    printf("Total: %d\n", total);

    return 0;
}

void printarr(int *pArry, int size, int *pTotal){
    for (int i = 0; i < size; i++) {
        printf("%d ", *(pArry + i));
        *pTotal += *(pArry + i);
    }
}