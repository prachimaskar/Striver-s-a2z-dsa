/*
Problem: Max Consecutive Ones
Platform: Leetcode 485

Approach : set approch :  brute force
TC : O(n log n)
SC : O(n)

Approach : Xor optimal force
TC : O(n)
SC : O(1)
 */
#include<iostream>
#include<vector>
#include<map>
using namespace std ;
class Solution{
    public :
       int missingNumber( vector<int> & nums ){
          int ans = 0;
          for(int i = 0 ; i < nums.size() ; i++){
            ans = ans ^ nums[i] ;
          }
          for( int i = 0 ; i < nums.size()+1 ; i++){
            ans = ans ^ i ;
          }
          return ans ;
        }
};
int main(){

    vector<int>nums = { 3, 0, 1};   // 3^0^0 = 3 , 0^3^1 = 2 , 2^2^1 = 1 ^4 =3
    Solution obj;
    cout<<obj.missingNumber(nums)<<endl;

    return 0;
}

