https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#

There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is start time of meeting i and F[i] is finish time of meeting i.

What is the maximum number of meetings that can be accommodated in the meeting room? Also note start time of one chosen meeting can't be equal to the end time of the
other chosen meeting.

Example 1:

Input:
N = 6
S[] = {1,3,0,5,8,5}
F[] = {2,4,6,7,9,9}
Output: 1 2 4 5
Explanation: Four meetings can held with
given start and end timings.
Example 2:

Input:
N = 8
S[] = {75250,50074,43659,8931,11273,
27545,50879,77924}
F[] = {112960,114515,81825,93424,
54316,35533,73383,160252}
Output: 6 7 1
Explanation: Only three meetings can held
with given start and end timings.
Your Task :

You don't need to read inputs. Complete the function maxmeetings() that recieves start and end array along with their size and prints all the meeting numbers
(1-based indexing). 

Constraints:
1 ≤ N ≤ 105




struct meet
{
    int st;
    int en;
    int pos;
    
};

bool cmp(struct meet a,struct meet b)
{
    if(a.en==b.en)
     return a.pos<b.pos; //if the end idexes time is same sort on the basic of the indexies
    
    return a.en<=b.en;
    
}

void maxMeetings(int start[], int end[], int n) {
    // Your code here
   vector<struct meet> v(n);
   for(int i=0;i<n;i++)
   {
      v[i].st=start[i];
      v[i].en=end[i];
      v[i].pos=i+1;
   }
   
   sort(v.begin(),v.end(),cmp);
    
    //int c=-1;
    int s=0;
    vector<int> ans;
    int c=0;
    for(int i=0;i<n;i++)
    {
      if(s<v[i].st)
      {
          //c++;
          ans.push_back(v[i].pos);
          s=v[i].en;
      }
     
    }
   // return c;
 for(int i=0;i<ans.size();i++)
 {
     cout<<ans[i]<<" ";
 }

}
