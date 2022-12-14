#include <iostream>
using namespace std;

int main()
{
    int numberOfRows;
    cout << "Enter the number of rows: ";
    cin >> numberOfRows;
    cout << '\n';

    for (int i = 0; i < numberOfRows; i++)
    {
        int num2 = (numberOfRows - i);
        for (int j = num2; j > 0; j--)
        {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
