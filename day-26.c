#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number){
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}


#include <stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("you are eligble.\n");
    }
    else{
        printf("you are not eligible.\n");
    }
    return 0;
}


#include <stdio.h>
int main() {
    int choice;
    float balance = 1000.0;  
    float amount;
    while (1) {
        printf("\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited %.2f\n", amount);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance){
                    balance -= amount;
                    printf("Successfully withdrawn %.2f\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    printf("Invalid withdrawal amount.\n");
                }
                break;

            case 4:
                printf("thank you for using the ATM. Goodbye!\n");
                return 0;

            default:
                printf("invalid choice. Please try again.\n");
        }
    }
    return 0;
}


#include <stdio.h>
int main(){
    int choice, score = 0;

    printf("===== Quiz Application =====\n");

    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n");
    }

    // Question 2
    printf("\nQ2. Who is known as the father of C language?\n");
    printf("1. Bjarne Stroustrup\n2. James Gosling\n3. Dennis Ritchie\n4. Guido van Rossum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Dennis Ritchie.\n");
    }

    // Question 3
    printf("\nQ3. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Mars.\n");
    }

    printf("\n===== Quiz Finished =====\n");
    printf("Your total score is: %d out of 3\n", score);

    return 0;
}
