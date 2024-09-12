#include<iostream>
using namespace std;
int main (){
    int m;
    cout<<"Enter no. of rows & columns :";
    cin>>m;
    int arr[m][m];
    cout<<"Enter elements of array : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp ;
        }
    }
    for(int i=0;i<m;i++){
        int a = m-1;
        int b = m;
        if (m%2 == 0 ) b-=1;
        for(int j=0;j<=b/2;j++){
            int temp = arr[i][a];
            arr[i][a] = arr[i][j];
            arr[i][j] = temp;
            a--;
        }
    }
    cout<<"Rotated array is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}