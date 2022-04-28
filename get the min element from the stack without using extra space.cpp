class Solution{
    int minEle;
    stack<int> s;
    int m=-1;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(s.empty())
           {
               return -1;
           }
          return m;
           //Write your code here
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty())
           {
               return -1;
           }
           int a=s.top();
           s.pop();
           if(a<m)
           {
               int b=m;
               m=2*m-a//to get the previous minimum element back
               return b;
           }
           return a;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty())
           {
               m=x;
           }
           if(x<m)
           {
               s.push(2*x-m);//here the x value is less than the minimum element so we are modifying and pushing that to the stack
               m=x;
           }
           else
           {
           s.push(x);
           }
           
           
           
           //Write your code here
       }
};
