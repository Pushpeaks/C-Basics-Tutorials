// Menu-driven ATM program using switch case

#include <stdio.h>

int main() {
    int choice, pin = 1234, enteredPin, newPin;
    float balance = 5000.0, amount;

    printf("Welcome to ATM\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    switch (enteredPin == pin) {
        case 1:
            do {
                printf("\n----- ATM MENU -----\n");
                printf("1. Check Balance\n");
                printf("2. Deposit Money\n");
                printf("3. Withdraw Money\n");
                printf("4. Change PIN\n");
                printf("5. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("Current Balance: Rs. %.2f\n", balance);
                        break;

                    case 2:
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);

                        switch (amount > 0) {
                            case 1:
                                balance += amount;
                                printf("Deposit successful.\n");
                                printf("New Balance: Rs. %.2f\n", balance);
                                break;

                            default:
                                printf("Invalid amount.\n");
                        }
                        break;

                    case 3:
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);

                        switch (amount > 0) {
                            case 1:
                                switch (amount <= balance) {
                                    case 1:
                                        balance -= amount;
                                        printf("Please collect your cash.\n");
                                        printf("Remaining Balance: Rs. %.2f\n", balance);
                                        break;

                                    default:
                                        printf("Insufficient balance.\n");
                                }
                                break;

                            default:
                                printf("Invalid amount.\n");
                        }
                        break;

                    case 4:
                        printf("Enter new PIN: ");
                        scanf("%d", &newPin);
                        pin = newPin;
                        printf("PIN changed successfully.\n");
                        break;

                    case 5:
                        printf("Thank you for using ATM.\n");
                        break;

                    default:
                        printf("Invalid choice. Try again.\n");
                }

            } while (choice != 5);

            break;

        default:
            printf("Incorrect PIN. Access denied.\n");
    }

    return 0;
}