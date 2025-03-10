#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double first, second, result;
    char choice;

    do {
        printf("Enter an operator (+, -, *, /, ^, sqrt): ");
        scanf(" %c", &op);

        if (op == 's') {
            printf("Enter a number: ");
            scanf("%lf", &first);
            if (first < 0) {
                printf("Error! Cannot calculate the square root of a negative number.\n");
            } else {
                result = sqrt(first);
                printf("sqrt(%.2lf) = %.2lf\n", first, result);
            }
        } else {
            // Handle other operations
            printf("Enter two numbers (a and b): ");
            scanf("%lf %lf", &first, &second);

            switch (op) {
                case '+':
                    result = first + second;
                    printf("%.2lf + %.2lf = %.2lf\n", first, second, result);
                    break;
                case '-':
                    result = first - second;
                    printf("%.2lf - %.2lf = %.2lf\n", first, second, result);
                    break;
                case '*':
                    result = first * second;
                    printf("%.2lf * %.2lf = %.2lf\n", first, second, result);
                    break;
                case '/':
                    if (second != 0) {
                        result = first / second;
                        printf("%.2lf / %.2lf = %.2lf\n", first, second, result);
                    } else {
                        printf("Error! Division by zero.\n");
                    }
                    break;
                case '^':
                    result = pow(first, second);
                    printf("%.2lf ^ %.2lf = %.2lf\n", first, second, result);
                    break;
                default:
                    printf("Error! Invalid operator.\n");
                    break;
            }
        }

        // Ask the user if they want to continue
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice); // Space before %c to handle newline characters

    } while (choice == 'y' || choice == 'Y'); // Continue if user inputs 'y' or 'Y'

    printf("Thank you for using the calculator. Goodbye!\n");
    return 0;
}