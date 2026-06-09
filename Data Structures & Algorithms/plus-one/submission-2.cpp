class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        for (int ind=digits.size()-1;ind>=0;ind--)
        {
            if (digits[ind]<9)
        {
            digits[ind]++;
            return digits;
        }

        digits[ind]=0;

        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
