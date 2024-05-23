#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
 int a,b,c;
 cin>>a>>b>>c;
 int min_value=min(a ,min(b,c)); 
 int max_value=max(a,max(b,c)); 
cout<<min_value<<" "<<max_value;
 return 0;
}