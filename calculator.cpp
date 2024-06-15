#include <iostream>
using namespace std;


int main()
{
	char op;
	float num1, num2;

	

	cout<<"Enter the first number: \n";
	cin >> num1;
    cout<<"Enter the operation: \n";
	cin >> op;
    cout<<"Enter the second number: \n";
    cin>>num2;

	
	switch (op) {
	
	case '+':
		cout << num1 + num2;
		break;

	
	case '-':
		cout << num1 - num2;
		break;

	
	case '*':
		cout << num1 * num2;
		break;

	
	case '/':
		cout << num1 / num2;
		break;

	
	default:
		cout << "Error! operator is not correct";
	}
	

	return 0;
}
