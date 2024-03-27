#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<unordered_map>

using namespace std;

class Section
{
private:
	string id;
public:
	Section(string i):
		id(i){}
	string get_id()
	{
		return id;
	}
	void set_id(string id)
	{
		id = id;
	}
};

