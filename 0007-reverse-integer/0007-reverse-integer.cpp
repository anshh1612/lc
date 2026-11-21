class Solution {
public:
    int reverse(int x) {
        long long nn = 0;

        while(x != 0) {
            int a = x % 10;
            nn = nn * 10 + a;
            x = x / 10;
        }

        if(nn > INT_MAX || nn < INT_MIN)
            return 0;

        return nn;
    }
};