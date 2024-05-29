// Longest Substring Without Repeating Characters we are given with string "cadbzabcd" now we are using hasing and two pointers here left and right pointers
// are set at 0th index and were increased and the length should be max_len = r+l-1
#include<iostream>
#include<vector>
using namespace std;
int(Longest_Substring(string s)){
    vector < int > mpp(256, -1);
    int n = s.length();
    int l = 0, r =0, max_len =0;
    while(r<n){
        if(mpp[s[r]]!= -1){
            if (mpp[s[r]]>=l)
            {
                l = mpp[s[r]]+1;
            }
        }
        max_len = max(max_len, r-l+1);
        mpp[s[r]] =r;
        r++;
    }
    return max_len;

} 
int main(){
    string s = "cadbzabcd";
    cout<<Longest_Substring(s)<<endl;
    return 0;
}