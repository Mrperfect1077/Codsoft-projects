#include <iostream>

using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    char choice;
    
    do {
        cout << "Creative Calculator" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Factorial" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case '1': {
                double num1, num2;
                cout << "Enter first number: "<<endl;
                cin>>num1;
                cout << "Enter Second number: "<<endl;;
                cin  >> num2; 
                cout << "Result: " << num1 + num2 << endl;
                break;
            }
            case '2': {
                double num1, num2;
                cout << "Enter first number: "<<endl;
                cin>>num1;
                cout << "Enter Second number: "<<endl;;
                cin  >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            }
            case '3': {
                double num1, num2;
                cout << "Enter first number: "<<endl;
                cin>>num1;
                cout << "Enter Second number: "<<endl;;
                cin  >> num2;                
                cout << "Result: " << num1 * num2 << endl;
                break;
            }
            case '4': {
                double num1, num2;
                cout << "Enter first number: "<<endl;
                cin>>num1;
                cout << "Enter Second number: ";
                cin  >> num2;                 
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            }
            case '5': {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                if (num < 0) {
                    cout << "Error: Factorial is defined for non-negative integers." << endl;
                } else {
                    cout << "Result: " << factorial(num) << endl;
                }
                break;
            }
            case '6': {
                cout << "Goodbye!" << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
        
        if (choice != '6') {
            cout << "Do you want to continue (y/n)? ";
            cin >> choice;
        }
        
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}