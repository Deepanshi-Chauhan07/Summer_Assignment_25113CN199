// to find transpose of a matrix.
#include<iostream>
using namespace std;
int main(){
    int r , c;
    int mat[21][21]={0};
    cout<<"enter the rows and columns:"<<endl;
    cin >> r >> c;
    int trans_mat[21][21];
    cout<<"enter the elements of matrix:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            trans_mat[i][j]=mat[j][i];
            cout<< trans_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} 