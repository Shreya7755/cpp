#include<iostream>
using namespace std;
struct add
{
        int a;
        int b;
        int sum;
};
struct add input()
{
        add x;
        cin >> x.a;
        cin >> x.b;
        return x;
}
struct add addition(struct add x)
{
        x.sum=x.a+x.b;
        return x;
}
void output(struct add x)
{
        cout << x.sum;
        cout << "\n";
}
int main()
{
        add x;
        x=input();
        x=addition(x);
        output(x);
        return 0;
}
