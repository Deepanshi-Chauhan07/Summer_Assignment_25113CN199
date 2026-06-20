// to check symmetric matrix.
#include<iostream>
using namespace std;
int main(){
    const int r=3 , c=3;
    int mat[r][c]={0};
    int symm_mat[r][c];
    cout<<"enter the matrix elements:";
    if(r!=c){
        cout<<"the matrix is not symmetric it must be a square matrix";
    }
    bool isSymmetric=true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if( mat[i][j]!= mat[j][i]){
            isSymmetric=false;}
        }
    }
    if(isSymmetric){
        cout<<"the given matrix is a symmetric matrix"<<endl;
    }
    else{
        cout<<"the given matrix is not a symmetric matrix"<<endl;
    }
    return 0;

}