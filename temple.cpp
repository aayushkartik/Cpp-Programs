//TO CHECK WETHER ANY NUMBER IS REPEATED IN AN ARRAY OR NOT
#include <iostream>
using namespace std;
typedef long int li;
int main(){
    li t;
    cin >> t; //Testcases input
    while(t--){
        li n; // this is the size of array to be taken input
        int flag=0; // to check if number is repeated or not
        cin >> n; // input of array size
        li arr[n];
        for(li i=0;i<n;i++)
        cin >> arr[i]; // taking Input of an array
        for(li i=0;i<n-1;i++){
            for(li j=i+1;j<n;j++){
                 if(arr[i]==arr[j]){
                     flag++;
                     break;
                     }
            if(flag==1)
                break;
            }
        }
        if(flag==1)
        cout <<"ne krasivo"<<endl; // If any number in an array is repeated
        else
        cout <<"prekrasnyy"<<endl; // if any number is not repeated in array
    }
    return 0;
}