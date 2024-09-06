//Exercise1
#include <iostream>
using namespace std;
int main(){

    //Store
    int number1;
    int number2;
    int sum;

    //Input
    cout<<"Enter number1: ";
    cin>>number1;
    cout<<"Enter number2: ";
    cin>>number2;

    //Process
    sum = number1 + number2;

    //Output
    cout<<"The result is "<<sum<<endl;
    return 0;
}

//Exercise2
#include <iostream>
using namespace std;
int main(){

    //Store
	float f,c;

    //Input
	cout << "Enter temperature in Farenheit : ";
	cin >> f;

    //Process
	c = (f - 32) * 5 / 9;

    //Output
	cout << "Temperature in celcius is : " << c << endl;
    return 0;
}

//Exercise3
#include <iostream>
using namespace std;
int main(){
    //Store
    int dis,time,speed;

    //Input
    cout << "Enter a distance to the airport : ";
    cin >> dis;
    cout << "Enter time : ";
    cin >> time;

    //Process
    speed = dis / time;

    //Output
    cout << "The speed you need to go is : " << speed << "km/hour" << endl;
    return 0;
} 

//Exercise4
#include <iostream>
using namespace std;
int main(){
    //Store
    int totalDays;
    const int daysInYear = 365;
    const int daysInMonth = 30;

    //Input
    cout << "Enter total number of days: ";
    cin >> totalDays;

    //Process
    int years = totalDays / daysInYear;
    int monthInYears = totalDays % daysInYear;
    int months = monthInYears / daysInMonth;
    int days = monthInYears % daysInMonth;

    //Output
    cout << totalDays << " days is equivalent to " << years << " years " << months << " months " << days << " days." << endl;
    return 0;
}

//Exercise5
#include <iostream>
using namespace std;
int main(){    
    //Store
    int feet, inches;
    const double inchToCm = 2.54;
    const int feetToInches = 12;

    //Input
    cout << "Enter length in feet: ";
    cin >> feet;
    cout << "Enter additional length in inches: ";
    cin >> inches;

    //Process
    int totalInches = (feet * feetToInches) + inches;
    double totalCm = totalInches * inchToCm;
    
    //Output
    cout << "The length in centimeters is: " << totalCm << " cm" << endl;
    
    return 0;
}