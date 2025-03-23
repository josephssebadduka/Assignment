#include <stdio.h>

// Function to deposit money
double deposit(double balance, double amount) {
    if (amount <= 0) {
        printf("Invalid deposit amount!\n");
        return balance;
    }
    balance += amount;
    printf("Deposit successful!\n");
    return balance;
}

// Function to withdraw money and update balance
double withdraw(double balance, double amount) {
    if (amount > balance) {
        printf("Insufficient balance!\n");
        return balance;
    } else {
        balance -= amount;
        printf("Withdrawal successful!\n");
        return balance;
    }
}

int main() {
    double balance = 100000.0; // Initial balance in Airtel Money
    double depositAmount, withdrawAmount;

    printf("Welcome to Airtel Money Service\n");
    printf("Your current balance: UGX %.2f\n", balance);
    
    // Deposit section
    printf("Enter amount to deposit: UGX ");
    scanf("%lf", &depositAmount);
    balance = deposit(balance, depositAmount);
    printf("Your balance after deposit: UGX %.2f\n", balance);

    // Withdrawal section
    printf("Enter amount to withdraw: UGX ");
    scanf("%lf", &withdrawAmount);
    balance = withdraw(balance, withdrawAmount);
    printf("Your new balance after withdrawal: UGX %.2f\n", balance);

    return 0;
}
