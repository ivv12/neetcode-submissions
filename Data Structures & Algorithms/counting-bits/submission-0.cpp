class Solution {
public:
    vector<int> countBits(int n) {
     int cnt=0;
     vector<int> res;
     int cop=n;
     for (int i=0;i<cop+1;i++)
     {
        cnt=0;
        int cop2=i;
        while (i>0)
        {
            i=i&(i-1);
            cnt++;
        }
        i=cop2;
        res.push_back(cnt);
     }
        

     return res;

    }
};
