// The user first enters the number of students N in a class, and then enters the test scores of the students one by one 
// (0<=scores<=50000) find their average
// Print out the numbers and scores of students who failed 
// (if there are no students who failed, it will also print fail:)
// Print out the scores of the students with the highest scores 
// (if there are multiple scores with the highest scores, please list the one with the lowest index value)

#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    
    int N;
    // dynamic number user define
    int *arr;
    
    // Input length of array
    cin >> N;
    arr = new int[N];
    // Input array
    for (int i = 0; i < N; i++)
    {
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
    cout << fixed << setprecision(2);
    cout << "avg = " << avg << endl;
    
    //fail
    cout << "fail:" << endl;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 60){
           cout << i+1 << ": " << arr[i] << endl;
        }
    }

    // highest
    
    int highest_score = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > highest_score)
        highest_score = arr[i];
    }
    
    // find index
    int index;
    for (int i = 0; i < N; i++) {
        if (arr[i] == highest_score) {
            index = i;
            break;
        }
    }
    
    cout << "highest:" << endl;
    cout << index+1 << ": " << arr[index] << endl;
 
    delete []arr;

    return 0;
}