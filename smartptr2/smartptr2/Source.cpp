
#include <iostream>
using namespace std;
class SmartPtr
{
	int* ptr;
public:
	explicit SmartPtr(int* p = nullptr)
	{
		ptr = p;
	}
		~SmartPtr() {
		delete(ptr);
	}
	int& operator*() {
		return *ptr;
	}
};
int main()
{
	SmartPtr ptr(new int());
	*ptr = 20;
	std::cout << *ptr;
	return 0;
}
