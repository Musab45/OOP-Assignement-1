#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<unordered_map>

using namespace std;

class Teacher
{
private:
    string id;
    string name;
    Course* course;
public:
    Teacher(string i, string n, Course* c) :
		id(i), name(n), course(c) {}

    string get_id()
    {
        return id;
    }
    void set_id(string i)
    {
        id = i;
    }
    string get_name()
    {
        return name;
    }
    void set_name(string n)
    {
        name = n;
    }
};

