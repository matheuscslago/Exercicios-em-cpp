#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    string music;
    list<string> playlist;
    int option = 0;

    while (option != 5)
    {

        switch (option)
        {
        case 1:
            cin >> music;
            playlist.push_back(music);
            break;

        case 2:
            cin >> music;
            playlist.push_front(music);
            break;

        case 3:
            if (!playlist.empty())
            {
                playlist.pop_front();
            }
            else
            {
                cout << "No music in list!" << endl;
            }
            break;

        case 4:
            for (int i = 1; i < playlist.size() + 1; i++)
            {
                cout << i << ". " << playlist.front() << endl;
                playlist.pop_front();
            }
            break;

        case 5:
            break;
        }
    }
}