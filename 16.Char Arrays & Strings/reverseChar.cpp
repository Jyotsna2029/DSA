#include<iostream>
#include<cstring>
using namespace std;
void reverse(char arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    char arr[] ="abce";
    reverse(arr,strlen(arr));
    cout<<"reverse = "<<arr<<endl;
    return 0;
}