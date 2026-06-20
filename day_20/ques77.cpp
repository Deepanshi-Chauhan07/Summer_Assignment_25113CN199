// to multiply two matrices.
#include<iostream>
using namespace std;
int main(){
     const int r1=3 , c1=3 , r2=3 , c2=3;
    if(c1 !=r2){
        cout<<"multiplication not possible"<<endl;
    }
    int A[r1][c1]={{1,2,3},{4,5,6},{7,8,9}};
    int B[r2][c2]={{9,8,7},{6,5,4},{3,2,1}};
    int C[r1][c2]={0};
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"result matrix"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}