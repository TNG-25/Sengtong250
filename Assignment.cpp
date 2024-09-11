#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Function to handle user login
bool login() {
    string correctUsername = "tong";
    string correctPassword = "2500";
    string username, password;

    do {
        cout << "Please fill in the username and password to Login\n";
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Login successful!\n";
            return true;
        }
        else {
            cout << "Your info is not correct. Please input again.\n";
        }
    } while (true); 
}

// Function to input salaries
void inputSalaries(vector<double>& salaries) {
    char choice;
    do {
        double salary;
        cout << "Input Employee Salary: ";
        cin >> salary;
        salaries.push_back(salary);
        cout << "Do you want to input another salary(Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}

// Function to display all salaries
void displaySalaries(const vector<double>& salaries) {
    if (salaries.empty()) {
        cout << "No employee salaries available.\n";
    }
    else {
        for (size_t i = 0; i < salaries.size(); ++i) {
            cout << "Employee Salary" << i + 1 << ": " << salaries[i] << endl;
        }
    }
}

// Function to calculate total of salaries
double calculateTotal(const vector<double>& salaries) {
    double total = 0;
    for (double salary : salaries) {
        total += salary;
    }
    return total;
}

// Function to calculate average salary
double calculateAverage(const vector<double>& salaries) {
    if (salaries.empty()) return 0;
    return calculateTotal(salaries) / salaries.size();
}

// Function to find highest salary
double findHighestSalary(const vector<double>& salaries) {
    return *max_element(salaries.begin(), salaries.end());
}

// Function to find lowest salary
double findLowestSalary(const vector<double>& salaries) {
    return *min_element(salaries.begin(), salaries.end());
}

// Function to search for a specific salary
bool searchSalary(const vector<double>& salaries, double target) {
    return find(salaries.begin(), salaries.end(), target) != salaries.end();
}

// Function to sort salaries in ascending order
void sortSalariesAscending(vector<double>& salaries) {
    sort(salaries.begin(), salaries.end());
    cout << "The Employee salary has been sorted in ascending order.\n";
}

// Function to sort salaries in descending order
void sortSalariesDescending(vector<double>& salaries) {
    sort(salaries.begin(), salaries.end(), greater<double>());
    cout << "The Employee salary has been sorted in descending order.\n";
}

// Function to update an employee's salary
void updateSalary(vector<double>& salaries, double oldSalary, double newSalary) {
    auto it = find(salaries.begin(), salaries.end(), oldSalary);
    if (it != salaries.end()) {
        *it = newSalary;
        cout << "The salary has been updated successfully.\n";
    }
    else {
        cout << "The salary was not found in the list.\n";
    }
}

// Function to delete an employee's salary
void deleteSalary(vector<double>& salaries, double targetSalary) {
    auto it = find(salaries.begin(), salaries.end(), targetSalary);
    if (it != salaries.end()) {
        salaries.erase(it);
        cout << "The salary has been deleted successfully.\n";
    }
    else {
        cout << "The salary was not found in the list.\n";
    }
}

// Function to count the number of employees with salaries less than 500
int countSalariesLessThan500(const vector<double>& salaries) {
    return count_if(salaries.begin(), salaries.end(), [](double salary) {
        return salary < 500;
        });
}

// Main program
int main() {
    if (!login()) {
        return 0; // Exit if login fails
    }

    vector<double> salaries;
    int choice;

    cout << "Welcome to Employee Salaries Management Software\n";

    do {
        cout << "\nMain Menu\n";
        cout << " 1) Input a number of the employee salaries into a list based on a user’s need\n";
        cout << " 2) Display all the employee salaries from a list\n";
        cout << " 3) Calculate the total of the employee salaries\n";
        cout << " 4) Calculate the average salaries\n";
        cout << " 5) Find the highest salaries and lowest salaries\n";
        cout << " 6) Search a specific employee salary\n";
        cout << " 7) Arrange the employee salaries\n";
        cout << " 8) Update an employee salary with a new salary\n";
        cout << " 9) Delete an employee salary from the list\n";
        cout << "10) Count a number of the employees that have salary less than 500.00\n";
        cout << "11) Exit Software\n";
        cout << "Please select an option(1-11): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                inputSalaries(salaries);
                break;
            }
            case 2: {
                displaySalaries(salaries);
                break;
            }
            case 3: {
                cout << "Total of the employee salaries: " << calculateTotal(salaries) << endl;
                break;
            }
            case 4:{
                cout << "Average salary: " << calculateAverage(salaries) << endl;
                break;
            }
            case 5: {
                cout << "Highest salary: " << findHighestSalary(salaries) << endl;
                cout << "Lowest salary: " << findLowestSalary(salaries) << endl;
                break;
            }
            case 6: {
                double target;
                cout << "Enter salary to search: ";
                cin >> target;
                if (searchSalary(salaries, target)) {
                    cout << "Salary found!\n";
                }
                else {
                    cout << "Salary not found!\n";
                }
                break;
            }
            case 7: {
                int sortOption;
                cout << "To arrange the employee salaries\n";
                cout << "1. in ascending order\n";
                cout << "2. in descending order\n";
                cout << "Please select an option (1 or 2): ";
                cin >> sortOption;
                if (sortOption == 1) {
                    sortSalariesAscending(salaries);
                }
                else if (sortOption == 2) {
                    sortSalariesDescending(salaries);
                }
                else {
                    cout << "Invalid option.\n";
                }
                break;
            }
            case 8: {
                double oldSalary, newSalary;
                cout << "Enter salary to update from the list: ";
                cin >> oldSalary;
                cout << "Enter the new salary: ";
                cin >> newSalary;
                updateSalary(salaries, oldSalary, newSalary);
                break;
            }
            case 9: {
                double targetSalary;
                cout << "Enter the salary to delete from the list: ";
                cin >> targetSalary;
                deleteSalary(salaries, targetSalary);
                break;
            }
            case 10: {
                cout << "Number of employees with salary less than 500: "
                    << countSalariesLessThan500(salaries) << endl;
                break;
            }
            case 11: {
                cout << "Thank you for using the Employee Salaries Management Software.\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    } while (choice != 11);

    return 0;
}
