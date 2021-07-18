#include <iostream>
using namespace std;
typedef long long int ll;
int main(){
    ll cas;
    cin>>cas;
    while(cas--){
        ll arl,b,sum=0;
        ll flag=0;
        cin>>arl>>b;
        ll A[arl];
        for(ll i=0;i<arl;i++){
            cin>>A[i];
        }
        for(ll i=0;i<arl;i++){
            sum+=A[i];
        }
        for(ll j=0;j<arl;j++){
            if( (A[j]+b)>(sum-A[j]) ){
                flag++;
                break;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// typedef long long int ll;

// void solve()
// {
//     ll n,k;
//     cin>>n>>k;
//     ll arr[n];
//     for(ll i=0;i<n;i++)
//         cin>>arr[i];
    
//     ll sum =0;
//     for(ll i=0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     ll count = 0;
//     for(ll i=0;i<n;i++)
//     {
//         if((sum-arr[i]) < (arr[i]+k))
//             count++;
        
//     }
    
//     cout<<count<<endl;
// }


// int main() {
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    solve();
// 	}
// 	return 0;
// }
