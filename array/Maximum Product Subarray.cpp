Given an array Arr that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.
https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#



Example 1:

Input:
N = 5
Arr[] = {6, -3, -10, 0, 2}
Output: 180
Explanation: Subarray with maximum product
is  6, -3, -10 which gives product as 180.
Example 2:

Input:
N = 6
Arr[] = {2, 3, 4, 5, -1, 0}
Output: 120
Explanation: Subarray with maximum product
is 2, 3, 4, 5 which gives product as 120.
Your Task:
You don't need to read input or print anything. Your task is to complete the function maxProduct() which takes the array of integers arr and n as parameters and returns an integer denoting the answer.
Note: Use 64-bit integer data type to avoid overflow.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:




long long maxProduct(int *ar, int n) {
	    // code here
	    long long int ans=ar[0],mn=ar[0],mx=ar[0];
	    
	    for (int i=1;i<n;i++)
	    {
	        if(ar[i]<0)
	        {
	            swap(mn,mx);
	        }
	       
	       mx=max<long long int>(mx*ar[i],ar[i]);
	       mn=min<long long int>(mn*ar[i],ar[i]);
	        
	        ans=max(ans,mx);
	    }
	       

 return ans;
	        
