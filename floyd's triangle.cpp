
// floyd's triangle
//  1
//  2  3
//  4  5  6
//  7  8  9  10
//  11  12  13  14  15
#include <iostream>
using namespace std;
int main()
{
    int row, temp = 0;
    cout << "enter the no of row and column " << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        cout << endl;
        for (int j = 1; j <= i; j++)
        {
            temp++;
            if (j <= i)
            {
                cout << " " << temp << " ";
            }
            else
            {
                cout << "   ";
            }
        }
    }
}