// to subtract two matrices.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"enter rows and columns for marix1:";
    cin >> r1 >> c1;
    int mat1[15][15]={0};
    cout<<"enter elements for mat1:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> mat1[i][j];
        }
    }
    cout<<"enter rows and columns for mat2:";
    cin >> r2 >> c2;
    int mat2[15][15]={0};
    cout<<"enter the elements for mat2:"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin >> mat2[i][j];
        }
    }
    int max_rows=max(r1,r2);
    int max_cols=max(c1,c2);
    int result[15][15]={0};
    cout<<"resultant matrix :"<<endl;
    for(int i=0;i< max_rows;i++){
        for(int j=0;j<max_cols;j++){
            result[i][j]=mat1[i][j] - mat2[i][j];
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}