#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<unordered_map>
#include<fstream>

#include "Section.h"
#include "Teacher.h"
#include "Course.h"
#include "Room.h"
#include "Timeslot.h"

using namespace std;

//For empty spaces and table management
string null = "          ";

//Rooms
Room room1 = { "4-17" };
Room room2 = { "4-18" };
Room room3 = { "4-19" };
Room room4 = { "Lab-1" };
Room room5 = { "Lab-2" };

//Courses
Course course1 = { "OOP", "CS101", &teacher1 };
Course course2 = { "DSA", "CS102", &teacher2 };
Course course3 = { "DBMS", "CS103", &teacher3 };
Course course4 = { "OS", "CS104", &teacher4 };
Course course5 = { "SE", "CS105", &teacher5 };

//Teachers
Teacher teacher1 = { "1", "Mr. A", &course1 };
Teacher teacher2 = { "2", "Mr. B", &course2 };
Teacher teacher3 = { "3", "Mr. C", &course3 };
Teacher teacher4 = { "4", "Mr. D", &course4 };
Teacher teacher5 = { "5", "Mr. E", &course5 };

//Sections
Section section1 = { "A" };
Section section2 = { "B" };

//Timeslots
Timeslot timebase  = { "Day      ", "8:00-9:00  ", &course1, &room1 };
Timeslot timeslot1 = { "Monday   ", "8:00-9:00  ", &course1, &room1 };
Timeslot timeslot2 = { "Tuesday  ", "9:00-10:00 ", &course2, &room2 };
Timeslot timeslot3 = { "Wednesday", "10:00-11:00", &course3, &room3 };
Timeslot timeslot4 = { "Tursday  ", "11:00-12:00", &course4, &room4 };
Timeslot timeslot5 = { "Friday   ", "12:00-1:00 ", &course5, &room5 };
