class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int count=1;
            vector<vector<int>>stuff;
            for(int i=0;i<numRows;i++)
            {
                vector<int>temp;
                for(int j=0;j<=i;j++)
                {
                    if(i==0||j==0)
                    {
                        count=1;
                        temp.push_back(count);
                    }
                    else{
                        count=count*(i-j+1)/j;
                        temp.push_back(count);
                    }
                }
                stuff.push_back(temp);
            }
            return stuff;
    }
};