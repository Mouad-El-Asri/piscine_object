#ifndef ROOM_HPP
#define ROOM_HPP

#include <vector>
#include "Person.hpp"

class Person;

class Room
{
	private:
		long long ID;
		std::vector<Person *> _occupants;

	public:
		Room();
		bool canEnter(Person *p_person);
		void enter(Person *p_person);
		void exit(Person *p_person);
		void printOccupant();
};

#endif