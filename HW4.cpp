// Enter four non-repeating numbers (0~9) as the computer's question
// Enter four non-repeating numbers (0~9) as your guessed answer
// Do not check the format of user input
// When the input answer is the same as the title, the program ends
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    cout << "Please enter anser:" << endl;
    int num;
    cin >> num;

    int guess, bulls, cows;
    // cout << "Welcome to the 1A2B game! Try to guess the 4-digit number I'm thinking of." << endl;
    do {
        bulls = cows = 0;
        cout << "Please enter guess:" << endl;
        cin >> guess;
        int num_copy = num, guess_copy = guess;
        for (int i = 0; i < 4; i++) {
            // Remainder
            int num_digit = num_copy % 10;
            int guess_digit = guess_copy % 10;
            // Position and Number are matched
            if (num_digit == guess_digit) {
                bulls++;
            } else if (num % 10 == guess_digit || (num/10) % 10 == guess_digit || (num/100) % 10 == guess_digit || (num/1000)  == guess_digit) {
                cows++;
            }
            num_copy /= 10;
            guess_copy /= 10;
        }
        if (bulls == 4) {
            cout << bulls << "A" << cows << "B" << endl;
            cout << "You Win!" << endl;
            break;
        } else {
            cout << bulls << "A" << cows << "B" << endl;
        }
    } while (true);
    return 0;
}

