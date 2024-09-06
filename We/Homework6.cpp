#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {

// Exercise1    
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

     
    cout << "Enter coefficients a, b, and c: \n";
    cin >> a >> b >> c;

    
    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero in a quadratic equation." << endl;
    }
    else {
        discriminant = b * b - 4 * a * c;       
        if (discriminant > 0) {         
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and different." << endl;
            cout << "x1 = " << root1 << endl;
            cout << "x2 = " << root2 << endl;
        }
        else if (discriminant == 0) {
            
            root1 = -b / (2 * a);
            cout << "Roots are real and the same." << endl;
            cout << "x = " << root1 << endl;
        }
        else {
            
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Roots are complex and different." << endl;
            cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }




    return 0;
}
// Exercise2
#include <iostream>
#include <cctype>  
using namespace std;

int main() {
    string text;
    int alphabetCount = 0, digitCount = 0, specialCharCount = 0;

    cout << "Enter a text: ";
    cin >> text;

    for (int i = 0; i < text.length(); ++i) {
        if (isalpha(text[i])) {
            alphabetCount++;
            text[i] = toupper(text[i]);
        }
        else if (isdigit(text[i])) {
            digitCount++;
        }
        else {
            specialCharCount++;
        }
    }

    cout << "There are " << alphabetCount << " characters" << endl;
    cout << "There are " << digitCount << " digits" << endl;
    cout << "There are " << specialCharCount << " special characters" << endl;
    cout << "The text is: " << text << endl;

    return 0;
}
// Exercise3
#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}

int findMin(int num1, int num2, int num3) {
    if (num1 < num2 && num1 < num3)
        return num1;
    else if (num2 < num1 && num2 < num3)
        return num2;
    else
        return num3;
}

int main() {
    int num1, num2, num3;

    cout << "Enter a number1: ";
    cin >> num1;
    cout << "Enter a number2: ";
    cin >> num2;
    cout << "Enter a number3: ";
    cin >> num3;

    int maxNumber = findMax(num1, num2, num3);
    int minNumber = findMin(num1, num2, num3);

    cout << "The maximum number is " << maxNumber << endl;
    cout << "The minimum number is " << minNumber << endl;

    return 0;
}
// Exercise4
#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    char playAgain;

    cout << "Guess My Number Game" << endl;

    srand(static_cast<unsigned int>(time(0)));

    do {
        int randomNumber = rand() % 6 + 1; 
        int guess;
        int guessCount = 0;

        do {
            cout << "Enter a guess between 1 and 6: ";
            cin >> guess;
            guessCount++;

            if (guess > randomNumber) {
                cout << "Too high! The random number is " << randomNumber << endl;
            }
            else if (guess < randomNumber) {
                cout << "Too low! The random number is " << randomNumber << endl;
            }
            else {
                cout << "Correct! You got it in " << guessCount << " guesses!" << endl;
            }
        } while (guess != randomNumber);  

        cout << "Do you want to play again? (Y or N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for playing!" << endl;

    return 0;
}

// Exercise4
#include <iostream>
using namespace std;

void showMenu() {
    cout << "MENU" << endl;
    cout << "1: Add" << endl;
    cout << "2: Subtract" << endl;
    cout << "3: Multiply" << endl;
    cout << "4: Divide" << endl;
    cout << "5: Modulus" << endl;
    cout << "6: Exit" << endl;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return static_cast<double>(a) / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int choice;
    int num1, num2;
    char again;
    enum main_menu{EXIT, ADD, SUB, MUL, DIV, MOD};

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        // Check if choice is valid
        if (choice < 1 || choice > 6) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        if (choice == 6) {
            cout << "Exiting the program." << endl;
            break;
        }

        cout << "Enter a number1: ";
        cin >> num1;
        cout << "Enter a number2: ";
        cin >> num2;

        switch (choice) {
            case ADD:{
                cout << "The result is " << add(num1, num2) << endl;
                break;
            }
            case SUB:{
                cout << "The result is " << subtract(num1, num2) << endl;
                break;
            }
            case MUL:{
                cout << "The result is " << multiply(num1, num2) << endl;
                break;
            }
            case DIV:{
                if (num2 != 0) {
                    cout << "The result is " << divide(num1, num2) << endl;
                }
                else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            }
            case MOD:{
                cout << "The result is " << modulus(num1, num2) << endl;
                break;
            }
        }

        cout << "Do you want to perform another operation (Y or N)? ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    return 0;
}

