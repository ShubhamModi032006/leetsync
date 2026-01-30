class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            if(count(nums2.begin(), nums2.end() ,nums1[i])){
                if(!count(res.begin(), res.end(),nums1[i])){
                    res.push_back(nums1[i]);
                }
            }
            if(count(nums3.begin(), nums3.end() ,nums1[i])){
                if(!count(res.begin(), res.end(),nums1[i])){
                    res.push_back(nums1[i]);
                }
            }
        }

        for(int i=0;i<nums2.size();i++){
            if(count(nums1.begin(), nums1.end() ,nums2[i])){
                if(!count(res.begin(), res.end(),nums2[i])){
                    res.push_back(nums2[i]);
                }
            }
            if(count(nums3.begin(), nums3.end() ,nums2[i])){
                if(!count(res.begin(), res.end(),nums2[i])){
                    res.push_back(nums2[i]);
                }
            }
        }
        
        return res;
    }
};