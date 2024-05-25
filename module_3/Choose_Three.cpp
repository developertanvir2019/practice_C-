#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
 int t;
 cin>>t;
 for(int i=0;i<t;i++){
int n ,s;
cin>>n>>s;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}

bool isSum =false;
for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
long long int sum=A[i]+A[j]+A[k];
if(sum==s){
    isSum=true;
}
        }
    }
}

if(isSum){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



 } 
 return 0;
}