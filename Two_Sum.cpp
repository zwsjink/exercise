class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int N = numbers.size();
        vector<int> res;
        if (N <=1)  return res;
        int i, j;
        map<int ,vector<int>> mapping;
        for (i=0;i<N;i++){
            mapping[numbers[i]].push_back(i+1);
        }
        sort(numbers.begin(),numbers.end());
        
        
        i = 0;
        j = N-1;
        int a, b;
        while(i<j){
            if (numbers[i] + numbers[j] == target){
                if (numbers[i]==numbers[j]){
                     a = mapping[numbers[i]][0];
                     b = mapping[numbers[i]][1];
                     res.push_back(min(a,b));
                     res.push_back(max(a,b));
                }
                else{
                    a =mapping[numbers[i]][0];
                    b = mapping[numbers[j]][0];
                    res.push_back(min(a,b));
                     res.push_back(max(a,b));
                }
                return res;
                
            }
            else if (numbers[i] + numbers[j] > target)
                j--;
            else 
                i++;
        }
        return res;
    }
};