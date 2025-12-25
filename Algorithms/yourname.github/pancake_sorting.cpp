
class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> answer;
        vector<int> help;
        int n=arr.size();
        for(int i=0;i<n;i++){
            help.push_back(arr[i]);
        }
        sort(help.begin(),help.end(),greater<int>());
        for(int i=n-1;i>=0;i--){
            if(help[i]==arr[i]){
                continue;
            }
            int ans;
            for(int j=0;j<i;j++){
                if(help[i]==arr[j]){
                    ans=j;
                    break;
                }
            }
            answer.push_back(ans+1);
            int k=0,j=ans;
            while(k<=j){
                swap(arr[k++],arr[j--]);
            }
            k=0,j=i;
            answer.push_back(i+1);
            while(k<=j){
                swap(arr[k++],arr[j--]);
            }
            
            
        }
        answer.push_back(n);
        return answer;
    }
};
