#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // double = 8 bytes
    double salaray = 50000.505;
    cout << setprecision(3) << fixed;
    cout << "The salary is " << salaray << endl;
}