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
		const Account &getAccountById(const int &id) const;
		void setLiquidity(const int &liquidity);
		void addFees(const int &amount);
		void deposit(Account *account, const int &moneyAmount);
		void withdraw(Account *account, const int &moneyAmount);
		void giveLoan(const int &id, const int&loanAmount);
		long addAcount(Account *account);
		long addNewAcount();
		void deleteAccount(const int &id);
		void getLoanBack(const int &id);

		friend std::ostream& operator << (std::ostream& os, const Bank& bank) {
			os << "Liquidity : " << bank.liquidity << std::endl;

			std::vector<Account *>::const_iterator it;
			for (it = bank.clientAccounts.begin(); it != bank.clientAccounts.end(); it++) {
				os << **it << std::endl;
			}
			return (os);
		}
};

#endif