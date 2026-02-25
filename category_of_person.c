#include <stdio.h>
int main() {
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age >= 0 && age <= 12) {
        printf("Category: Child");
    }
    else if (age >= 13 && age <= 17) {
        printf("Category: Teen");
    }
    else if (age >= 18 && age <= 60) {
        printf("Category: Adult");
    }
    else if (age > 60) {
        printf("Category: Senior Citizen");
    }
    else {
        printf("Invalid age entered.");
    }
    return 0;
}
