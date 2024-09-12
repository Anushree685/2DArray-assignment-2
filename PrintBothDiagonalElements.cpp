#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter No. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Both Diagonal elements are : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i == j || i+j == n-1) cout<<arr[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
}