class Solution {
public:
    double myPow(double x, int n) {
      double res=1;
      int pow=0;
      if (n>0)
      {
      while (pow<n)
      {
        res*=x;
        pow++;
      }  
      }

      else if (n<0)
      {

        while (pow>n)
        {
            res*=x;
            pow--;
        }
        res=1/res;
      }
      return res;
    }
};
