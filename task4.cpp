#include <iostream>
using namespace std;
void num(int number);
main()
{
    int number;
    cout << "Enter any number:";
    cin >> number;
    num(number);
}
void num(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (i % 4 == 0)
        {
            int j = i * 10;
            cout << j;
            cout << ",";
        }
        else
        {
            cout << i;
            cout << ",";
        }
    }
}