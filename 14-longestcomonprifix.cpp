class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){return "";}
        else if(strs.size()==1){return strs[0];}
        else{
            sort(strs.begin(),strs.end());
            string first=strs[0];
            string last= strs[strs.size()-1];
            string s="";
            for(int i=0;i<first.length();i++){
                if(first[i]==last[i]){
                    s+=first[i];
                }else{
                    return s;
                }
            }
            return s;
        }
    }
};