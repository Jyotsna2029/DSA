#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int,string>m;
    m[101] = "rahul";
    m[102] = "neha";
    m[103] = "rahul";

    cout<<m[101]<<endl;   
    cout<<m[100]<<endl;  //no error there will be blank space

    m[102] = "rajat"; 

    for(auto it:m){
        cout<<it.first<<", "<<it.second<<endl;
    }
    return 0;
}