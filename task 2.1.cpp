#include <iostream>
#include <cmath>

using namespace std;

// calculation of length of your vector
float length_vector(float x, float y, float z){
	float length = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	cout << "Here is the length of your vector: " << length << endl;
	return length;
}

// calculation length of a unit vector
void unit_vector(float length1, float x, float y, float z) {
	cout << "That's coordinates of your unit vector: ";
	cout << "(" << x / length1 << "," << y / length1 << "," << z / length1 << ")" << endl;
}

// calculation scalar product
float scalar(float x1, float y1, float z1, float x2, float y2, float z2)
{
	float sp;
	sp = x1 * x2 + y1 * y2 + z1 * z2;
	return sp;
}

// composition of 2 vectors and vector composition of 2 vectors
float composition(float x, float y, float z) {
	float coordinates[3] = {};
	float cn;
	for (int i = 0; i < 3; i++) {

	}
}

int main()
{
	float len = 10;
	// len = length_vector(1, 5, 3);
	cout << len;
	return 0;
}