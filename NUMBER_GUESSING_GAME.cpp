#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); 
    int lowerBound = 1;
    int upperBound = 100;
    int secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
    
    int attempts = 7;
    int guess;
    
    cout << "Welcome to the Sumit's Number Guessing Game!" << endl;
    cout << "You find yourself in a mysterious forest. The forest's guardian has a secret number in mind." << endl;
    cout << "You have " << attempts << " attempts to guess the number and earn the guardian's blessing." << endl;
    
    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts--;
        
        if (guess < secretNumber) {
            cout << "The guardian's number is greater than your guess." << endl;
        } else if (guess > secretNumber) {
            cout << "The guardian's number is smaller than your guess." << endl;
        } else {
            cout << "Congratulations! You've earned the guardian's blessing by guessing the number " << secretNumber << "." << endl;
            break;
        }
        
        if (attempts > 0) {
            cout << "You have " << attempts << " attempts remaining." << endl;
        } else {
            cout << "You've exhausted your attempts. The guardian's number was " << secretNumber << ". Better luck next time!" << endl;
        }
    }
    
    cout << "Thank you for playing the Enchanted Number Guessing Game. Farewell!" << endl;
    
    return 0;
}