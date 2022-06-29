#include <iostream>
#include <vector>

#define l2

#ifdef l1

float calc(float a, float b)
{
	if (b == 0) throw "del 0";
	return a / b;
}

int stringToInt(std::string str)
{
	long long num = 0;
	if (str[0] == '-')
	{
		for (int i = 1; str[i] != '\0'; i++)
		{
			if (str[i] < '0' || str[i] > '9') throw "error type";
			num = num * 10 + str[i] - 48;
		}
		num = -num;
	}
	else
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] < '0' || str[i] > '9') throw "error type";
			num = num * 10 + str[i] - 48;
		}
	}
	if (num > 2147483647 || num < -2147483648) throw "out of memory type int";
	return num;
}

int main()
{
	std::string str = "-12k4";
	try
	{
		//std::cout << calc(2, 0) << std::endl;
		std::cout << stringToInt(str) << std::endl;
	}
	catch(const char* exept)
	{
		std::cout << exept;
	}
}

#else

template <typename T>
struct Node
{
	T data;
	Node* parent = nullptr;
	Node* left = nullptr;
	Node* right = nullptr;
};

template <typename T>
class Tree
{
private:
	Node<T>* root = nullptr;
	void create(std::vector<Node> vector) // реализовать
	{

	}
public:
	Tree(T* array)
	{
		int size = _msize(array) / sizeof(array[0]);
		std::vector<Node*> v1;
		for (int i = 0; i < size; i++)
		{
			Node<T>* buf = new Node<T>;
			buf->data = array[i];
			v1.push_back(buf);
		}
		create(v1);
	}
	
};

int main()
{


}

#endif