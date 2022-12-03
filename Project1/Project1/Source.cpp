#include<iostream>
using namespace std;
class SmartPoint {
	int* ptr;
public:
	explicit SmartPoint(int* p = NULL)
	{
		ptr = p;
	}
	int& operator*()
	{
		return *ptr;
	}
};
int main()
{
	SmartPoint ptr(new int());
	*ptr = 20;
	std::cout << *ptr;
	return 0;
}