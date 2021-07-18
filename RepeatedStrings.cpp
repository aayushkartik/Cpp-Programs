// PROGRAM TO REMOVE ALL THE REPEATED CHARACTERS FROM THE STRING AND ALSO TO COUNT HOW MANY DUPLICATE CHARACTERS REMOVED 
#include<iostream>
#include<string>
typedef long long int li;
using namespace std;
int main(){
    int t;
    cin >> t;   //No of test cases input
    while(t--){   // NO OF TEST CASES LOOP
            string str;
            cin >> str;
            li a= str.length();
            li b=0,count=0;   // count to store how many character removed
            li*p=&a;   // initializing pointer to the length of the string
            for(li i=0;i<*p-1;i++){
                b=i+1;
                while(b<=*p){
                    if(str[i]==str[b]){
                        str.erase(b,1);// deleting the repeated character
                        a=str.length();
                        count++;  // increment of the count
                    }
                    else{
                        b++;
                    }
                }
            }
            cout<<str<<endl;  // now this string is modified and all the repeated characters are removed
            cout<<count<<endl;
    }
        return 0;
    }