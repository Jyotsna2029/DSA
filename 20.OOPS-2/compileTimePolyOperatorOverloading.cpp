#include<iostream>
#include<string>
using namespace std;
class ComplexNum{
    int real;
    int img;

    public:
    ComplexNum(int r, int i){
        real = r;
        img = i;
    }
    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }

    //operator overloading
    void operator +(ComplexNum &c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        ComplexNum c3(resReal, resImg);
        cout<<"res = ";
        c3.showNum();
    }


};
int main(){
    ComplexNum c1(3,2);
    ComplexNum c2(7,5);
    c1.showNum();
    c2.showNum();
    c1+c2;
    return 0;
}  