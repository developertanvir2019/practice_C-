#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
 int n;
 cin>>n;
 int a[n];
 int b[n];
 for (int i=0;i<n;i++){
    cin>>a[i];
 } 
 for (int i=0;i<n;i++){
   b[i]=a[i];
 } 

 sort(a,a+n);
 sort(b,b+n,greater<int>());

 for (int i=0;i<n;i++){
  cout<<a[i]<<" ";
 } 
 printf("\n");

for (int i=0;i<n;i++){
  cout<<b[i]<<" ";
 } 

 return 0;
}