// to find maximum frequency element.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=10;
    int arr[n]={0,0,1,1,2,2,2,2,3,3};
    int maxfrequency=0;
    int mostfrequentelement=arr[0];
    vector<int>temp;
    for(int i=0;i<n;i++){
        int currentcount=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                currentcount++;
            }
        }
    if(currentcount>maxfrequency){
        maxfrequency=currentcount;
        mostfrequentelement=arr[i];
    }
}
    cout<<"element with  max. frequency "<<mostfrequentelement<<endl;
    cout<<"frequency: "<<maxfrequency<<endl;
    return 0;
}