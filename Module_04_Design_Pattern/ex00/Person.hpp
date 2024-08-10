#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include "Room.hpp"

class Room;

class Person
{
	private:
		std::string _name;
		Room *_currentRoom;

	public:
		Person(std::string p_name);
		Room *room() { return (_currentRoom); }
};

#endif