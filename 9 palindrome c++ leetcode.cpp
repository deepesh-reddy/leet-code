class Solution {
public:
    bool isPalindrome(int x) {
        int c=0,a=x;
        if(x<0) return false;

        while(x!=0)
        {
            c=c*10+x%10;
            x=x/10;
        }
        if(c==a) return true;
        else return false; 
    }
};
int main()
{
    Solution s;
    s.isPalindrome(121);
    return 0;
}
