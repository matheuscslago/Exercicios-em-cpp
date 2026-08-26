#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> websites = {"google.com", "github.com", "youtube.com"};
    stack<string> history;

    // initialization in home;
    history.push("Home");

    int choice = 0;
    int option;

    // principal loop
    while (choice != 4)
    {
        // show actual page
        if (!history.empty())
        {
            cout << "Voce está em " << history.top() << "\n"
                 << endl;
        }

        // menu
        cout << "1. Visitar nova pagina" << endl
             << "2.Voltar" << endl
             << "3.Ver pagina atual" << endl
             << "4.Sair" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Paginas disponiveis: " << endl;

            for (int i = 0; i < websites.size(); i++)
            {
                cout << i << ". " << websites[i] << " | ";
            }

            cin >> option;

            if (option >= 0 && option < websites.size())
            {
                history.push(websites[option]);
            }

            break;

        case 2:
            if (history.size() > 1)
            {
                history.pop();
            }

            break;

        case 3:
            break;

        case 4:
            choice = 4;
            break;
        }
    }
}