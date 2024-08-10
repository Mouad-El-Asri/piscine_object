#ifndef SECRETARIAOFFICE_HPP
#define SECRETARIAOFFICE_HPP

#include <vector>
#include "Room.hpp"
#include "Form.hpp"

class SecretarialOffice : public Room
{
	private:
		std::vector<Form *> _archivedForms;
};

#endif