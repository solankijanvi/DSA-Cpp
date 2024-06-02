#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[11] = {3,3,3,1,2,1,1,2,3,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_len = 0;
    for(int i =0; i<n; i++){
        set<int>st;
        for(int j = i; j<n; j++){
            st.insert(arr[j]);
            if(st.size()<=2)
            {
                max_len = max(max_len, j-i+1);

            }
            else{
                break;
            }
        }
    }
    cout<<max_len<<endl;
    return 0;


}


