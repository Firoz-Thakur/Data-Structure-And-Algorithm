https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#

Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
Example 2:

Input: N = 5
arr[] = {2, 3, 4, 5, 6}
Output: 0
Explanation: As the sequence is already 
sorted so there is no inversion count.
Example 3:

Input: N = 3, arr[] = {10, 10, 10}
Output: 0
Explanation: As all the elements of array 
are same, so there is no inversion count.
Your Task:
You don't need to read input or print anything. Your task is to complete the function inversionCount() which takes the array arr[] and the size of the array as inputs
and returns the inversion count of the given array.

Expected Time Complexity: O(nLogn).
Expected Auxiliary Space: O(n).

Constraints:
1 ≤ N ≤ 107
1 ≤ C ≤ 1018

Company Tags



long long int corss(long long int  *ar,long long int s,long long int e)
{
    long long mid=(s+e)/2;
    long long i=s;
    long long j=mid+1;
    long long k=s;
    long long int temp[e+1];
    long long c=0;
    while(i<=mid && j<=e)
    {
        if(ar[i]<=ar[j])
        {
            temp[k]=ar[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=ar[j];
            c+=mid-i+1;
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k++]=ar[i++];
    }
    while(j<=e)
    {
        temp[k++]=ar[j++];
    }
    
for(long long i=s;i<=e;i++)
{
    ar[i]=temp[i];
}
    return c;
}



long long int inv(long long *ar,long long s,long long e)
{
    if(s>=e)
    {
        return 0;
    }
    long long int mid=(s+e)/2;
    long long int  x=inv(ar,s,mid);
    long long int y=inv(ar,mid+1,e);
    long long int z= corss(ar,s,e);
   // int z;
    return x+y+z;
}




long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    return inv(arr,0,N-1);
    
}
