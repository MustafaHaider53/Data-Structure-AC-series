#include<iostream>
#include<algorithm>
#include<climits>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // int arr[8] = {5,12,43,2,98,5,7,1};

    // int minimum = INT_MAX;
    // int maximum = INT_MIN;
    // int start = 0;
    // int end = 7;

    // for (int i = 0; i < 8; i++)
    // {
    //     minimum = min(arr[i] , minimum);
    // }

    // for (int i = 0; i < 8; i++)
    // {
    //     maximum = max(arr[i] , maximum);
    // }

    // for (int i = 0; i < 8; i++)
    // {
    //     if(arr[i] == minimum){
    //         start = i;
    //     }

    //     if(arr[i] == maximum){
    //         end = i;
    //     }
    // }

    // int temp = arr[start];
    // arr[start] = arr[end];
    // arr[end] = temp;

    // //swap(arr[start] , arr[end]);

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << arr[i] <<" ";
    // }

    // int arr2[7] = {1,5,1,4,4,5,7};
    // int unique = 0;
    
    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = 0; j < 7; j++)
    //     {
    //         if(arr2[i] == arr2[j]){
    //             break;
    //         }
    //         else{
    //             unique = arr2[i];
    //         }
    //     }
    // }

    // cout << unique << endl;

    int arr3[] = {1,3,6,8,5};
    int arr4[] = {1, 7,6,10,5};
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr3[i] == arr4[j]){
                cout << arr3[i] << " ";
                break;
            }
        }
    }
    
     
 
    return 0;
}