class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size(), -1);

        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if ((nums1[i] == nums2[j]) && (j + 1 < nums2.size()))
                {
                    for (int k = j + 1; k < nums2.size(); k++)
                    {
                        if (nums2[k] > nums2[j])
                        {
                            result[i] = nums2[k];
                            break;
                        }
                    }
                }
            }
        }

        return result;
    }
};