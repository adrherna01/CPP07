#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception 1 caugth" << std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception 2 caugth" << std::endl;
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}

// class ComplexType {
// 	int value;

// public:
// 	ComplexType() : value(0) {}
// 	ComplexType(int v) : value(v) {}

// 	int getValue() const { return value; }
// 	void setValue(int v) { value = v; }

// 	bool operator==(const ComplexType& other) const {
// 		return value == other.value;
// 	}

// 	friend std::ostream& operator<<(std::ostream& os, const ComplexType& obj) {
// 		return os << "ComplexType(value: " << obj.value << ")";
// 	}
// };


// int main() {
// 	Array<ComplexType> objects(MAX_VAL);
// 	ComplexType* mirror = new ComplexType[MAX_VAL];
// 	srand(time(NULL));

// 	for (int i = 0; i < MAX_VAL; i++) {
// 		const int val = rand();
// 		ComplexType value(val);
// 		objects[i] = value;
// 		mirror[i] = value;
// 	}

// 	{
// 		Array<ComplexType> tmp = objects;
// 		Array<ComplexType> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++) {
// 		if (!(mirror[i] == objects[i])) {
// 			std::cerr << "Didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}

// 	try {
// 		objects[-2] = ComplexType();
// 	} catch (const std::exception& e) {
// 		std::cout << "Exception 1 caught" << std::endl;
// 		std::cerr << e.what() << '\n';
// 	}
// 	try {
// 		objects[MAX_VAL] = ComplexType();
// 	} catch (const std::exception& e) {
// 		std::cout << "Exception 2 caught" << std::endl;
// 		std::cerr << e.what() << '\n';
// 	}

// 	delete[] mirror;
// 	return 0;
// }
