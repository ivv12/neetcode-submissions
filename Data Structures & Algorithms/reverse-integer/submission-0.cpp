class Solution {
public:
    int reverse(int x) {
        int res=0;

        int flag=0;
        if (x<0)
        {flag=1;
        x=-x;}

        while (x>0)
        {
            if (res>INT_MAX/10)
            {
                return 0;
            }
            res=res*10+x%10;
            x/=10;
            
        }

        if (flag==0)
        {
        return res;
        }

        else
        {
            return -res;
        }
        
    }
};
