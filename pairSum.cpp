#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    // // Brute force approach
    vector<int> nums = {2,7,11,15};
    vector<int> ans;
    int target = 13;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i+1; j < nums.size(); j++)
    //     {
    //         if(nums.at(i) + nums.at(j) == target ){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             break;
    //         }
    //     }
        
    // }

    // cout << ans.at(0) << endl;
    // cout << ans.at(1) << endl;
    

    // two pointer approach

    int i = 0; 
    int j = (nums.size())-1;

    int sum = 0;

    while(i < j){

        sum = nums.at(i) + nums.at(j);

        if(sum < target)
        {
            i++;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
        }
    } 

    cout << ans.at(0) << " , " << ans.at(1)  << endl;

 
 
 
    return 0;
}