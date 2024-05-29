// here it is question where you given an array {6,2,3,4,7,2,1,7,1} and you have to pick up k cards each element of array represent an card value.
//you have to put cards either from beginning or end not from middle you cannot skip cards find maxsum of cards of k size
#include<iostream>
using namespace std;
int main()
{ 
    int n = 9;
    int k =4;
    int arr[n] = {6,2,3,4,7,2,1,7,1};
    int l_sum =0;
    for(int i =0; i<k; i++)
    {
        l_sum += arr[i];
    }
    int max_sum =l_sum;
    int r_index = n-1;
    int r_sum =0;
    for(int i = k-1; i>=0;i--)
    {
        l_sum = l_sum - arr[i];
        r_sum = r_sum +arr[r_index];
        max_sum = max(max_sum, l_sum+r_sum);
        r_index= r_index-1;

    }
   
    cout<<max_sum<<endl;
    return 0;

}