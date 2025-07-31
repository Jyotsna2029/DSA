#include<iostream>
using namespace std;

void updateithBit(int num, int i, int value){
    // clear ith bit
    int bitMask = ~(1 << i);        //  clear the ith bit
    num = (num & bitMask);        
    num = num | (value << i);       // Set the ith bit to 'value' (0 or 1)
    cout << num;                    // Output the modified number
}

int main(){
    updateithBit(7, 2, 0);          // num = 7 (binary: 0111), clear bit at position 2
    return 0;
}
