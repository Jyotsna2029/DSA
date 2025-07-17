#include<iostream>
#define PI 3.141593
using namespace std;
int main(){
    // // Question1:Inaprogram,inputthesideofasquare.Youhavetooutputtheareaofthesquare.Input:n(side)Output:n*n(area
    // int n;
    // cout<<"Enter the side of the Square: ";
    // cin>>n;
    // cout<<"The are of the Square is : "<<n*n<<endl;
    // return 0;

    // /*Question2:Entercostof3itemsfromtheuser(usingfloatdatatype)-apencil,apenandaneraser.Youhavetooutputthetotalcostoftheitemsbacktotheuserastheirbill
    // .(Addon:Youcanalsotryadding18%GSTtaxtotheitemsinthebillasanadvancedproblem)*/
    // float pencil, pen, eraser;
    // cout<<"Enter the cost of pencil: ";
    // cin>>pencil;
    // cout<<"Enter the cost of pen: ";
    // cin>>pen;
    // cout<<"Enter the cost of eraser: ";
    // cin>>eraser;
    // float totalCost = pencil + pen + eraser;
    // cout<<"Total cost of the items is: "<<totalCost<<endl;

    // float gst = 0.18 *pencil + 0.18 * pen + 0.18 * eraser;
    // cout<<"Total cost after adding 18% GST is: "<<totalCost + gst<<endl;
    // return 0;

    // Question3:BuildaSimpleInterestCalculator.Input:principal(P),rate(R),time(T)Output:(P*R*T)/100
    float principal, rate, time;
    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate of interest: ";
    cin>>rate;
    cout<<"Enter the time in years: ";          
    cin>>time;
    float simpleInterest = (principal * rate * time) / 100;
    cout<<"The Simple Interest is: "<<simpleInterest<<endl;
    return 0;

    // Writeaprogramtocalculatetheareaofacircle.Input:r(radius)Output:PI*r*r(area)
    int radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    cout<<"the are of the circle is: "<<PI * radius* radius<<endl;
    return 0;
}