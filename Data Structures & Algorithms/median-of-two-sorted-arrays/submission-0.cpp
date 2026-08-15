class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& arrs = nums1;
        arrs.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(arrs.begin(), arrs.end());
        if (arrs.size() % 2 == 1){
            int total = (arrs.size() / 2);
            return arrs[total];
        }

        else {
            double one = arrs[(arrs.size() / 2)];
            double two = arrs[((arrs.size() / 2)) - 1];
            return (one + two) / 2;
        }

        
        

    }
};
