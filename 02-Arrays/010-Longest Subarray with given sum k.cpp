/*
Problem: longest Subarray with given sum == k

Approach :  brute force : genrate subarray two for loop , check sum==k or not if yes print len
TC : O(n^2)
SC : O(1)

Approach : Prefix sum + hash map :  optimal force ( apply when no.s is postives , negative , zero in the array ) ,
TC : O(n)
SC : O(1)
 */

#include<iostream>
#include<vector>
#include<map>
using namespace std ;
class Solution{
    public :
       int longestsubarray( vector<int> & nums , int k ){

       map<long long ,int > hash ;
       long long sum = 0 ;
       int maxlen = 0;

       for( int i =0 ;i< nums.size() ; i++){           //0(n)
           sum =sum + nums[i] ;
           if( sum == k ){
            maxlen =max( maxlen , i+1);
           }

           long long rem = sum - i;

           if( hash.find(rem) != hash.end()){
            int len = i - hash[rem];
            maxlen = max(maxlen , len);
           }
           //store
           if( hash.find(sum) == hash.end()){
             hash[sum]=i;
           }
       }
         return maxlen;
       }
};
int main(){

    vector<int>nums = { 1, 2, 3, 1, 1, 1, 4,3,2};
    int k = 3 ;
    Solution obj ;
    cout<<obj.longestsubarray(nums, k)<<endl;

    return 0;
}

