#include<iostream>
using namespace std;
// here we're using constant window suppose we have a array [-1 3 4 5 2 6 3] and k given 4 we have to find out max sum
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l =0, r = k-1;
    int sum =0, maxsum;
    while(r<n-1)
    {
        for(int i =l;i<r;i++)
        {
            sum +=arr[i];
        }
        sum = sum - arr[1];
        l++;
        r++;
        sum = sum+arr[r];
        maxsum = max(maxsum, sum);
        

        
    }
    cout<<maxsum<<endl;
    return 0;



    
}