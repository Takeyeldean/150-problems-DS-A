class Solution {
public:
     void reverse (vector<int>&v,int start,int end)
     {
         while(start<end)
         {
             swap(v[start],v[end]);// O(N)
             start++,end--;
         }
     }
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
      reverse(nums,0,nums.size()-1);
      reverse(nums,0,k-1);
      reverse(nums,k,nums.size()-1); //O(N)

    }
};
