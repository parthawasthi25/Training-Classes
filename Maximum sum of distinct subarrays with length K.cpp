class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int w_start=0,w_end=0;
        long sum=0;
        long int ans=0;
        while(w_end<N){
            sum+=Arr[w_end];
            if(w_end-w_start+1==K){
               if(ans<sum)
               ans=sum;
               sum-=Arr[w_start];
               w_start+=1;
            }
            w_end+=1;
        }
        return ans;
    }
};