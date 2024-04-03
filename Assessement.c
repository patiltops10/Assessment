#include <stdio.h>

float calculateBill(int choice, int quantity) {
    float price;
    switch (choice) {
        case 1:
            price = 180.0;
            break;
        case 2:
            price = 100.0;
            break;
        case 3:
            price = 120.0;
            break;
        case 4:
            price = 50.0;
            break;
        default:
            printf("Invalid choice!\n");
            return 0.0;
    }
    return price * quantity;
}

int main() {
    int choice, quantity;
    float totalBill;


    printf("1. Pizza - 180rs/pcs\n");
    printf("2. Burger - 100rs/pcs\n");
    printf("3. Dosa - 120rs/pcs\n");
    printf("4. Idli - 50rs/pcs\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice!\n");    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);


    totalBill = calculateBill(choice, quantity);


    printf("\nTotal Bill: Rs. %.2f\n", totalBill);

    return 0;
}
