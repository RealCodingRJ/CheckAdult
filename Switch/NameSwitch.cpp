#include <iostream>

using namespace std;

static void SwitchName() {
	
	int agePerson;
	cin >> agePerson;

	//int a = 100;

	switch (agePerson) {
	case 25:
		cout << "Adult" << endl;
		break;
	
	case 15:
		cout << "Teenager" << endl;
		break;

	case 30:
		cout << "Adult" << endl;
		break;
	
	case 16:
		cout << "Teenager" << endl;
		break;

	case 21:
		cout << "Adult" << endl;
		break;
	default:
		cout << "Not a Human" << endl;
		break;
	}

}