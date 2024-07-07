#ifndef BANK_HPP
#define BANK_HPP

#include <iostream>
#include <vector>
#include "Account.hpp"

class Bank
{
	private:
		int liquidity;
		std::vector<Account *> clientAccounts;

	public:
		Bank();
		const int &getLiquidity() const;
		void addFees(const int &amount);
		void deposit(Account *account, const int &moneyAmount);
		void giveLoan(Account *account, const int&loanAmmount);
		void createAcount(Account *account);
		void deleteAccount(const int &id);
		void modifyAccount(const int &id);

		friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
		{
			p_os << "Bank informations : " << std::endl;
			p_os << "Liquidity : " << p_bank.liquidity << std::endl;

			for (auto &clientAccount : p_bank.clientAccounts)
				p_os << *clientAccount << std::endl;

			return (p_os);
		}
};

#endif