class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        stack<int> s;
        map<int, int>mp;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=n2-1;i>=0;i--){
            if(s.size()==0)mp[nums2[i]]=-1;
            else if(s.size()>0 && s.top()>nums2[i])mp[nums2[i]]=s.top();
            else if(s.size()>0 && s.top()<=nums2[i]){
                while(s.size()>0 && s.top()<=nums2[i]){
                    s.pop();
                }
                if(s.size()==0)mp[nums2[i]]=-1;
                else if(s.top()>nums2[i])mp[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(auto it:nums1){
            v.push_back(mp[it]);
        }
        return v;
    }
};