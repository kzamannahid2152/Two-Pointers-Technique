#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int target;
    cin>>target;
    int flag=0;

    int i=0, j = n - 1;
    while(i < j){
        if(arr[i] + arr[j]==target){
            flag = 1;
            break;
        }
        else if(arr[i] + arr[j] < target){
            i++;
        }
        else{
            j--;
        }
    }

    if(flag == 0){
        cout<<"false\n";
    }else{
        cout<<"True\n";
    }

    return 0;
}