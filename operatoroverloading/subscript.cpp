#include<iostream>
using namespace std;
class Array{
    int data[5];
    public:
        void input() {
            cout << "Enter 5 integers :";
            for (int i = 0; i < 5; i++)
            {
                 cin >> data[i];
            }
        }
          int operator[](int index) {
                return data[index];
            }
};
int main()
{
    Array a;
    a.input();

    cout << "Showing elements in an array :" << endl;
    for (int i = 0; i < 5; i++)
    
         cout << endl << a[i];

    return 0;
}