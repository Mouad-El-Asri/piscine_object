#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>

class Account
{
	private:
		int id;
		static int nextId;
		int value;
		int loan;

	public:
		Account();
		~Account();
		const int &getId() const;
		const int &getValue() const;
		const int &getLoan() const;

		friend std::ostream& operator << (std::ostream& p_os, const Account& p_account) {
			p_os << "[ id: " << p_account.getId() << " ] - [ value: " << p_account.getValue() << "] - [ loan: " << p_account.getLoan() <<" ]";
			return (p_os);
		}

		friend class Bank;
};

#endif