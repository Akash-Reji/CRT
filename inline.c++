#include<iostream>
using namespace std;
class square{
    public:
    inline int sqr(int y){ return y*y; }
};
int main(){
    square s1;
    int s;
    cout<< "enter";
    cin>>s;
    cout<<endl<<"square = "<<s1.sqr(s);

}