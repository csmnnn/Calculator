#include <stdio.h>
#include <stdlib.h>

#include "..\inc\calculator.h"

void run() {
    showMenu();
    calculate();
}

void showMenu() {
    puts("Simple Calculator");
    printf("Choose operation: (1) +    (2) -    (3) *    (4) / : ");
}

void calculate() {
    int operation;
    double firstOperand, secondOperand, result;

    scanf("%d", &operation);

    if (checkInput(operation)) {
        printf("Write 2 operands separated by a space: ");
        scanf("%lf %lf", &firstOperand, &secondOperand);

        switch (operation) {
            case 1: {
                puts("You have selected addition.");
                result = firstOperand + secondOperand;
                printf("%.3lf + %.3lf = %.3lf", firstOperand, secondOperand, result);
                break;
            }
            
            case 2: {
                puts("You have selected subtraction.");
                result = firstOperand - secondOperand;
                printf("%.3lf - %.3lf = %.3lf", firstOperand, secondOperand, result);
                break;
            }

            case 3: {
                puts("You have selected multiplication.");
                result = firstOperand * secondOperand;
                printf("%.3lf * %.3lf = %.3lf", firstOperand, secondOperand, result);
                break;
            }

            case 4: {
                puts("You have selected division.");
                if (secondOperand == 0) 
                    puts("Second operand is 0 and I cannot perform the division.");
                else {
                    result = firstOperand / secondOperand;
                    printf("%.3lf / %.3lf = %.3lf", firstOperand, secondOperand, result);
                }
                break;
            }
        }
    } else 
        puts("Invalid selection.");
}

int checkInput(int input) {
    return (input > 0 && input < 5) ? 1 : 0;    
}
