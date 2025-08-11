#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutations(string str, string ans){
    int n = str.size();
    if(n == 0) {
        cout<<ans<<endl;
        return;
    }

    for(int i = 0; i< n; i++){
        char ch = str[i];
        string nextstr = str.substr(0,i)+str.substr(i+1, n-1-i); //delete ith choice elt
        permutations(nextstr, ans+ch);   
    }

}

int main(){
    string str = "abc";
    string ans = "";
    permutations(str, ans);
    return 0;
}