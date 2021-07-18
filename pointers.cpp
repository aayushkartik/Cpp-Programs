#include<iostream>
#include<cstdlib>
using namespace std;
void per(int*a, int*b){
    int temp= *a;
    *a= *a+*b;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    per(&a,&b);
    cout<<a<<'\n'<<b;
    return 0;
}