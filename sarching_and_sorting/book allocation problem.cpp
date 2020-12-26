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
    
