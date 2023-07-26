class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long int count=1;
        vector <int>ans;
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(i ==0 || j==0){
                    count=1;
                    if(i==rowIndex){
                        ans.push_back(count);
                    }
                }else{
                    count=count*(i-j+1)/j;
                    if(i==rowIndex){
                        ans.push_back(count);
                    }
                }


            }
        }
        return ans;
    }
};