#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<unordered_map>

using namespace std;

class Course
{
private:
	string name;
	string id;
	Teacher* teacher;
public:
	Course(string n, string i, Teacher* t):
		name(n), id(i), teacher(t){}

	void set_teacher(Teacher* t)
	{
		teacher = t;
	}
	Teacher* get_teacher()
	{
		return teacher;
	}
	string get_name()
	{
		return name;
	}
	void set_name(string n)
	{
		name = n;
	}
	string get_id()
	{
		return id;
	}
	void set_id(string i)
	{
		id = i;
	}
};

