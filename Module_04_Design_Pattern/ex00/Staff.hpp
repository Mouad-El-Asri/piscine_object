#ifndef STAFF_HPP
#define STAFF_HPP

#include "Person.hpp"
#include "Form.hpp"

class Staff : public Person
{
	public:
		void	sign(Form *p_form);
};

#endif