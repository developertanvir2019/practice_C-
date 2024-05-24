#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
 int a,b;
 char s;
 cin>> a >> s >>b;
 bool result=false;
 if(s=='>'){
    result=a>b;
 }else if(s=='<'){
    result=a<b;
 }else if(s=='='){
    result =a=b;
 }
 if(result){
 cout<< "Right";  
 }else{
 cout<< "Wrong";  
 }
 return 0;
}