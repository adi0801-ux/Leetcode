class Solution {
public:
    double average(vector<int>& salary) {
        double avg=0;
        double sum=0;
        int n=salary.size();
        sort(salary.begin(), salary.end());
        for(int i=1;i<=n-2;i++){
            sum+=salary[i];
        }
        
        avg=(sum)/(n-2);
        return avg;
    }
};