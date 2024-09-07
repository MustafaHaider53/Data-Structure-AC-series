#include<iostream>
using namespace std;
 
int main()
{
 // Q1
    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++) // for lines
    // {
    //     for (int j = 1; j <= n; j++) //for print
    // {
    //     cout << j;
    // }
    // cout  << endl;
    // }
    
// Q2
    
    //  int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++) // for lines
    // {
    //     for (int j = 1; j <= n; j++) //for print
    // {
    //     cout << "*" << " ";
    // }
    // cout  << endl;
    // }  
    
//Q3

    // int n;
    // cout << "Enter value: " << endl;
    // cin >> n;

    // char c;
    // cout << "Enter chracter: " << endl;
    // cin >> c;

    // for (int i = 1; i <= n; i++) // for lines
    // {
    //     for (char j = 'A'; j <= c; j++) //for print
    // {
    //     cout << j << " ";
    // }
    // cout  << endl;
    // }

// Q4

    
    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // int var = 0;

    // for (int i = 1; i <= n; i++) // for lines
    // {

    //     for (int j = 1; j <= n; j++) //for print
    // {
    //     var++;
    //     cout << var << " ";
        
    // }
    // cout  << endl;
    // }
    
 // Q5

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // char var = 64 ;

    // for (int i = 1; i <= n; i++) // for lines
    // {

    //     for (int j = 1; j <= n; j++) //for print
    // {
    //     var++;
    //     cout << var << " ";
        
    // }
    // cout  << endl;
    // }

// Q6

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    

    // for (int i = 1; i <= n; i++) // for lines
    // {

    //     for (int j = 1; j <= i; j++) //for print
    // {
        
    //     cout << "*" << " ";
        
    // }
    // cout  << endl;
    // }


// Q7

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    

    // for (int i = 1; i <= n; i++) // for lines
    // {

    //     for (int j = 1; j <= i; j++) //for print
    // {
        
    //     cout << i << " ";
        
    // }
    // cout  << endl;
    // }

// Q8

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // char c = 64;    

    // for (int i = 1; i <= n; i++) // for lines
    // {

    //     c++;

    //     for (int j = 1; j <= i; j++) //for print
    // {
        
    //     cout << c << " ";
        
    // }
    // cout  << endl;
    // }

// Q9

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    

    // for (int i = 1; i <= n; i++) // for lines
    // {

    //     for (int j = 1; j <= i; j++) //for print
    // {
        
    //     cout << j << " ";
        
    // }
    // cout  << endl;
    // }

// Q10

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;


    // for (int i = 1; i < n; i++) // for lines
    // {        
    //     for (int j = i; j > 0; j--) //for print
    // {
    //     cout << j << " ";
    // }
    // cout  << endl;
    // }

// Q11 Floyd triangle

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // int var = 0;

    // for (int i = 1; i <= n; i++) // for lines
    // {        
    //     for (int j = 1; j <= i; j++) //for print
    // {
    //     var++;
    //     cout << var << " ";
    // }
    // cout  << endl;
    // }

// Q12 homework

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // char var = 64;

    // for (int i = 1; i <= n; i++) // for lines
    // {        
    //     for (int j = 1; j <= i; j++) //for print
    // {
    //     var++;
    //     cout << var << " ";
    // }
    // cout  << endl;
    // }

// Q13 reverse with spaces

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // int var = 0;

    // for (int i = 0; i < n; i++) // for lines
    // {        
    //     var++;

    //     for (int j = 0; j < i; j++) // print spaces
    //     {
    //         cout << " ";          
    //     }

    //     for (int k = 0; k < n-i; k++)// 
    //     {
    //         cout << var;
    //     }
    //     cout  << endl;
    // }

// Q13 reverse with spaces characters

    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    // char var = 64;

    // for (int i = 0; i < n; i++) // for lines
    // {        
    //     var++;

    //     for (int j = 0; j < i; j++) // print spaces
    //     {
    //         cout << " ";          
    //     }

    //     for (int k = 0; k < n-i; k++)// 
    //     {
    //         cout << var;
    //     }
    //     cout  << endl;
    // }

// Q14 pyramid pattern
    // int n;

    // cout << "Enter value: " << endl;
    // cin >> n;

    

    // for (int i = 0; i < n; i++) // for lines 

    // {        
    //     for (int j = 0; j < n-i-1; j++)// for spaces
    //     {
    //         cout << " ";
    //     }

    //     for (int k = 1; k <= i+1; k++)// for 1 half numbers
    //     {
    //         cout << k;
    //     }

    //     for (int l = i; l >= 1; l--)// for 2 half numbers
    //     {
    //         cout << l;
    //     }
        
    //     cout << endl;
        
    //}

// Q15 hollow diamomd pattern

    int n;

    cout << "Enter value: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++) // for spaces of 1st top half
        {
            cout << "-";
        }

        for (int k = i; k <= i; k++) // for top half triangle star
        {
            cout << "*";
        }

        for (int l = i; l > 0; l--){ // for between spaces
            cout << "-";
        }

        for (int m = 0; m < i-1; m++)// for remaning spaces in between
        {
            cout << "-";
        }
        

        if(i != 0)
        {

            for (int n = i; n <= i; n++) // for top 2nd half triangle
            {
            cout << "*";
            }
        }
        cout << endl;
        
    } 

    
    
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i+1 ; j++)// for spaces
        {
            cout << "-";
        }

        for (int k = i; k <= i; k++)// for bottom half left stars
        {
            cout << "*";
        }

        for (int l = 0; l < (n-1)-i-1; l++){ // for between spaces
            cout << "-";
        }

        for (int m = 0; m < (n-1)-i-2; m++) //for remaning spaces in between
        {
            cout << "-"; 
        }

        if(i != (n-1)-1){

        for (int n = i; n <= i; n++)// for bottom half right stars
        {
            cout << "*";
        }

        }
        

        
        cout  << endl;
    }
    

    return 0;


}