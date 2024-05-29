//here we have a better approach so we have an array {2, 5, 1,7,10} and we have to check length of substring having sum >= 14 
//so we use expand =rand strink=l
#include<iostream>
using namespace std;
int main()
{
    int n = 5, k =14;
    int arr[n] = {2, 5, 1, 7, 10};
    int l =0, r=0, sum =0, maxlen =0;
    while(r<n){
        sum = sum+arr[r];
        if(sum>k){
            sum = sum - arr[l];
            l = l+1;
        }
        if(sum<=k){
            maxlen = max(maxlen, r-l+1);
            r = r+1;
        }
    }
    cout<<maxlen<<endl;
    return 0;
    //it has a time complexity of O(2n) and space complexity of O(1)
} 