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
		~Bank();
		const int &getLiquidity() const;
		void setLiquidity(const int &liquidity);
		void addFees(const int &amount);
		void deposit(Account *account, const int &moneyAmount);
		void withdraw(Account *account, const int &moneyAmount);
		void giveLoan(Account *account, const int&loanAmount);
		void addAcount(Account *account);
		void deleteAccount(const int &id);
		void getLoanBack(const int &id);

		friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank) {
			p_os << "Liquidity : " << p_bank.getLiquidity() << std::endl;

			std::vector<Account *>::const_iterator it;
			for (it = p_bank.clientAccounts.begin(); it != p_bank.clientAccounts.end(); it++) {
				p_os << **it << std::endl;
			}

			return (p_os);
		}
};

#endif