#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
 int x,y;
 cin>>x>>y;
 long long int sum=x+y; 
 long long int mul=x*y; 
 long long int sub=x-y; 

 cout<<x<<" + "<<y<<" = "<<sum<<endl<<x<<" * "<<y<<" = "<<mul<<endl<<x<<" - "<<y<<" = "<<sub<<endl;
 return 0;
}