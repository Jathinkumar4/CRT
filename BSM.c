/*Banking System Menu
You are designing a basic menu-driven banking system for managing customer transactions. The menu allows the user to perform the following actions:
Check Balance
Deposit Money
Withdraw Money
Exit
Your task is to implement this menu and handle user selections using a switch-case structure.
Question:
Write a C program that displays the menu to the user, takes their choice, and performs the corresponding action. Assume an initial balance of $1000.*/
#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0;
    float amount;

    printf("\nBanking System Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit:");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f\n", amount);
                } else {
                    printf("Invalid amount. Please enter a positive number.\n");
                }
                printf("now balance is: %f", balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Successfully withdrew $ %f\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance. Your current balance is $%f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive number.\n");
                }
                printf("now balance is: %f", balance);
                break;
            case 4:
                printf("Exiting the system. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option from the menu.\n");
                break;
        } 

    return 0;
}
