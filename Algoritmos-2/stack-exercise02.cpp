#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string word;
    stack<char> invertedWord;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        invertedWord.push(word[i]);
    }

    cout << "Inverted Word: " << endl;
    while (!invertedWord.empty())
    {
        cout << invertedWord.top();
        invertedWord.pop();
    }

    return 0;
}