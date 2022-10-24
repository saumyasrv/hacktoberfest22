#include <iostream>
using namespace std;
class parent
{
  public:
  virtual void example() = 0; 
};
class child1:public parent
{
  public:
  void example()
  {
      cout << "Coding Ninjas";
  }
};
class child2:public parent
{
  public:
  void example()
  {
      cout << " is awesome";
  }
};
int main()
{
  parent* arr[2];
  child1 e1;
  child2 e2;
  arr[0]=&e1;
  arr[1]=&e2;
  arr[0]->example();
  arr[1]->example();
}
