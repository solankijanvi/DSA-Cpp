//suppose we have an array [2 5 1 7 7 10] and condition sum is k = 14 so we have to generate all subaarays
#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    int k = 14;
    int arr[n] = {2,5,1,7,7, 10};
    int maxlen =0;
    for(int i =0; i<n; i++)
    {
        int sum =0;
        for(int j =i; j<n; j++)
        {
            sum = sum+arr[j];
            if(sum<=k)
            {
                maxlen = max(maxlen, j-i+1);

            }
            else if(sum>k)
            {
                break;
            }
        }
    }
    cout<<maxlen<<endl;
    return 0;


}