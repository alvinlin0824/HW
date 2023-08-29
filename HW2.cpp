// Please enter 2 integers m and n
// Print out the ninety-nine multiplication table of m*n (there is a blank character after each output)
// The multiplier and multiplicand of each data only occupy one grid
// The product occupies 2 spaces and is aligned to the right

#include<iostream>
#include <iomanip> 
using namespace std;

int main(){
    // int m,n;

    // cin >> m >> n;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cout << j << "*" << i << "=" << setw(2) <<i*j << " ";
        }
            cout << endl;
    }
    
    return 0;
}