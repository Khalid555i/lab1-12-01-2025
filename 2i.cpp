/*
   Date :14-01-2025
   Name: M.K. KHALID MAHAMUD
   Dept.of CSE Varendra,University

   Problem 2: i) To print the following pattern 
                  till n number of user input: 
                    1 
                    22 
                    333 
                    4444
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter How many pattern you want to print : ";
    cin >> n;

    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            cout << i << " ";   
        }
        cout << endl;
    }
}
