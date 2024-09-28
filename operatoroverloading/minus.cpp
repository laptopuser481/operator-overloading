
#include<iostream>
using namespace std;
class subtract{
    int a;
    public:
    void getData() {
        cout << "Enter a number :";
        cin >> a;
    }
    subtract operator-(subtract other) {
        subtract a1;
        a1.a = this->a-other.a;
        return a1;
    }
    void disp() {
        cout << "Difference  is " << a;
    }
};
int main()
{
    subtract a1,a2,a3;
    a1.getData();
    a2.getData();
    a3 = a1 - a2;
    a3.disp();
    return 0;
}