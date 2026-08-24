class Solution {
private:
    double biex(double x, int n)
    {
        if (n==0)
        {
            return 1.0; 
        }

        else if (n==1)
        {
            return x;
        }

        else
        {
            if (n%2==0)
            {
                return pow(x*x,n/2);
            }

            else
            {
                return x*pow(x,n-1);
            }
        }
    }
public:
    double myPow(double x, int n) {
        int copy=n;
        if (copy<0)
        {
            return (1.0 / biex(x, -1 * copy));
        }

        return biex(x,copy);
    }
};