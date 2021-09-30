// CPP Program to check whether given matrix
// is Diagonally Dominant Matrix.
#include <bits/stdc++.h>
#define N 3
using namespace std;

// check the given given matrix is Diagonally
// Dominant Matrix or not.
bool isDDM(int m[N][N], int n)
{
	// for each row
	for (int i = 0; i < n; i++)
{	

		// for each column, finding sum of each row.
		int sum = 0;
		for (int j = 0; j < n; j++)			
			sum += abs(m[i][j]);	

		// removing the diagonal element.
		sum -= abs(m[i][i]);

		// checking if diagonal element is less
		// than sum of non-diagonal element.
		if (abs(m[i][i]) < sum)
			return false;
		
	}

	return true;
}

// Driven Program
int main()
{
	int n = 3;
	int m[N][N] = { { 3, -2, 1 },
					{ 1, -3, 2 },
					{ -1, 2, 4 } };

	(isDDM(m, n)) ? (cout << "YES") : (cout << "NO");

	return 0;
}
