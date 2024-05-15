#include<iostream>
using namespace std;
class circle
{
private:
    float r,aoc,coc;
public:
    void getr(float rad){
        r=rad;
    }float cal_aoc(){
        aoc=3.14*r*r;
        return aoc;
    }float coc_coc(){
        coc=2*3.14*r;
        return coc;
    }
};
int main(){
    circle c1;
    float radius;
    cout<<" enter";
    cin>>radius;
    c1.getr(radius);
    cout<<c1.cal_aoc()<<endl<<c1.coc_coc();
}