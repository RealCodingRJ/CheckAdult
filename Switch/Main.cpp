#include <iostream>
#include <vector>
#include <thread>
 
using namespace std;

template<typename T>
class Name {

	T age;

public:

	void setAge(const T& age) {
		this->age = age;

	}

	T getAge() {
		return this->age;
	}
};

int main() {

	cout << "Enter Age: " << endl;

	Name<int> name{};

	int age;
	int* ptr;
	cin >> age;
	ptr = new int;

	*ptr = age;

	name.setAge(*ptr);

	std::thread th;

	switch (*ptr) {

	case 15:
		cout << "Age: " << name.getAge() << endl;
		cout << "Child " << endl;
		break;

	case 21:
		cout << "Age: " << name.getAge() << endl;
		cout << "Adult" << endl;
		break;

	case 30:
		cout << "Age: " << name.getAge() << endl;
		cout << "Adult" << endl;
		break;

	case 16:
		cout << "Age: " << name.getAge() << endl;
		cout << "Child" << endl;
		break;

	case 25:

		cout << "Age: " << name.getAge() << endl;
		cout << "Adult" << endl;
		break;

	default:
		cout << "Age: " << name.getAge() << endl;
		cout << "Not a Human" << endl;
		break;

		th.join();
	
	}


	system("pause > 0");
	return 0;
}