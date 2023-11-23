#include <iostream>
#include <string>
using namespace std;

//Disclaimer: I know it is better practice to get the input from the `main` function,
// and then do the operations in the individual functions.
// But I just want to be able to freely swap out each app easily

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

void convert_ft_m() {
	const double meters_per_foot = 0.3048;

	// Get input
	string feet_s;
	cout << "Type a number: ";
	getline(cin, feet_s);

	// Convert `string` to `double`
	double feet = stoi(feet_s);

	cout << "`" << feet << "` feet is equal to `" << feet * meters_per_foot << "` meters." << endl;
}

int convert_temp() {

	// Get input
	string temp_s;
	cout << "Type a temperature: ";
	getline(cin, temp_s);

	double raw_temp = stoi(temp_s);
	double temp_k;

	string unit_s;
	cout << "\nWhat unit of measurement? (f, c, k): ";
	getline(cin, unit_s);

	string unit;

	// Convert to kelvin
	switch (tolower(unit_s[0]))
	{
	case 'f':
		temp_k  = (raw_temp - 32) * (5.0/9.0) + 273.15;
		unit = "Fahrenheit";
		break;
	case 'c':
		temp_k = raw_temp + 273.15;
		unit = "Celsius";
		break;
	case 'k':
		temp_k = raw_temp;
		unit = "Kelvin";
		break;
	default:
		cout << "Wrong unit";
		return 1;
	}
	
	cout << "`" << raw_temp << "` " << unit << " is equal to:" << endl;
	cout << "`" << (temp_k - 273.15) * (9.0 / 5.0) + 32 << "` degrees fahrenheit" << endl;
	cout << "`" << temp_k - 273.15 << "` degrees celsius" << endl;
	cout << "`" << temp_k << "` kelvin" << endl;

	return 0;
}

int double_product() {

	return 0;
}

int main() {
	
	//sum();

	//convert_ft_m();

	//return convert_temp();
}
