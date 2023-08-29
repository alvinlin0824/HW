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
    
    int total[5] = {0};
    double average[5];

    // individual total and average
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            total[i] += score[i][j];
            average[i] = (double)total[i]/3;
        }     
    }
    

    for (int i = 0; i < 5; i++)
        {
        cout << "student " << i+1 << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << " " << j+1 << ": " << score[i][j] << endl;

        }
            cout << " " << "sum: "<< total[i] << endl;
            cout << " " << setprecision(2) << fixed << "avg: " << average[i] << endl;
      }  


    int grand_sum = 0;
    double grand_avg;
    for (int i = 0; i < 5; i++){
        grand_sum += total[i];
        grand_avg = (double)grand_sum/15;
    } 
    
    cout << "total: " << grand_sum << ", " << setprecision(2) << fixed << "avg: " << grand_avg << endl;
           
    // find the highest average
    int max = total[0];
    int max_index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (total[i] > max) {
            max = total[i];
            max_index = i;
        }
    }
    
    cout << "highest avg: student " << max_index + 1 << ": " << setprecision(2) << fixed << average[max_index] << endl;
    
    return 0;
}