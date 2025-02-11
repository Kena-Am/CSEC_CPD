#include<iostream>
using namespace std;
int main(){
int n;
int sum=0;
cin>>n;
int total;
for (int i=0; i<n; i++){
int x,y,z;
cin>>x>>y>>z;
total=x+y+z;
if(total>=2){
 ++sum;
}
}
cout<<sum;
}
