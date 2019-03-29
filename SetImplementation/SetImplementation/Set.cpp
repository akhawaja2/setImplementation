#pragma once
#include "Set.h"
using namespace std;


Set::Set()
{
	cout << "Set made" << endl;
}
void Set::addToSet(int valueToAdd)
{
	if (doesItemExist(valueToAdd))
	{
		cout << "Item: " << valueToAdd << "'s already in the list, sorry. " << endl;
	}
	else
	{
		data.push_back(valueToAdd);
	}
	
}
void Set::removeFromSet(int valueToRemove)
{
	int size = data.size();
	for (int i = 0; i < data.size(); i++)
	{
		if (data.at(i) == valueToRemove)
		{
			cout << "Value removed" << endl;
			data.erase(data.begin() + i);
		}
	}
	if (size == data.size())
	{
		cout << "Failed to remove data";
	}
}
int Set::getSize()
{
	return data.size();
}
bool Set::doesItemExist(int item)
{
	if (data.size() == 0)
	{
		return false;
	}
	for (int i = 0; i < data.size(); i++)
	{
		if (data.at(i) == item)
		{
			return true;
		}
	}
	return false;
}
void Set::emptySet()
{
	data.clear();
}
void Set::displaySet()
{
	if (data.size() == 0)
	{
		cout << "Nothing found in set!" << endl;
	}
	for (int i = 0; i < data.size(); i++)
	{
		cout << "Set index: " << i << ". Data inside: " << data.at(i) << endl;
	}
}

void Set::unionize(Set setToUnionize)
{
	for (int i = 0; i < setToUnionize.getSize(); i++)
	{
		this->addToSet(setToUnionize.getData().at(i));
	}
}
Set Set::intersect(Set setToIntersect)
{
	Set intersectedSet;

	for (int i = 0; i < setToIntersect.getSize(); i++)
	{
		if (this->doesItemExist(setToIntersect.getData().at(i)))
		{
			intersectedSet.addToSet(setToIntersect.getData().at(i));
		}
	}
	return intersectedSet;
}