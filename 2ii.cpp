/*
    Date: 14-01-2025
    Name: M.K. Khalid Mahamud
    Dept. of CSE Varendra,University

    Problem 2: ii) To print the Floyd’s 
                Triangle till n number of 
                user input: 
                0 
                01 
                101 
                0101 
                10101 

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int start = (i % 2 == 0) ? 0 : 1; 
        for (int j = 1; j <= i; ++j) {
            cout << start;         
            start = 1 - start;     
        }
        cout << endl; 
    }
    return 0;
}
