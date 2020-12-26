https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1#

 int inSequence(int a, int b, int c){
        // code here
     
     if(c==0)
     {
         if(b==a)
          return 1;
         else
         return 0;
     }
     else
     {
         if((b-a)/c>=0)
          {
              if((b-a)%c==0)
               return 1;
              else
               return 0;
          }
          else
          {
              return 0;
          }
     } 
    
