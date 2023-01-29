#include <iostream>
using namespace std;
void percent(int number);
main()
{
   int number;
   percent(number);
}
void percent(int number)
{
    float totalNumber = 0.0;
    
    float count1 = 0.0;
    float count2 = 0.0;
    float count3 = 0.0;
    cout << "enter total numbers:";
    cin >> totalNumber;
    

    for (int x = 1; x <= totalNumber; x++)
    {
        cout << "enter number : ";
        cin >> number;
        if (number % 2 == 0)
        {
            count1 = count1 + 1;
        }

        if (number % 3 == 0)
        {
            count2 = count2 + 1;
        }

        if (number % 4 == 0)
        {
            count3 = count3 + 1;
        }
    }
    float percent1 = (count1 / totalNumber) * 100;
    cout << percent1 <<" %" <<endl;
    float percent2 = (count2 / totalNumber) * 100;
    cout << percent2 <<" %" <<endl;
    float percent3 = (count3 / totalNumber) * 100;
    cout << percent3 <<" %" <<endl;
}