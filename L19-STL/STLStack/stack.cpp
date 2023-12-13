#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<string> s;
  s.push("ritika");
  s.push("kumrai");
  s.push("keshri");
  cout << s.top() << endl;
  cout << s.size() << endl;
  s.pop();
  cout << s.top() << endl;
  cout << s.empty() << endl;
  s.pop();
  cout << s.top() << endl;
}