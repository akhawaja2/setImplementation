#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
	Set set1;
	set1.addToSet(1);
	set1.addToSet(2);
	set1.addToSet(2);

	set1.displaySet();

	cout << "-----Set 2 below -----" << endl;
	Set set2;
	set2.addToSet(1);
	set2.addToSet(2);
	set2.addToSet(3);


	/*code to get the intersection of two sets*/
	cout << "Intersecting set 1 with set 2" << endl;
	Set set3 = set1.intersect(set2);
	set3.displaySet();
	/* code to unionize two sets
	cout << "Unionizing set 1 with set 2" << endl;
	set1.unionize(set2);

	set1.displaySet();*/
	system("pause");
	return 0;
}