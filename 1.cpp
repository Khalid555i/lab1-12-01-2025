/*
Date: 14-01-2025
Name: M. K. KHALID MAHAMUD
Dept. of CSE Varendra,University

Problem 1: To Display n number of natural numbers and their sum. 
*/

#include<iostream>
using namespace std;

int main()
{
  int n,sum = 0;
  cout << "Enter the Numbers of Natural Numbers : " ;

  cout << "The first " << n <<" natural number is : ";

  for(int i=0; i<n; i++)
    {
      cout << i << " ";
      sum += i;
    }

  cout << n << " Natural numbers sum is :" << sum ;

  return 0;
}
