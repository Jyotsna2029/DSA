#include<iostream>
#include<string>
using namespace std;

void removeDuplicates(string str , string ans, int i, bool map[26]){
    if(i == str.size()){
        cout<<"ans: " <<ans<<endl;
        return;
    }

    char ch = str[i];
    int mapIdx = (int)(ch-'a');
    if(map[mapIdx] == true){ //duplicates are there
        // then remove duplicates
        removeDuplicates(str, ans,i+1, map);
    }
    else{ //not duplicates
        map[mapIdx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }

}


void removeDuplicates2(string str , string ans, bool map2[26]){

    int n = str.size();
    if(n == 0){
        cout<<"ans: " <<ans<<endl;
        return;
    }
    char ch = str[n-1];
    int mapIdx = (int)(str[n-1]-'a');
    str = str.substr(0, n-1);
    if(map2[mapIdx] == true){ //duplicates are there
        // then remove duplicates
        removeDuplicates2(str, ans, map2);
    }
    else{ //not duplicates
        map2[mapIdx] = true;
        removeDuplicates2(str, ans+ch, map2);
    }

}

int main(){
    string str = "appnacollege";
    string ans = "";
    bool map[26] = {false};
    bool map2[26] = {false};
    removeDuplicates(str,ans,0,map);
    removeDuplicates2(str,ans,map2);
    return 0;
}