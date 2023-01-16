#include <iostream>

using namespace std;
    
    class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(char x:address)
        {
            if(x=='.')
            {
                ans+="[.]";
            }
            else
            {
                ans+=x;
            }
        }return ans;
    }
};
    
int main()
{
    cout<<"Hello World";

    return 0;
}