// Dynamically configure m classes, each class has n students, 
// and calculate the average score after entering the grades

#include<stdio.h>
#include<stdlib.h>
int main(){

    int m,n;
    int **student;

    // number of classes
    printf("Number of Class: ");
    scanf("%d",&m);
    // number of students
    printf("Number of Student: ");
    scanf("%d",&n);

    // dynamic memory allocation
    student = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++)
    {
        student[i] = (int *)malloc(sizeof(int *) * n);
    }

    // input
    for (int i = 0; i < m; i++)
    {   
        printf("Class %d:\n", i+1);
        for (int j = 0; j < n; j++)
        {   
            printf("Student %d: ", j+1);
            scanf("%d",&student[i][j]);
        }   
    }
    
    // Individual
    for (int i = 0; i < m; i++)
    {
        double individual_average = 0;
        printf("class %d\n",i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Student %d: %d\n",j + 1,student[i][j]);
            individual_average += (double)student[i][j]/n;
        }
        printf("Average of class: %.6f\n",individual_average);
        
    }
    
    // Global Mean
    double average = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            average += (double)student[i][j]/(m*n);
        }
    printf("Average of School: %.6f",average);
    
    free(student);
    return 0;
}