// to rotate array left by d places.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};
    int d=3;
    d=d%n;
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}

/*// optimal approach to left rotate array by d places.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int d=3;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}*/