#include<iostream>
using namespace std;
class sum
{
        public:
        int a ;
        int b;
        int add;
        void addition()
        {
                add=a+b;
                cout << add << "\n";
        }
};
int main()
{
        sum obj;
        cin >> obj.a;
        cin >> obj.b;
        obj.addition();
        return 0;
}
