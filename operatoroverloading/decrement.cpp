#include<iostream>
using namespace std;

class test{
    int a;
    public:
    test() {
        a=0;
    }
    void getNum() {
        cout << "Enter a number :";
        cin >> a;
    }
    int getCount(){
        return a;
    }
    test operator --(int){
        a--;
    }
    test operator --() {
        --a;
    }
};
int main()
{
    test t1,t2;

    t1.getNum();

    t2.getNum();

    --t1;

    cout << t1.getCount() << endl;

    t2--;

    cout << t2.getCount();
    
    return 0;
}