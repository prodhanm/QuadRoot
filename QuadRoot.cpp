#include <iostream>

using namespace std;

float quadRoot(float a, float b, float c) {
	float rootPos, rootNeg;
	float discriminant = pow(b,2) - (4 * a * c);
	rootPos = (-b + sqrt(discriminant)) / (2 * a);
	rootNeg = (-b - sqrt(discriminant)) / (2 * a);
	return rootPos, rootNeg;

}

int main()
{
	cout << "Enter the coefficients a, b, c: ";
	float a, b, c;
	cin >> a >> b >> c;
	float result = quadRoot(a, b, c);
	cout << "The roots are: " << result << endl;
}


