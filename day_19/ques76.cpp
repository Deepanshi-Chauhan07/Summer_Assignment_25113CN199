// to find diagonal sum.
#include<iostream>
using namespace std;
int main(){
    int n;
    int mat[25][25];
    cout<<"enter the rows and columns:"<<endl;
    cin >> n;
    int sum=0 , j;
    cout<<"enter the elements of matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
            sum+=mat[i][i];
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        }
    }
    cout<<"diagonal sum :"<<sum<<endl;
    return 0;
} 