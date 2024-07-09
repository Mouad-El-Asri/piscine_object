#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>

class Account
{
	private:
		long id;
		static long nextId;
		int value;
		int loan;

	public:
		Account();
		~Account();
		const long &getId() const;
		const int &getValue() const;
		const int &getLoan() const;

		friend std::ostream& operator << (std::ostream& os, const Account& account) {
			os << "[ id: " << account.id << " ] - [ value: " << account.value << "] - [ loan: " << account.loan <<" ]";
			return (os);
		}

		friend class Bank;
};

#endif