#include <iostream>
using namespace std;
int main()
{
	int rangee = 10;
	int colonne;
	while (rangee >= 1)
	{
		colonne = 1;
		while (colonne <= 10)
		{
			cout << (rangee % 2 ? "<" : ">");
			++colonne;
		}
		--rangee;
		cout << endl;
	}
	return 0;
}