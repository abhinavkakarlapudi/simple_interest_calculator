#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

float compoundInterest(float p, float r, float t) {
    float amount = p;

    for (int i = 0; i < t; i++) {
        amount = amount + (amount * r / 100);
    }

    return amount - p;
}

int main() {
    float p, r, t;
    int choice;

    printf("--- Bank Interest Calculator ---\n");

    while (1) {
        printf("\n1. Simple Interest\n");
        printf("2. Compound Interest\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Thank you! Exiting...\n");
            break;
        }

        printf("Enter Principal Amount: ");
        scanf("%f", &p);

        printf("Enter Rate of Interest: ");
        scanf("%f", &r);

        printf("Enter Time (years): ");
        scanf("%f", &t);

        if (choice == 1) {
            float si = simpleInterest(p, r, t);
            printf("Simple Interest = %.2f\n", si);
        }
        else if (choice == 2) {
            float ci = compoundInterest(p, r, t);
            printf("Compound Interest = %.2f\n", ci);
        }
        else {
            printf("Invalid option! Try again.\n");
        }
    }

    return 0;
}