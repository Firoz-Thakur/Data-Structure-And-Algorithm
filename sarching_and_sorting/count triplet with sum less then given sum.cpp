Given an array arr[] of distinct integers of size N and a sum value X, the task is to find count of triplets with the sum smaller than the given sum value X.

https://www.youtube.com/watch?v=_A8obVmv6mc
https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1#



Example 1:

Input: N = 6, X = 2
arr[] = {-2, 0, 1, 3}
Output:  2
Explanation: Below are triplets with 
sum less than 2 (-2, 0, 1) and (-2, 0, 3). 

Example 2:

Input: N = 5, X = 12
arr[] = {5, 1, 3, 4, 7}
Output: 4
Explanation: Below are triplets with 
sum less than 12 (1, 3, 4), (1, 3, 5), 
(1, 3, 7) and (1, 4, 5).

 

Your Task:
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function countTriplets()
that take array arr[], integer N  and integer X as parameters and returns the count of triplets.

 

Expected Time Complexity: O(N2).
Expected Auxiliary Space: O(1).


	long long countTriplets(long long ar[], int n, long long sum)
	{
	    // Your code goes here
	    sort(ar,ar+n);
	    
	    long long c=0;
	    for(int i=0;i<n;i++)
	    {
	        int j=i+1;
	        int k=n-1;
	        
	     while(j<k)
	     {
	        
	        if((ar[i]+ar[j]+ar[k])<sum)
	        {
	            c=c+k-j;
	            j++;
	                         
	                                   // because the k is the largest number less
	                                    //then k for fix i,j the sum will always be
	                                //less then the sum if for current k it is less.
	            
		}
		     
	        else
	        {
	            k--;
	        }
	        
	     }
	   }
	   return c;
	}
		 
