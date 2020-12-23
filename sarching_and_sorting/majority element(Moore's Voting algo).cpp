https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#

Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times
in the array.

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output: -1

Explanation: Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
Example 2:

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output: 3
Explanation: Since, 3 is present 
more than N/2 times, so it is 
the majority element.
Your Task:
The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 107
0 <= Ai <= 106

Company Tags
Topic Tags
Related Courses



int majorityElement(int ar[], int n)
{
    
    // your code here
    int maj=ar[0];
    
    int c=1;
    for(int i=1;i<n;i++)
    {
        if(maj!=ar[i])
        {
            c--;
            if(c==0)
            {
                maj=ar[i];
                c=1;
            }
        }
        else
        {
            c++;
        }
    }
    int ct=0;
    for(int i=0;i<n;i++)
    {
        if(maj==ar[i])
        {
            ct++;
        }
    }
    
    if(ct>(n/2))
    {
     return maj;
    }
    else
    {
     return -1;
    }
    
    
    
    
    
    
}
