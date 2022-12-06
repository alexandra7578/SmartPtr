#include <iostream>
#include <memory>
using namespace std;
class MyClass {
public:
	MyClass()
	{
		cout << "constructor invoked" << endl;
	}
	~MyClass()
	{
		cout << "Destructor invoked" << endl;
	}
};
int main()
{
	{
	shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
	cout << "Share coutn:" << shPtr1.use_count() << endl;
	{
		shared_ptr<MyClass>shPtr2 = shPtr1;
		cout << "Share coutn:" << shPtr2.use_count() << endl;
	}
	
	cout << "Share coutn:" << shPtr1.use_count() << endl;
	}

	weak_ptr<int>  weptr1;
	{
		shared_ptr<int> shptr1 = make_shared<int>(25);
		weptr1 = shptr1;
	}
}