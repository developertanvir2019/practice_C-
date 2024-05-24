#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
 int n;
 cin>>n;
 int A[n];
 for(int i=0;i<n;i++){
    cin>>A[i];
 } 
 bool palindrome=true;
for(int i=0;i<n/2;++i){
    if(A[i]!=A[n-i-1]){
        palindrome=false;
    }
}

 if(palindrome){
    cout<<"YES";
 } else{
    cout<<"NO";
 }

 return 0;
}