// Make an address book program

// Function
// Enter "i" to enter name, phone number, email
// Enter "l" to print out the content of all personnel currently entered
// Enter "s" to enter the file name, and save the content of all personnel into the file
// Enter "o" to enter the file name, and read the content of all personnel from the file
// Type "q" to quit the program
// The maximum number of people entered is 50

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// define structure
struct book
{
    string Name;
    string Phone;
    string email;
};

// alias structure name
typedef book b;

int main(){
    
    // structure as array and come with alias as "a"
    b a[50];
    // User input choice
    char choice;
    // Record count of input
    int count = 0;
    
    while (true)
    {
        cout << "i: Insert" << endl;
        cout << "l: List" << endl;
        cout << "s: Save" << endl;
        cout << "o: Read" << endl;
        cout << "q: Quit" << endl;

        cin >> choice;

        if (choice == 'i')
        {
         
                    cout << "Name: ";
                    cin >> a[count].Name;
                    cout << "Phone: ";
                    cin >> a[count].Phone;
                    cout << "Email: ";
                    cin >> a[count].email;
                    count++;     
            cout << "Insert Completed!" << endl;
    
        }
        else if (choice == 'l'){
            for (int i = 0; i < count; i++)
                {   
                    cout << "No." << i+1 << endl;
                    cout << "Name: " << a[i].Name << endl;
                    cout << "Phone: " << a[i].Phone << endl;
                    cout << "Email: " << a[i].email << endl;
                    cout << "===========" << endl;
                }
 
        }
        else if (choice == 's'){
            string filename;
            cout << "Enter filename(.txt): ";
            cin >> filename;
            ofstream outfile(filename);
            for (int i = 0; i < count; i++) {
                outfile << a[i].Name << "\t" << a[i].Phone << "\t" << a[i].email << endl;
            }
            outfile.close();
        }
        else if (choice == 'o'){
            string filename;
            cout << "Enter filename(.txt): ";
            cin >> filename;

            ifstream infile(filename);
            while (!infile.eof()) {
                infile >> a[count].Name >> a[count].Phone >> a[count].email;
                count++;
            }
            infile.close();
        }
            
        else if (choice == 'q'){
            return 0;
            break;
         }
        
        system("pause");
        system("cls");


    }
    

    return 0;
}