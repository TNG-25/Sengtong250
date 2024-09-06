#include <iostream>
using namespace std;
int main() {
// Exercise1

    //Store
    char operation;
    double num1, num2, result;

    //Input
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter a number1: ";
    cin >> num1;

    cout << "Enter a number2: ";
    cin >> num2;

    //Process & output
    if (operation == '+') {
        result = num1 + num2;
        cout << "The result of " << num1 << " + " << num2 << " = " << result << endl;
    } else if (operation == '-') {
        result = num1 - num2;
        cout << "The result of " << num1 << " - " << num2 << " = " << result << endl;
    } else if (operation == '*') {
        result = num1 * num2;
        cout << "The result of " << num1 << " * " << num2 << " = " << result << endl;
    } else if (operation == '/') {
        result = num1 / num2;
        cout << "The result of " << num1 << " / " << num2 << " = " << result << endl;
    } else {
        cout << "Invalid operator entered. Please run the program again and enter a valid operator." << endl;
    }

// Exercise2

    //Store
    char operation;
    int num1, num2;

    //Input
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;

    //Process & Output
    switch (operation) {
    case '+':{
        cout << "The result of " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    }
    case '-':{
        cout << "The result of " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    }
    case '*':{
        cout << "The result of " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    }
    case '/':{
        cout << "The result of " << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << endl;
        break;
    }
    default:
       cout << "Invalid operator!" << endl;
        break;
    }

// Exercise3

    //Store
    enum MobileOperator { Cellcard = 12, Smart = 93, Metfone = 97 };

    
    int code;
    double duration, costPerMinute, totalCost;

    //Input
    cout << "Menu:" << endl;
    cout << "Mobile operators Code Price per minute" << endl;
    cout << "Cellcard 12 3.00" << endl;
    cout << "Smart 93 3.50" << endl;
    cout << "Metfone 97 4.00" << endl;

    
input_code:
    cout << "Enter Code: ";
    cin >> code;

    

    switch (code) {
    case Cellcard:{
        costPerMinute = 3.00;
        break;
    }
    case Smart:{
        costPerMinute = 3.50;
        break;
    }
    case Metfone:{
        costPerMinute = 4.00;
        break;
    }
    default:{
        cout << "Invalid Code. Please try again." << endl;
        goto input_code;
    }
    
    cout << "Enter the call duration: ";
    cin >> duration;

    
    totalCost = costPerMinute * duration;

    
    cout << "The amount of money spent: " << totalCost << endl;

    return 0;
}
