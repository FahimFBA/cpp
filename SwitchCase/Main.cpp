#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter any number between 1 and 7: ";
    cin >> day;
    switch(day)
    {
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        case 4:
            cout << "Tuesday" << endl;
            break;
        case 5:
            cout << "Wednesday" << endl;
            break;
        case 6:
            cout << "Thursday" << endl;
            break;
        case 7:
            cout << "Friday" << endl;
            break;
        default:
            cout << "Invalid Input! Enter any number between 1 and 7" << endl;
    }
}