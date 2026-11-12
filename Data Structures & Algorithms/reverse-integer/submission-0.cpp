class Solution {
public:
    int reverse(int x) {
        int temp = x;
        x = abs(x);
        string strx = to_string(x);
        std::reverse(strx.begin(), strx.end());
        long long r = stoll(strx);

        if(temp < 0)
            r *= -1;
        
        if(r < -(1LL << 31) || r > (1LL << 31) -1)
            return 0;
        
        return static_cast<int>(r);
    }
};
