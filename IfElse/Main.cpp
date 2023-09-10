#include <iostream>
using namespace std;

int main()
{
    int money;
    cout << "Enter how much money you have? ";
    cin >> money;
    // if money >= 100, then I will go for shopping
    // else, then I will not go for shopping
    if (money >= 100)
    {
        cout << "I will go for shopping" << endl;
    }
    else
    {
        cout << "I will not go for shopping" << endl;
    }
}