#include<iostream>
using namespace std;
 
int main()
{


    int x = 5; // number
    int n = 8; // power
    int ans = 1;

    if(n < 0){ // if power is negative
        x = 1 / x;
        n = -(n);
    }

    if( n == 0){
        ans = 1;
    }

    if( x == 1){
        ans = 1;
    }


    while (n > 0){

        if((n % 2 ) == 1) // only for 1 bit
        {
            ans = ans * x ;
        }

        x =  x * x; // to store power in squares

        n = n / 2; // decrese by n/2

    }

    cout << ans << endl;

 
 
 
    return 0;
}