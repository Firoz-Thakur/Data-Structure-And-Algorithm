https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1



You are given N number of books. Every ith book has Ai number of pages. 
You have to allocate books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is minimum of those in all the other permutations and print this minimum value. 

Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

Example 1:

Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output: 113
Explanation: 
Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90}  Maximum Pages =113
Therefore, the minimum of these cases is 
113, which is selected as the output.
Example 2:

Input:
N = 3
A[] = {15,17,20}
M = 2
Output: 32
Explanation: Allocation is done as 
{15,17} and {20}
Your Task:
Complete findPages() function that takes a, n, and m as arguments and returns the expected answer.

Expected Time Complexity : O(NlogN)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N <= 105
1 <= A [ i ] <= 106
1 <= M <= 105

Company Tags

bool rakhsktahu(int mid,int ar[],int n,int m)
{
    int c=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+ar[i]>mid)
        {
            c++;
            sum=ar[i];
            if(c>m)
             return false;
        }
        else
        {
            sum=sum+ar[i];
        }
    }
    return true;
}


int findPages(int *ar, int n, int m) {
    //code here
    
   // sort(ar,ar+n);
    if(m>n)
     return -1;
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
     sum=sum+ar[i];
    }
    
    int i=*max_element(ar,ar+n);
    int j=sum;
    int ans=INT_MAX;
    while(i<=j)
    {
       int  mid=(i+j)/2;
        
        if(rakhsktahu(mid,ar,n,m))
        {
            j=mid-1;
            ans=min(mid,ans);
        }
        else
        {
            i=mid+1;
        }
        
    }
        
   return ans;        
    }
    
