#include <iostream>

/*
I-1
V-5
X-10
L-50
C-100
D-500
M-1000
*/

using namespace std;
    
    int fun(char c)
    {
        int x=0;
        switch(c)
        {
            case 'I' : x=1;
                break;
            case 'V' :x=5;
                break;
            case 'X' :x=10;
                break;
            case 'L' :x=50;
                break;
            case 'C' :x=100;
                break;
            case 'D' :x=500;
                break;
            case 'M' :x=1000;
                break;
            
        }
        return x;
    }
    
int main()
{
    string s;
    cout<<"enter only - I/V/X/L/C/D/M"<<endl;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X'))
        {
            sum+=fun(s[i+1] ) - fun(s[i]);
            i++;
        }else if (s[i]=='X' && (s[i+1]=='L' || s[i+1] == 'C')){
            sum+=fun(s[i+1] ) - fun(s[i]);
            i++;
        }else if(s[i]=='C' && (s[i+1]=='D' || s[i+1] == 'M')){
            sum+=fun(s[i+1] ) - fun(s[i]);
            i++;
        }else{
            sum+=fun(s[i]) ;
        }
    }
    cout<<sum;
    

    return 0;
}
