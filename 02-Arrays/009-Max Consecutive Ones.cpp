/*
Problem: Max Consecutive Ones
Platform: Leetcode 485

Approach :  brute force
TC : O(n)
SC : O(1)

 */
#include<iostream>
#include<vector>
using namespace std ;
class Solution {
  public :
  int findMaxConsecutiveOnes( vector<int> & nums){
       //variable
       int count = 0 ;
       int count1 = 0 ;
       //travel loop from 0 to n
       for( int i = 0 ; i< nums.size() ; i++ ){
           if( nums[i] == 1 ){
            count++ ;
            if( count > count1 ){
                count1 = count ;
            }
           }
           else{
            count = 0 ;
           }
       }
       return count1 ;
  }
};
int main(){
    vector<int> nums = { 1 , 1 , 0 , 1 , 1 , 0 , 1 ,1};
    Solution obj ;
    cout<<obj.findMaxConsecutiveOnes(nums)<<endl;
    return 0 ;
}
