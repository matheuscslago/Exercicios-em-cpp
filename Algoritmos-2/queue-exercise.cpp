#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<string> print;
    string file;
    int option;

    do
    {
        cout << "1. Upload file to print" << " | "
             << "2. Print next file" << " | "
             << "3. Show remaining files" << " | "
             << "4. Leave" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            getline(cin >> ws, file);
            print.push(file);
            cout << file << " Uploaded!\n"
                 << endl;
            break;

        case 2:
            if (!print.empty())
            {
                cout << "File name: " << print.front() << " | Status: Printed!\n"
                     << endl;
                print.pop();
            }
            else
            {
                cout << "No files to print! Backing to menu...\n"
                     << endl;
            }

            break;

        case 3:
            cout << "Remaning files: " << print.size() << endl;
            break;

        case 4:
            cout << "Leaving..." << endl;
            break;
        }
    } while (option != 4);

    return 0;
}