class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        unordered_map <int,int> res;
        for (int i=0;i<numbers.size();i++)
        {
            int temp=target-numbers[i];
            if(res.count(temp))
            {
                return {res[temp],i+1};
            }
        res[numbers[i]]=i+1;
        }

      return {};  
    }
};
