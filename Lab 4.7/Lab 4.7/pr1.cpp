#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	const double PI = 3.141592653589793;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "arctg(x)" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	if (x > 1)
		while (x <= xk)
		{
			n = 0; // вираз залежить від умови завдання варіанту 
			a = -1./ x; // вираз залежить від умови завдання варіанту 
			S = a;
			do {
				n++;
				R = ((-1) / (x * x)) * ((2 * n - 1) / (2 * n + 1)); // вираз залежить від умови завдання варіанту 
				a *= R;
				S += a;
			} while (abs(a) >= eps);
			cout << "|" << setw(7) << setprecision(2) << x << " |"
				<< setw(10) << setprecision(5) << atan(x) << " |"
				<< setw(10) << setprecision(5) << PI/2 + S << " |"
				<< setw(5) << n << " |"
				<< endl;
			x += dx;
		}
	else
		cout << "Non correct meaning of x, x need to be > 1" << endl;
	cout << "-------------------------------------------------" << endl;
	return 0;
}
