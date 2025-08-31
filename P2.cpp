//Name: Varnika Maurya
//PRN: 24070123160
//Exp No.: 13
//Program No.: 2
#include<iostream>
using namespace std;
class fetch{
    int num;
    public:
    fetch(){
        num=3;
    }
    fetch(int x){
        num=x;
    }
    fetch(fetch &b){
        num=b.num;
    }
    void disp(){
        cout<<num<<endl;
    }
};
int main(){
    fetch f1, f2(6), f3(f1);
    f1.disp();
    f2.disp();
    f3.disp();
}

/*
Output:
3
6
3
*/
