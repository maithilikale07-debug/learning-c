#include <stdio.h>

int main() {
    bool weak = false;
    bool money = true;
    bool friend = true;

    // int result = money || friend || weak ;
    // printf("result : %d", result ) ;

    if (money){
        printf("we have money");
    } else if (friend)  {
        printf("we have one f");
    }

    

   
    return 0;
}