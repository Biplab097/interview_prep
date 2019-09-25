//https://github.com/Biplab097/interview_prep
//code
#include<iostream>
#include<vector>
using namespace std;
//O(N),O(1)
int maxSubArray(vector<int>& nums) {
    int i, n=nums.size();
    long long prevMax=INT16_MIN,curMax;
    long long ans=-INT16_MAX;
    for(i= 0;i <n;i++){
        curMax=nums[i];
        curMax =max(curMax,nums[i]+prevMax);   
        
        ans = max(ans,curMax);
        prevMax=curMax;
    }
    return ans;
}

int main()
{
     

     return 0;
}