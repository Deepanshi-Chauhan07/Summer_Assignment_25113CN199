// to find column-wise sum.
#include<iostream>
using namespace std;
int main(){
    const int rows=5 , cols=3;
    int mat[rows][cols]={0};
    
    cout<<"enter the matrix elements:"<<endl;
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<cols;i++){
        int colsum=0;
        for(int j=0;j<rows;j++){
            colsum+=mat[i][j];
        }
        cout<<"sum of elements of columns "<<i+1<<"is"<<colsum<<endl; 
    }
    return 0;
}