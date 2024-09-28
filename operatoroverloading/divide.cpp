#include<iostream>
using namespace std;
class add {
    int a;
    public:
    void getData() {
        cout << "Enter a number :";
        cin >> a;
    }
    add operator/(add &other) {
        add a1;
        a1.a = this->a/other.a;
        return a1;
    }
    void disp() {
        cout << "Division is " << a;
    }
};
int main()
{
    add a1,a2,a3;
    a1.getData();
    a2.getData();
    a3 = a1 / a2;
    a3.disp();
    return 0;
}