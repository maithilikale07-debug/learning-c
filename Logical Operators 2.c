#include <stdio.h>

int main() {
    int weak = 1;
    int money = 1;
    int friend = 0;

    int result = money || friend || weak ;
    printf("result : %d", result ) ;


   
    return 0;
}