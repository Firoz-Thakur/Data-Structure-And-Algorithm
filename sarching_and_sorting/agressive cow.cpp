https://www.spoj.com/problems/AGGRCOW/
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
Input
t – the number of test cases, then t test cases follows.
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi
Output
For each test case output one integer: the largest minimum distance.
Example
Input:

1
5 3
1
2
8
4
9
Output:

3
Output details:

FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
resulting in a minimum distance of 3.

Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
Input
t – the number of test cases, then t test cases follows.
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi
Output
For each test case output one integer: the largest minimum distance.
Example
Input:

1
5 3
1
2
8
4
9
Output:

3
Output details:

FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
resulting in a minimum distance of 3.



#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool rakhpay(int mid,int ar[],int n,int k)
{
  int c=1;
  int placed=ar[0];

  for(int i=1;i<n;i++)
  {
    if((ar[i]-placed)>=mid)
    {
      placed=ar[i];
      c++;
      if(c==k)
        return true;
    }
  }
return false;
}





int main() {

  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("fuck.txt", "w", stdout);
#endif


  int t;
  cin>>t;
  while(t--)
  {

  int n,k;
  cin>>n>>k;
  int ar[n];
  for(int i=0;i<n;i++)
  {
     cin>>ar[i];
  }
  sort(ar,ar+n);
  
  int i=0;
  int j=ar[n-1]-ar[0];

  int ans=0;
  while(i<=j)
  {
   int mid=(i+j)/2;

   if(rakhpay(mid,ar,n,k))
   {
     ans=mid;
     i=mid+1;
   }
   else
   {
    j=mid-1;
   }

  }
  cout<<ans<<endl;

  }
  return 0;
}


