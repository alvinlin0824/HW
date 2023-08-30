// Example The user first inputs the number of students in a class, 
// and then inputs the test scores of the students one by one

#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    
    int N;
    // dynamic number user define
    int *arr;
    
    cout << "How many students?";
    // Input length of array
    cin >> N;
    arr = new int[N];
    // Input array
    for (int i = 0; i < N; i++)
    {
        cout << "student " << i << "=";
        cin >> arr[i];
    }
    
    // average
    double avg = 0;
    for (int i = 0; i < N; i++)
    {
        avg += (double)arr[i]/N;
    }
    // double average = (double)sum/N;
    // the number of decimal places set to 2. 
    cout << fixed << setprecision(6);
    cout << "avg = " << avg << endl;
    
    delete []arr;

    return 0;
}