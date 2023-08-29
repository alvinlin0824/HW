// Enter four non-repeating numbers (0~9) as the computer's question
// Enter four non-repeating numbers (0~9) as your guessed answer
// Do not check the format of user input
// When the input answer is the same as the title, the program ends
#include <iostream>
#include <string>
using namespace std;

int main() {
    int answer[4] = {1, 2, 3, 4};
    int guess[4];
    int A = 0, B = 0;
    while (true) {
        cout << "Enter four non-repeating numbers (0~9) as the computer's question: ";
        for (int i = 0; i < 4; ++i) {
            cin >> answer[i];
        }
        bool valid = true;
        for (int i = 0; i < 4; ++i) {
            for (int j = i + 1; j < 4; ++j) {
                if (answer[i] == answer[j]) {
                    valid = false;
                    break;
                }
            }
            if (!valid) {
                break;
            }
        }
        if (!valid) {
            cout << "Enter the wrong value range, the program will end directly after the error is displayed" << endl;
            break;
        }
        while (true) {
            cout << "Enter four non-repeating numbers (0~9) as your guessed answer: ";
            for (int i = 0; i < 4; ++i) {
                cin >> guess[i];
            }
            valid = true;
            for (int i = 0; i < 4; ++i) {
                for (int j = i + 1; j < 4; ++j) {
                    if (guess[i] == guess[j]) {
                        valid = false;
                        break;
                    }
                }
                if (!valid) {
                    break;
                }
            }
            if (!valid) {
                cout << "Enter the wrong value range, please re-enter" << endl;
                continue;
            }
            A = B = 0;
            for (int i = 0; i < 4; ++i) {
                if (guess[i] == answer[i]) {
                    ++A;
                } else {
                    for (int j = 0; j < 4; ++j) {
                        if (guess[i] == answer[j]) {
                            ++B;
                            break;
                        }
                    }
                }
            }
            cout << A << "A" << B << "B" << endl;
            if (A == 4) {
                cout << "Congratulations! You win!" << endl;
                return 0;
            }
        }
    }

    return -1;
}
