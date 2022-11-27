#include<iostream>
using namespace std;

int main()
{
    int n, key;
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
            cout<<"found";
            break;
        }
        cout<<"Not Found";
    }
    return(0);
}
