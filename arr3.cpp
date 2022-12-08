#include<iostream>
using namespace std;

int main()
{
    int n, key,flag =0;
    cout<<"Enter the size of arr: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>key;

    for(int i = 0; i<n; i++)
    {
        if (arr[i] == key){
            flag =1;
            break;
        }
        flag =0;
    }
    if( flag == 1)
    {
        cout<<"found";
    }
    else{
        cout<<"Not Found";
    }
    return(0);
}
