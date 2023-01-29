#include <iostream>
using namespace std;
int num(int number);
main()
{
    int number=0;
    cout << "Enter any number:";
    cin >> number;
    cout << num(number);
}
int num(int number)
{
    int sum=0;
    for (int i = 1; i <= number; i++)
    {
        
         sum = sum + i;
    }
        return sum;
}