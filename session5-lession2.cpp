#include <stdio.h>

int main() {
    int num = 30;
    int a;
    while (1){
        printf("hay nhap mot so ");
        scanf("%d", &a);
        if(a == 30){
            printf("bingo\n");
            break;

        }else if (a>30){
            printf("lon hon r\n");
        }else{
            printf("nho hon r\n");
        }
    }
    return 0;
}
