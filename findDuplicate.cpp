#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            
            int index = abs(nums[i]);
            
            if(nums[index]<0){
                
                return index;
                
            }
            
            nums[index] = -nums[index];
        }
        
        return -1;
        
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        vector<int> arr;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.findDuplicate(arr)<<endl;
    }
    return 0;
}