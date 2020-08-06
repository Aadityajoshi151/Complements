//THIS PROGRAM IS WRITTEN BY AADITYA JOSHI
#include <iostream>
using namespace std;
int main()
{
    int a[100], i, n;
    system("cls");
    cout << "Enter The Length Of Binary Number " << endl;
    cin >> n;
    cout << "Enter The Binary Number. Press Enter After Entering Each Element " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    system("cls");
    cout << "The Entered Number :- ";
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            a[i] = a[i] + 1;
        else if (a[i] == 1)
            a[i] = a[i] - 1;
    }
    cout << "\nThe 1's Complement Is :- ";
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
    a[n - 1] = a[n - 1] + 1;
    for (i = (n - 1); i >= 0; i--)
    {
        if (a[i] == 2)
        {
            a[i] = 0;
            a[i - 1] += 1;
        }
    }
    cout << "\nThe 2's Complement Is :- ";
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
    system("pause");
}
