#include<iostream>
using namespace std;
int main(){
    int students[3][2] = {{100, 100},
                            {85,74}, 
                            {63,72}};
    for(int i = 0; i<3; i++){
        for(int j = 0; j <2;j++){
            cout<<students[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}