#include <iostream>
using namespace std;
class MyClass {
 public:
  MyClass(int a) : var(a)
  { }
  void pritInfo() {
   cout << var<<endl;
   cout << this->var<<endl;
   cout << (*this).var<<endl; 
  }
 private:
  int var;
};
int main()
{
MyClass obj(29);
obj.pritInfo();
}