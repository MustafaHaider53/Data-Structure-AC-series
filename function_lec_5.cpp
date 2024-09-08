#include<iostream>
using namespace std;
 

int sum(int a , int b ){ // sum of two numbers
    return a + b;

}

int factorial(int n){

    int ans = 1;

    for (int i = 2; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int sumOfDigits(int num){

    int rem = 0;
    int sum = 0;

    
    
    while (num > 0 )
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;            
    }
    
        
    return sum;
        
}

void febonaci(int range){

    int num1 = 0;
    int num2 = 1;

    cout << num1 << " " << num2 << " ";

    for (int i = 2; i < range; i++)
    {
        num1 = num1 + num2; // 1 3 8
        num2 = num1 + num2; // 2 5
        cout << num1 << " " << num2  << " ";  
    }
    
}

int main()
{

    

    // nCr = n! / r! * (n-r)!

    // int n; 
    // int r;
    // int ans = 0;

    // cout << "Enter value n: " << endl;
    // cin >> n;

    // cout << "Enter value r: " << endl;
    // cin >> r;

    // ans = (factorial(n)) / (factorial(r) * (factorial(n-r)));
 
    // cout << ans << endl;
    //cout << sumOfDigits(145) << endl;
    
    febonaci(5);
 
    return 0;
}