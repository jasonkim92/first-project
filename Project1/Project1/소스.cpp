#include <iostream>
using namespace std;
#include <string>

template<typename TYPE>

class Stack {
private:
	TYPE* buff;
	int top;
public:
	Stack(int sz = 10)
	{
		buff = new TYPE[sz];
		top = 0;
	}
	~Stack()
	{
		delete[] buff;
	}
	void push(const TYPE& v)
	{
		buff[top++] = v;
	}
	TYPE pop()
	{
		return buff[--top];
	}
};

int main()
{

	Stack<string> s1;

	s1.push("hello");
	s1.push("world");

	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
}



