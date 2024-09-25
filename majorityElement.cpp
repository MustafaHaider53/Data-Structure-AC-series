#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
 
int main()
{
    
// Brute force approach
    vector<int> nums = {2,2,2,3,3,3,4,1,1,1,1,1,1,1};

    // for ( int val : nums )
    // {
    //     int freq = 0;

    //     for (int elem  : nums )
    //     {
    //         if(val == elem){
    //             freq++;
    //         }
    //     }

    //     if(freq > (nums.size()) / 2 ){
    //         cout << val << endl;
    //         break;
    //     }

        
    // }

// optimize approach 

    // sorting
    // sort(nums.begin() , nums.end());

    // int freq = 0;
    // int ans = nums[0];

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if(nums[i] == nums[i-1]){
    //         ans = nums[i];
    //         freq++;
    //     }
    //     else{
            
    //         freq = 1;
    //     }

    //     if(freq > (nums.size()) / 2){
    //         cout << ans << endl;
    //         break;
    //     }
    // }

// moores algorithm

    int freq = 0 ;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        if(freq == 0){
            ans = nums[i];
            
        }

        if (ans == nums[i])
        {
            freq++;
            
            
        }
        else{
            freq--;
            
        }

    }
    cout  << endl;
    cout << ans << endl;


    
    
 
 
 
    return 0;
}