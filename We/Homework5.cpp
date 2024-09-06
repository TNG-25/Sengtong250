#include<iostream>
using namespace std;
int main(){

// Exercise1

    //Store
    int A, sum = 0;

    //Input
    cout << "Enter the starting number A: ";
    cin >> A;

    //Process
    for (int i = A; i <= 100; i++) {
        sum += i;
    }

    // Output
    cout << "The sum of integers from " << A << " to 100 is: " << sum << endl;

// Exercise2

    //Store
    int k;

    //Input
    cout << "Enter the number for the multiplication table: ";
    cin >> k;

    //Process & output
    for (int i = 1; i <= 10; i++) {
        cout << k << " x " << i << " = " << k * i << endl;
    }

// Exercise3

    //Store
    int n;
    int sum = 0;

    //Input
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from 0 to " << n << ": ";
    
    //Process
    for (int i = 0; i <= n; i++) {
        cout << i << " ";
        sum += i;
    }
    cout << endl;

    double average = static_cast<double>(sum) / (n + 1);

    //Output
    cout << "The average of these numbers is: " << average << endl;

// Exercise4

    //Store
    int number;
    int sum = 0;

    //Input & Process
    cout << "Enter numbers (enter 0 to stop):" << endl;

    do {
        cin >> number;
        sum += number;
    } while (number != 0);

    //Output
    cout << "The sum of the numbers entered is: " << sum << endl;

// Exercise5

    /*  i)
        **********
        **********
        **********
        ********** 
    */ 

    cout << "\tI :" << endl;
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    /*  ii)
        *
        **
        ***
        ****
        *****
   */

    cout << "\tII :" << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    /*  iii)
             *
            **
           ***
          ****
         *****
   */

    cout << "\tIII :" << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= 1; j--) {
            if (j > i) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    cout << endl;

    /*  iv)
            *
           ***
          *****
         *******
        *********
   */

    cout << "\tIV :" << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= 1; j--) {
            if (j > i) {
                cout << "  ";
            }
            else {
                cout << "  * ";
            }
        }
        cout << endl;
    }
    cout << endl;

    /*  v)
           1
          222
         33333
        4444444
       555555555
    */
    cout << "\tV :" << endl;
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= 1; j--) {
            if (j > i) {
                cout << "  ";
            }
            else {
                cout << i << "   ";
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}