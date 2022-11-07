class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        map<string,int>fre;
       for(int i=0;i<arr.size();i++)
       {
           if(fre.find(arr[i]) == fre.end())
           {
               fre[arr[i]] = 1;
           }
           
           else
           {
               fre[arr[i]]++;
           }
       }
        
        int cnt=0;
       for(int i=0;i<arr.size();i++)
       {
           if(fre[arr[i]]==1)
               cnt++;
           
           if(cnt==k)
               return arr[i];
       }
        return "";
    }
};