#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<unordered_map>

#include "Course.h"
#include "Room.h"

using namespace std;
class Course;
class Teacher;
class Timeslot
{
private:
	string day;
	vector<string> time;
	Course* course;
	Room* room;
public:
	Timeslot(string d, string t, Course* c, Room* r) :
		day(d), course(c), room(r)
	{
		time.push_back(t);
	}

	void get_day()
	{
		cout << day << "\t";
	}
	void set_day(string d)
	{
		day = d;
	}

	void get_time()
	{
		for (const string i : time)
		{
			cout << i;
		}
		cout << endl;
	}
	void set_time(string t)
	{
		time.push_back(t);
	}

	Course* get_course()
	{
		return course;
	}
	void set_course(string c, string i)
	{
		course->set_name(c);
		course->set_id(i);
	}

	Room* get_room()
	{
		return room;
	}
	void set_room(Room* r)
	{
		room = r;
	}
};