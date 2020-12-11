https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#

Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number
of jumps to reach the end of the array (starting from the first element). If an element is 0, then cannot move through that element.

Input: 
The first line contains an integer T, depicting total number of test cases.  Then following T lines contains a number n denoting the size of the array. Next line contains
the sequence of integers a1, a2, ..., an.

Output:
For each testcase, in a new line, print the minimum number of jumps. If answer is not possible print -1.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 <= ai <= 107

Example:
Input:
2
11
1 3 5 8 9 2 6 7 6 8 9
6
1 4 3 2 6 7
Output:
3
2

Explanation:
Testcase 1: First jump from 1st element, and we jump to 2nd element with value 3. Now, from here we jump to 5h element with value 9. and from here we will jump to last.






int minJumps(int ar[], int n){
    // Your code here
 
  int dp[n+1];
  for(int i=0;i<=n;i++)
  {
      dp[i]=INT_MAX;
  }
  dp[0]=0;
  for(int i=0;i<n;i++)
  {
      int temp=ar[i];
      int j=i+1;
      while(j<n && temp--)
      {
          dp[j]=min(dp[j],dp[i]+1);
          j++;
      }
  }
//   for(int i=0;i<n;i++)
//   {
//     cout<<dp[i]<<" ";   
//   }
  
  if(dp[n-1]==INT_MAX || ar[0]==0)   // ar[0] in this case we can also write dp[n]<0 
                                    // INT_max +1 == INT_MIN

   return -1;
   else
   return dp[n-1];

}

// 5
// 0 1 1 1 1
// your output is: 
// 0 2147483647 -2147483648 -2147483647 -2147483646 -1

