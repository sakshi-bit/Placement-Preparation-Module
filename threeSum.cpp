vector<vector<int>> solve(int n, vector<int> res){
//CODE HERE 
vector<vector<int>>ans;
sort(res.begin(),res.end());
for(int i=0;i<n-2;i++){
    if(i==0 || i>0 && res[i]!=res[i-1]){
        int low = i+1;
        int high = n-1;
        int sum = 0-res[i];
        while(low<high){
            if(res[low]+res[high]==sum){
                vector<int>temp;
                temp.push_back(res[i]);
                temp.push_back(res[low]);
                temp.push_back(res[high]);
                ans.push_back(temp);

                while(low<high && res[low]==res[low+1]) low++;
                while(low<high && res[high]==res[high-1]) high--;

                low++;
                high--;
            }
            else if(res[low]+res[high]<sum){
                low++;
            }
            else{
                high--;
            }
        }
    }
}

return ans;

 
}
