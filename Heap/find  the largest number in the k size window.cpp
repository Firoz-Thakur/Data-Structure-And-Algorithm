https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1




vector <int> max_of_subarrays(int *ar, int n, int k){
    // your code here

 deque<int> q(k);
 int i;
 vector<int> v;
 for(i=0;i<k;i++)
 {
     
     // step 1 :
    while(!q.empty() && ar[i]>=ar[q.back()])
     {
         q.pop_back();
     }
     q.push_back(i);
    
 }
 
 for( ; i<n;i++)
 {
     //contraction
    // step 2 :
    v.push_back(ar[q.front()]);
    while(!q.empty() && (q.front() <=(i-k)))
     {
         q.pop_front();
     }
    //below step is same as the step 1;
    //if the element are there of no need ,remove them all
     while(!q.empty() && ar[i]>=ar[q.back()])
     {
         q.pop_back();
     }
     //expention
     q.push_back(i);
 }
  v.push_back(ar[q.front()]);
 return v;

}
