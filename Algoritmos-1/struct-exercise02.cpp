#include <iostream>
using namespace std;

struct Character
{
    string name;
    int level;
    int money;
};
int main()
{
    Character player;
    cout << "Enter the player name: ";
    cin >> player.name;

    cout << "Enter the player level: ";
    cin >> player.level;

    cout << "Enter the money quantity: ";
    cin >> player.money;

    cout << "Player name: " << player.name << endl
         << "Player level: " << player.level << endl
         << "Player money: " << player.money << endl;

    if (player.money > 1000)
    {
        cout << "Rich player!" << endl;
    }
    else
    {
        cout << "Suburban player!" << endl;
    }
    return 0;
}