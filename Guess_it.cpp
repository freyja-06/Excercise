#include <iostream>
#include <cstdlib> // for rand() and srand()
using namespace std;

int generateRandomNumber(){
    return rand() % 100 + 1;
}

int getPlayerGuess(){
    cout << "Enter your guess (1..100): ";
    int n; cin >> n;
    return n;
}
void printAnswer(int guess, int secretNumber){
    if (guess > secretNumber) {
        cout << "Your number is too big." << endl;
        } else if (guess < secretNumber) {
        cout << "Your number is too small." << endl;
        } else {
        cout << "Congratulation! You win." << endl;
        }
}
int main(){
    int secretNumber, guess;

    secretNumber = generateRandomNumber();
    do {
    guess = getPlayerGuess();
    printAnswer(guess, secretNumber);
    } 
    while (guess != secretNumber);
    
    return 0;
}
