class Solution {
public:
    int tribonacci(int n) {
        int t1 = 0, t2 = 1, t3 = 1;
        if (n == 0)
            return t1;
        else if (n == 1)
            return t2;
        else if (n == 2)
            return t3;

        int res = 0;
        for (int i = 3; i <= n; i++)
        {
            res = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = res;
        }
        
        return res;
    }
};