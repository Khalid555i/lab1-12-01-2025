/*
    Date: 14-01-2025
    Name: M.K. Khalid Mahamud
    Dept. of CSE Varendra,University

    Problem 2: iii) To print out the 
                  following pattern till n 
                  number of user input: 
                  ***** 
                  * 
                  ** 
                  *** 
                  **** 
                  ***** 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cout << "*";
    }
    cout << endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
           cout <<"*";
        }
        cout << endl;
    }
}
