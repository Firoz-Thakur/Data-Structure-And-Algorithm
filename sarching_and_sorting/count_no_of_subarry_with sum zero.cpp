ou are given an array A[] of size N. Find the total count of sub-arrays having their sum equal to 0.

https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1#

Example 1:

Input:
N = 6
A[] = {0,0,5,5,0,0}
Output: 6
Explanation: The 6 subarrays are 
[0], [0], [0], [0], [0,0], and [0,0].

Example 2:

Input:
N = 10
A[] = {6,-1,-3,4,-2,2,4,6,-12,-7}
Output: 4
Explanation: The 4 subarrays are [-1 -3 4]
[-2 2], [2 4 6 -12], and [-1 -3 4 -2 2]

Your Task:
You don't need to read input or print anything. Complete the function findSubarray() that takes the array A and its size N as input parameters and returns the total number of sub-arrays with 0 sum. 
 

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)
 

Constraints:    
1<= N <= 107
-1010 <= Ai <= 1010


ll findSubarray(vector<ll> ar, int n ) {
    //code here
   unordered_map<ll,ll>mp;
  ll c=0;
   mp[0]++;
   ll sum=0;
   for(ll i=0;i<n;i++)
   {
       sum=sum+ar[i];
       if(mp.count(sum))
       {
         c+=mp[sum];         
       }
        mp[sum]++;
   }
    return c;
}
