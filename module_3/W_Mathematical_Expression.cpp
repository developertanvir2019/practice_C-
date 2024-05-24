#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
 int a,b,c;
 char s,e;
 cin>> a >> s >>b >>e>>c;
long long int result;
 if(s=='+'){
    result=a+b;
 }else if(s=='-'){
    result=a-b;
 }else if('*'){
    result =a*b;
 }
 if(result!=c){
 cout<< result;  
 }else{
 cout<< "Yes";  
 }
 return 0;
}