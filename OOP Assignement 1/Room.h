#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<unordered_map>

using namespace std;

class Room
{
private:
	string id;
public:
	Room(string i):
		id(i){}

	void get_id()
	{
		cout << id;
	}
	void set_id(string id)
	{
		id = id;
	}
};

