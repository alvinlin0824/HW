// Enter an amount 1~99999 integers, the amount printed in Chinese capital letters
// Chinese capital letters 1~9: One Two Shen Four Wu Lu Seven Eight Nine
// Units to be printed out: Thousands Thousands Hundreds Ten Thousands
// No need to output zero
// Finally, to print out the whole
// Enter the wrong value range, the program will end directly after the error is displayed
// Input and output format The format must be consistent with the result of the following program

#include<iostream>
#include <iomanip> 
using namespace std;

#include <iostream>
#include <string>
using namespace std;

string num2chinese(int num) {
    string chinese_num[] = {"", "壹", "貳", "參", "肆", "伍", "陸", "柒", "捌", "玖"};
    string chinese_unit[] = {"", "拾", "佰", "仟", "萬"};
    string chinese = "";
    int i = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {
            chinese = chinese_num[digit] + " " + chinese_unit[i] + " " + chinese;
        } else if (i == 4 || (i == 1 && num / 10 % 10 != 0)) {
            chinese = chinese_unit[i] + " " + chinese;
        }
        num /= 10;
        ++i;
    }
    return chinese;
}


int main() {
    int amount;
    cout << "Enter an amount 1~99999 integers: ";
    cin >> amount;
    if (amount < 1 || amount > 99999) {
        cout << "Enter the wrong value range, the program will end directly after the error is displayed" << endl;
        return -1;
    }
    cout << num2chinese(amount) << endl;

    return 0;
}

// int main(){
//     int n;
//     cout << "Please enter number: ";
//     cin >> n;
//     cout << n << endl;

    
    
//     return 0;
// }