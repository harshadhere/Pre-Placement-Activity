#include<iostream>
using namespace std;

function srh(int arr[],int n,int key){
    for(int i = 0; i<n; i++){
        if (arr[i] == key){
            return 1;
        }
        return 0;
}

int main(){
int n, key;

cout<<"Enter the size of arr: ";
cin >> n;
int arr[] = n;
for(int i = 0; i<n; i++){
    cin>>arr[i];
}

cout<<"Enter key: ";
cin>>key;


return 0;
}
