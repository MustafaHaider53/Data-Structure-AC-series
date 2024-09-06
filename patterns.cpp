#include<iostream>
using namespace std;
 
int main()
{
 // Q1
    int n;

    cout << "Enter value: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) // for lines
    {
        for (int j = 1; j <= n; j++) //for print
    {
        cout << j;
    }
    cout  << endl;
    }
    
// Q2
    
     int n;

    cout << "Enter value: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) // for lines
    {
        for (int j = 1; j <= n; j++) //for print
    {
        cout << "*" << " ";
    }
    cout  << endl;
    }  
    
 
    return 0;
}