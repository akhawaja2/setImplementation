#pragma once
#include <iostream> 
#include <vector> 

using namespace std;

class Set
{
public:
	Set();
	void addToSet(int valueToAdd);
	void removeFromSet(int valueToRemove);
	int getSize();
	bool doesItemExist(int item);
	void emptySet();
	void displaySet();
	
	vector<int> getData()
	{
		return data;
	}

	//The union of two sets.
	//The intersection of two sets.

	void unionize(Set setToUnionize);
	Set intersect(Set setToIntersect);

private:
	vector<int> data;
protected:

};