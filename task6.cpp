#include <iostream>
using namespace std;
void patients(int days);
main()
{
    int days, noOfDoctors;
    cout << "Enter number of days:";
    cin >> days;
    noOfDoctors = 7;
    patients(days);
}
void patients(int days)
{
    int noOfPatients = 0;
    int noOfTreated = 0, noOfUntreated = 0, noOfDoctors = 7;
    int totalTreated = 0, totalUntreated = 0;

    for (int i = 1; i <= days; i++)
    {
        if (i % 3 == 0)
        {
            if (totalUntreated > totalTreated)
            {
                noOfDoctors += 1;
            }
        }
        cout << "Enter number of patients:";
        cin >> noOfPatients;
        if (noOfDoctors >= noOfPatients)
        {
            noOfUntreated = 0;
            noOfTreated = noOfPatients;
        }
        if (noOfDoctors < noOfPatients)
        {
            noOfUntreated = noOfPatients - noOfDoctors;
            noOfTreated = noOfDoctors;
        }
        totalTreated += noOfTreated;
        totalUntreated += noOfUntreated;


        cout << "Total treated: " << totalTreated << endl;
        cout << "Total Untreated: " << totalUntreated << endl;
    }
        cout << "Total treated: " << totalTreated << endl;
        cout << "Total Untreated: " << totalUntreated << endl;
}