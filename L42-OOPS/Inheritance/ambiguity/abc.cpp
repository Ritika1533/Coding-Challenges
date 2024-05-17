#include <iostream>
using namespace std;
class A
{
public:
    void abc()
    {
        cout << "class A" << endl;
    }
};
class B
{
public:
    void abc()
    {
        cout << "class B" << endl;
    }
};
class C : public A, public B
{
public:
    void pqr()
    {
        cout << "class c" << endl;
    }
};
int main()
{
    C cc;
    // cc.abc() -> error
    cc.A ::abc();
    cc.B ::abc();
}
/*class A
class B*/