class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
         map<int,int>map;
        map[0] = 0;
        int sum = 0;
        int ans = 0;
        for(int i=0;i<N;i++){
            sum += A[i];
            if(sum-K == 0){
                ans = max(ans,i+1);
            }
            else if(map[sum-K]){
                ans = max(ans,i+1-(map[sum-K]));
            }
            if(!map[sum])
             map[sum] = i+1;

        }
        return ans;
         
    } 

};