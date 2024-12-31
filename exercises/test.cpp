#include <iostream>

class A{
  public:
    virtual void f();
};
class B: public A{
  int x;
  public:
    void f();
    void g() {x++;};
};
int main() {
  A *p = new A;
  B *q;
  q = dynamic_cast<B*> (p);
  if (q == nullptr) {
    std::cout << "null" << std::endl;
  }
  delete p;
}