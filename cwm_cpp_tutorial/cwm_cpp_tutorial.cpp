#include <iostream>
#include <string>
using namespace std;

void sum() {
	// Declare `x`
	string x;
	// Output characters
	cout << "Type a number: ";
	// Mutate `x`, using `cin` as the input (?), `getline` returns a `string`
	getline(cin, x);

	// Same as with `x`
	string y;
	cout << "Type a number: ";
	getline(cin, y);

	// Concatenate `strings`, output (`endl` is basically a "\n" (?)
	cout << "String sum: " << x + y << endl;
	
	// Create new variables, converting the `string`s to `int`s using `stoi` (will crash if the input is not a number)
	int i_x = stoi(x);
	int i_y = stoi(y);

	// Sum `int`s, output
	cout << "Int sum: " << i_x + i_y << endl;
}

void convert() {
	const double meters_per_foot = 0.3048;

	// Get input
	string feet_s;
	cout << "Type a number: ";
	getline(cin, feet_s);

	// Convert `string` to `double`
	double feet = stoi(feet_s);

	cout << "`" << feet << "` feet is equal to `" << feet * meters_per_foot << "` meters." << endl;
}

int main() {
	
	//sum();

	convert();

	return 0;
}
