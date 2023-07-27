#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string s = "0P";
    stack <char> first;
    stack <char> second;
    int count1=0;
    
    for (char& c : s) {
        c = tolower(c);
    }
    for(int i=0;i<s.size();i++){
        int n=s[i];
        if((n>=65 && n<=90) || (n>=97 && n<=122) || (n >= 48 && n <= 57) ){
            first.push(s[i]);
        }
    }
    

    cout<<endl;
    for(int i=s.size()-1;i>=0;i--){
        int n=s[i];
        if((n>=65 && n<=90) || (n>=97 && n<=122) || (n >= 48 && n <= 57) ){
            second.push(s[i]);
            count1++;
        }
    }
    int count2=0;
    while(!first.empty() || !second.empty()){
        char a,b;
        a=first.top();
        b=second.top();
        first.pop();
        second.pop();
        if(a == b){
            count2++;
        }
    }
    if(count1 == count2){
        return true;
    }else{
        return false;
    }
    
    
    
    

    return 0;
}