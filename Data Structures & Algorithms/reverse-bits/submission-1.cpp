class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string b= "";
        for(int i = 0; i< 32;i++)
        {
            if(n & (1 << i))
             b += '1';
             else
             b += '0';
        }

        uint32_t r = 0;
        for (int i = 0; i < 32; i++)
        {
            if (b[31 - i] == '1')
             r |= (1 << i);
        }
        return r;
    }
};
