#include<iostream>
using namespace std;
class test{
    int count;
    public:
    test() {
        count =0;
    }
    void getNumber() {
        cout << "Enter a number :";
        cin >> count;
    }
    int getCount() {
        return count;
    }
    void operator ++(int) {
        count++;
    }
    void operator ++() {
        count++;
    }
};
int main()
{
    test t1,t2;
    t1.getNumber();
    t2.getNumber();
    t1++;
    // cout << t1.getCount();
    // t2++;
    // cout << t2.getCount();
    // ++t2;
    cout << t1.getCount();
    ++t2;
    cout << t2.getCount();
    return 0;
}