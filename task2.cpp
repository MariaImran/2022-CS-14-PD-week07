#include <iostream>
using namespace std;
void nestedLoop(int rows);
main()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    nestedLoop(rows);
}

void nestedLoop(int rows)
{
    for (int i = 1; i <= rows; rows--)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}