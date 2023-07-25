class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int count,space,flag;
        count=space=flag=0;
        for(int i=n-1;i>=0;i--){
            if(s[i] == ' ' && flag==0){
                space++;
            }else if(s[i]!=' '){
                flag=1;
            }else if(s[i]==' ' && flag==1){
                break;
            }
            count++;
        }
        return abs(count-space);
    }
};