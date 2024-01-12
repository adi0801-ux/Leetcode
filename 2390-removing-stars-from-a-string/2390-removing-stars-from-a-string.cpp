class Solution {
public:
    string removeStars(string s) {
        string res="";
        stack<char>st;
        for(auto it:s){
            if(it!='*'){
                st.push(it);
            }else{
                st.pop();
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};