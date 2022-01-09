#include <iostream>
using namespace std;
typedef  long int li;
int main() {
	li t;
	cin>>t;
	while(t--){
	    li n,sum=0;
	    cin>>n;
	    li pr[n];
	    for(li i=0;i<n;i++){
	       cin>>pr[i];
	       sum+=pr[i];
	    }
	    if(sum>=2000)
	    cout<<"Accepted"<<endl;
	    else
	    cout<<"Rejected"<<endl;
	}
	return 0;
}
