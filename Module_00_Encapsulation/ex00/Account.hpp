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

		friend std::ostream& operator << (std::ostream& os, const Account& account) {
			os << "[ id: " << account.id << " ] - [ value: " << account.value << "] - [ loan: " << account.loan <<" ]";
			return (os);
		}

		friend class Bank;
};

#endif