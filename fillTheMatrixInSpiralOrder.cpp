#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter no. of rows & columns : ";
    cin>>n;
    int minr = 0, minc = 0;
    int maxr = n-1, maxc = n-1;
    int arr[n][n];
    cout<<"Enter elements of array : ";
    while(minr<=maxr && minc<=maxc){
        // right 
        if(minr>maxr || minc>maxc) break;
        for(int j=minc;j<=maxc;j++){
            cin>>arr[minr][j];
        }
        minr++;
        // down
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            cin>>arr[i][maxc];
        }
        maxc--;
        // left
        if(minr>maxr || minc>maxc) break;
        for(int j=maxc;j>=minc;j--){
            cin>>arr[maxr][j];
        }
        maxr--;
        // upward
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            cin>>arr[i][minc];
        }
        minc++;
    }
    cout<<" The represetation of array in spiral form : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}