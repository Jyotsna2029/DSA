#include<iostream>
#include<vector>
using namespace std;
void fun(){
    int *ptr = new int[100]; //100==size
    int x = 1;
    for(int i = 0; i<100; i++){
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }
    cout<<endl;
    delete[] ptr;
}

int main(){
    fun();
}