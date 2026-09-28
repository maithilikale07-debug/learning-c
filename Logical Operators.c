#include <stdio.h>

int main() {
    int percentage = 82;
    int entrancePassed = 1;
    int scholarship = 0;
    int banned = 0;

    if (((percentage >= 75 && entrancePassed == 1) || scholarship == 1)
        && !banned) {
        
        printf("Student is eligible for admission.");
    }
    else {
        printf("Student is not eligible for admission.");
    }

    return 0;
}