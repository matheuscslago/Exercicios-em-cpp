#include <iostream>

using namespace std;

int hash_aux(int k, int m)
{
    int h = k % m;

    if (h < 0)
    {
        h += m;
    }

    return h;
}

int main()
{
    int k;
    int m;

    cin >> k >> m;
    while (k != 0 || m != 0)
    {
        cout << hash_aux(k, m) << endl;
        cin >> k >> m;
    }
    return 0;
}