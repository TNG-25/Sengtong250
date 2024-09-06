#include <iostream>
using namespace std;

int main() {

// Exercise1

    //Store
    int quantity;
    float price, totalExpense ;
    const float DISCOUNT=0.9;
    const float EXPENSE=5000;

    //Input
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price per item: ";
    cin >> price;

    //Process
    totalExpense = quantity * price;
    
    if (totalExpense > EXPENSE) {
        totalExpense *= DISCOUNT; 
    }

    //Output
    cout << "Total expense: " << totalExpense << endl;

// Exercise2

    //Store
    int mark1, mark2, mark3, mark4, mark5;
    int sum = 0; 

    //Input
    cout << "Enter 5 student marks (each between 0 and 100):" << endl;
    cout << " Enter Mark 1 : :";
    cin >> mark1;
    cout << "Enter Mark 2 : ";
    cin >> mark2;
    cout << "Enter Mark 3 : ";
    cin >> mark3;
    cout << "Enter Mark 4 : ";
    cin >> mark4;
    cout << "Enter Mark 5 : ";
    cin >> mark5;

    //Process
    if ((mark1 < 0 || mark1 > 100) || (mark2 < 0 || mark2 > 100) ||
        (mark3 < 0 || mark3 > 100) || (mark4 < 0 || mark4 > 100) ||
        (mark5 < 0 || mark5 > 100)) {
        cout << "Error: Marks should be between 0 and 100." << endl;
        return 1;
    }

    sum = mark1 + mark2 + mark3 + mark4 + mark5;

    double average = sum / 5;

    //Output
    if (average >= 60) {
        cout << "The student is admitted to the exam." << endl;
    }
    else {
        cout << "The student is not admitted to the exam." << endl;
    }

// Exercise3

    //Store
    int num1, num2, num3, num4, num5;
    int maxNum; 

    //Input
    cout << "Enter 5 integers:" << endl;

    cout << "Number 1 : ";
    cin >> num1;
    cout << "Number 2 : ";
    cin >> num2;
    cout << "Number 3 : ";
    cin >> num3;
    cout << "Number 4 : ";
    cin >> num4;
    cout << "Number 5 : ";
    cin >> num5;

    //Process
    maxNum = num1;

    
    if (num2 > maxNum) {
        maxNum = num2;
    }
    if (num3 > maxNum) {
        maxNum = num3;
    }
    if (num4 > maxNum) {
        maxNum = num4;
    }
    if (num5 > maxNum) {
        maxNum = num5;
    }

    //Output    
    cout << "The maximum number is: " << maxNum << endl;

// Exercise4

    //Store
    int mark1, mark2, mark3, mark4, mark5;
    int totalMarks; 
    double percentage; 

    //Input
    cout << "Enter marks for 5 subjects (each between 0 and 100):" << endl;

    cout << "Enter Mark 1 : ";
    cin >> mark1;
    cout << "Enter Mark 2 : ";
    cin >> mark2;
    cout << "Enter Mark 3 : ";
    cin >> mark3;
    cout << "Enter Mark 4 : ";
    cin >> mark4;
    cout << "Enter Mark 5 : ";
    cin >> mark5;

    //Process
    if ((mark1 < 0 || mark1 > 100) || (mark2 < 0 || mark2 > 100) ||
        (mark3 < 0 || mark3 > 100) || (mark4 < 0 || mark4 > 100) ||
        (mark5 < 0 || mark5 > 100)) {
        cout << "Error: Marks should be between 0 and 100." << endl;
        return 1;
    }

    totalMarks = mark1 + mark2 + mark3 + mark4 + mark5;

    percentage = (totalMarks / 5);

    char grade;
    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else if (percentage >= 50) {
        grade = 'E';
    }
    else {
        grade = 'F';
    }

    // Output 
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "The grade obtained by the student is: " << grade << endl;
    
    return 0;
}
// Exercise5

    //Store
    double sales1, sales2, sales3;
    double salary1, salary2, salary3;

    //Input
    cout << "Enter the sales level for Manager 1: ";
    cin >> sales1;
    cout << "Enter the sales level for Manager 2: ";
    cin >> sales2;
    cout << "Enter the sales level for Manager 3: ";
    cin >> sales3;

    //Process
    if (sales1 <= 500) {
        salary1 = 500 + (sales1 * 0.03);
    } else if (sales1 <= 1000) {
        salary1 = 500 + (500 * 0.03) + ((sales1 - 500) * 0.05);
    } else {
        salary1 = 500 + (500 * 0.03) + (500 * 0.05) + ((sales1 - 1000) * 0.08);
    }

    if (sales2 <= 500) {
        salary2 = 500 + (sales2 * 0.03);
    } else if (sales2 <= 1000) {
        salary2 = 500 + (500 * 0.03) + ((sales2 - 500) * 0.05);
    } else {
        salary2 = 500 + (500 * 0.03) + (500 * 0.05) + ((sales2 - 1000) * 0.08);
    }

    
    if (sales3 <= 500) {
        salary3 = 500 + (sales3 * 0.03);
    } else if (sales3 <= 1000) {
        salary3 = 500 + (500 * 0.03) + ((sales3 - 500) * 0.05);
    } else {
        salary3 = 500 + (500 * 0.03) + (500 * 0.05) + ((sales3 - 1000) * 0.08);
    }

    
    if (salary1 >= salary2 && salary1 >= salary3) {
        salary1 += 200;
        cout << "Manager 1 is the best manager and receives a bonus." << endl;
    } else if (salary2 >= salary1 && salary2 >= salary3) {
        salary2 += 200;
        cout << "Manager 2 is the best manager and receives a bonus." << endl;
    } else {
        salary3 += 200;
        cout << "Manager 3 is the best manager and receives a bonus." << endl;
    }

    // Output
    cout << "Manager 1's salary: $" << salary1 << endl;
    cout << "Manager 2's salary: $" << salary2 << endl;
    cout << "Manager 3's salary: $" << salary3 << endl;

//     return 0;
// }