#include "Grad.h"
#include "UnderGrad.h"

int main()
{
	UnderGrad underGrad(100, 9, "Tom Lee", "Freshman");
	Grad grad(101, 12, "Him Jones", "PHD");

	underGrad.displayRecord();
	grad.displayRecord();

	grad.setUnits(15);

	grad.displayRecord();
}
