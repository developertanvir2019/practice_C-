#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int* sort_it(int n){
int *a=new int[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n,greater<int>());
return a;
}

int main(){
    int n;
    cin>>n;
  int *answer=sort_it(n);
  for(int i=0;i<n;i++){
    cout<<answer[i]<<" ";
  }
  cout<<endl;
  delete[]answer;
 return 0;
}