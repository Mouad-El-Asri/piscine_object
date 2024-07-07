#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include "Bank.hpp"

class Account
{
	private:
		int id;
		static int nextId;
		int value;
		int loan;

	public:
		Account();
		const int &getId() const;
		const int &getValue() const;
		const int &getLoan() const;

		friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
		{
			p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
			return (p_os);
		}

		friend class Bank;
};

#endif