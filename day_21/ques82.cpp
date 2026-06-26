// to reverse a string.
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    int left=0;
    int right=str.length()-1;
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<"string after reversing is:  "<<str<<endl;
    return 0;
}*/

// to reverse a string-- more optimize approach
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<"reverse string"<<endl;
    cout<<str;
    return 0;
}