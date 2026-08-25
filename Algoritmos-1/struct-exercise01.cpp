#include <iostream>
using namespace std;
struct Product
{
    string name;
    int amount;
    double price;
};

int main()
{
    Product prod;
    cout << "Enter the product name: ";
    cin >> prod.name;

    cout << "Enter the quantity from product: ";
    cin >> prod.amount;

    cout << "Enter the price from product: ";
    cin >> prod.price;

    cout << "Name: " << prod.name << endl;
    cout << "Amount: " << prod.amount << endl;
    cout << "Price: " << prod.price << endl;
    return 0;
}