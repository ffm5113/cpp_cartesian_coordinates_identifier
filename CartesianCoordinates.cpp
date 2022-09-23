#include <iostream> // To use cin/cout
using namespace std;

int main() 
{
	int x, y; // Initialize integers

	cout << "Cartesian Coordinate Identifier Program" << endl
		<< "By Forrest Moulin" << endl << endl
		<< "Please enter x and y values separated by a space:" << endl
		<< "Example: 100 200" << endl << endl;
	
	// Get user input
	cin >> x >> y;
	
	cout << endl << "You entered (" << x << ", " << y << ")." << endl;

	// 1st quadrant (+x, +y)
	if (x > 0 && y > 0)
	{
		cout << "Your point is located in the First Quadrant " << 
			"(+x, +y)." << endl;
	}
	// 2nd quadrant (-x, +y)
	else if (x < 0 && y > 0)
	{
		cout << "Your point is located in the Second Quadrant " <<
			"(-x, +y)." << endl;
	}
	// 3rd quadrant (-x, -y)
	else if (x < 0 && y < 0)
	{
		cout << "Your point is located in the Third Quadrant " <<
			"(-x, -y)." << endl;
	}
	// 4th quadrant (+x, -y)
	else if (x > 0 && y < 0)
	{
		cout << "Your point is located in the Fourth Quadrant " <<
			"(+x, -y)." << endl;
	}
	// X-axis (x = 0)
	else if (x == 0 && y != 0)
	{
		cout << "Your point is located on the x-axis (x = 0)." << endl;
	}
	// Y-axis (y = 0)
	else if (x != 0 && y == 0)
	{
		cout << "Your point is located on the y-axis (y = 0)." << endl;
	}
	// Origin (0,0)
	else if (x == 0 && y == 0)
	{
		cout << "Your point is located on the origin (0,0)." << endl;
	}
	// Error message if any other invalid values entered. 
	else 
	{
		cout << "Please enter valid x and y values, and try again." << endl;
	}
}
/*
* CONSOLE OUTPUT # 1 - Y-AXIS
* Cartesian Coordinate Identifier Program
* By Forrest Moulin
*
* Please enter x and y values separated by a space:
* Example: 100 200
*
* 100 0
*
* You entered (100, 0).
* Your point is located on the y-axis (y = 0).
*/

/*
* CONSOLE OUTPUT # 2 - X-AXIS
* Cartesian Coordinate Identifier Program
* By Forrest Moulin
* 
* Please enter x and y values separated by a space:
* Example: 100 200
* 
* 0 2000
* 
* You entered (0, 2000).
* Your point is located on the x-axis (x = 0).
*/

/*
* CONSOLE OUTPUT # 3 - ORIGIN
* Cartesian Coordinate Identifier Program
* By Forrest Moulin
* 
* Please enter x and y values separated by a space:
* Example: 100 200
* 
* 0 0
* 
* You entered (0, 0).
* Your point is located on the origin (0,0).
*/

/*
* CONSOLE OUTPUT # 4 - 1ST QUADRANT
* Cartesian Coordinate Identifier Program
* By Forrest Moulin
* 
* Please enter x and y values separated by a space:
* Example: 100 200
* 
* 15 10
* 
* You entered (15, 10).
* Your point is located in the First Quadrant (+x, +y).
*/
