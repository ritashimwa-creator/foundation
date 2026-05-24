#include <iostream>

#include <fstream>
#include <string>

using namespace std;


void showHistory();
void learnCPP();
void readFile(string fileName);

int main()
{
    int choice;

    do
    {
        cout << "\n========== FOUNDATION AND HISTORY OF C++ ==========" << endl;
        cout << "1. View History of C++" << endl;
        cout << "2. Learn C++ Concepts" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                showHistory();
                break;

            case 2:
                learnCPP();
                break;

            case 3:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}

void showHistory()
{
    int choice;

    do
    {
        cout << "==========  C++ BACKGROUND ==========" << endl;
        cout << "1. Origin of C++" << endl;
        cout << "2. Evolution of C++" << endl;
        cout << "3. Inventor of C++" << endl;
        cout << "4. Back" << endl;
        cout << "choose: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "C++ was developed from the C language." << endl;
                break;

            case 2:
                cout << "C++ evolved from C with Classes in 1979." << endl;
                break;

            case 3:
                cout << "C++ was created by Bjarne Stroustrup." << endl;
                break;

            case 4:
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);
}

void learnCPP()
{
    int choice;

    do
    {
        cout << "==========  C++ KNOWLEDGE ==========" << endl;
        cout << "1. Data Types" << endl;
        cout << "2. Control Flow" << endl;
        cout << "3. Loops" << endl;
        cout << "4. Arrays" << endl;
        cout << "5. File Streams" << endl;
        cout << "6. Back" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                readFile("datatypes.txt");
                break;

            case 2:
                readFile("controlflow.txt");
                break;

            case 3:
                readFile("loops.txt");
                break;

            case 4:
                readFile("arrays.txt");
                break;

            case 5:
                readFile("filestreams.txt");
                break;

            case 6:
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);
}


void readFile(string fileName)
{
    ifstream file(fileName);

    string line;

    if (file.is_open())
    {
        while(getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}
