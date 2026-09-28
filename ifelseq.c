#include <stdio.h>

int main() {

int marks = 100;
int att = 85;

if(att>=75) {

    if (marks<40){
        printf("Fail due to Low Marks");
    } else {
        printf("pass");
    }

} else {
    printf("Fail due to Low Attendance");
}

    return 0;
}