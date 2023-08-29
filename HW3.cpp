// Suppose there are 5 students in a class, and each student takes 3 subjects, please
// Use the two-dimensional array to store the grades of each subject of the students, and
// Each student's grades, total marks and average are printed out, and
// Find the student with the highest average high score in the class

#include<iostream>
#include <iomanip> 
using namespace std;

int main(){
    int score[5][3] = {{76,73,85},
                       {88,84,76},
                       {92,82,92},
                       {82,91,85},
                       {72,74,73}};
    
    int grand_sum = 0;
    double grand_avg;
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        double avg;
        cout << "student " << i+1 << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << " " << j+1 << ": " << score[i][j] << endl;
            sum += score[i][j];
            avg = (double)sum/3;
        }
            grand_sum += sum;
            grand_avg = (double)grand_sum/15;
            cout << " " << "sum: " << sum << endl;
            cout << " " << setprecision(2) << fixed << "avg: " << avg << endl;  

    } 
    
    cout << "total: " << grand_sum << ", " << setprecision(2) << fixed << "avg: " << grand_avg << endl;
           

    return 0;
}