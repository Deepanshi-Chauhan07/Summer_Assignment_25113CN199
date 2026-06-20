// to find row-wise sum.
#include<iostream>
using namespace std;
int main(){
    const int rows=5 , cols=3;
    int mat[rows][cols]={0};
    
    cout<<"enter the matrix elements:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        int rowsum=0;
        for(int j=0;j<cols;j++){
            rowsum+=mat[i][j];
        }
        cout<<"sum of elements of row "<<i+1<<"is"<<rowsum<<endl; 
    }
    return 0;
}