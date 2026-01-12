/* 
* Attached: Sample Project (name of the assignment)
* File: sampleProject.pdf (worthless)
* =========================================================================
* 
* Programmer: Gage Alvarez
* Class: CS1B
* Instructor: Med Mogasemi
* 
* =========================================================================
* Program:Sample Project (name of the program)
* ========================================================================
* Description: project description blah blah blahaj 
* =======================================================================
* =======================================================================
*/

#include<iostream>
using namespace std; //optional

//Function Prototypes
float getSide(char);
float calcSideC(float, float);
void displaySideC(float);

//====== main ==============================================================
//
//==========================================================================
int main() {
//Declaring variables
	float sideA = 0;
	float sideB = 0;
	float sideC = 0;
	char count = 'A';

	// function used to return Side A from user.
	sideA = getSide(count++);
	// function used to return Side B from user.
	sideB = getSide(count);
	// function used to determine and return Side C.
	sideC = calcSideC(sideA, sideB);
	// function used to display Side C.
	displaySideC(sideC);
	return 0;
} // end of main()

// ============================================================================
// ======= getSide ============================================================
// This function prompts the user to input a side (A/B) of a triangle, returns
// side to main().
//
// Input:
// A triangle side (A/B) determined by the user and a count in the form of
// a char.
//
// Output:
// User provided side (A/B) returned to main().
// =============================================================================

float getSide(char count)
{
	float side = 0;
	// if side is A, then display the following:
	if (count == 'A')
		cout << "Enter two sides of a right triangle.\n\n";
	// displays the side to the user using the char count.
	cout << "Side " << count << ":\n";
	cout << "Please enter the dimension: ";
	cin >> side;
	cout << endl;
	return side;
} // end of getSide()

// =============================================================================
// ==== calcSideC ==============================================================
// This function calculates the hypotenuse side of a triangle using the sides
// provided by the user (Side A and Side B).
//
// Input:
// Side A and Side B from main().
//
// Output:
// Returns Side C to main().
// =============================================================================

float calcSideC(float a, float b)
{
	// formula used to determine Side C using Side A and Side B.
	float c = sqrt(pow(a, 2) + pow(b, 2));
	return c;
} // end of calcSideC()

// =============================================================================
// ==== displaySideC============================================================
// This function gets Side C from main() and displays output to user.
//
// Input:
// Side C from main().
//
// Output:
// Displays the results for Side C to user.
// =============================================================================

void displaySideC(float c)
{
	cout << "The dimension of Side C is: " << c << "." << endl;
} // end of displaySideC()


// =============================================================================
/* ================================== Output ===================================
Enter two sides of a right triangle.
Side A:
Please enter the dimension: 3
Side B:
Please enter the dimension: 4
The dimension of Side C is: 5.
Press any key to close this window . . .
*/