#include <iostream>
using namespace std;

int main()
{
    int money;
    cout << "How much money do you currently have? ";
    cin >> money;
    if (money >= 100 && money < 1000) 
    {
        cout << "You can go to small shopping complex today!" << endl;
    }
    else if (money >= 1000)
    {
        cout << "You can go to big shopping complex today!" << endl;
    }
    else 
    {
        cout << "You can not go for shopping today!" << endl;
    }
}