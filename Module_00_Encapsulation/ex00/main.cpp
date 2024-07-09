#include "Account.hpp"
#include "Bank.hpp"

int main()
{
	try {
		Bank bank = Bank();
		bank.setLiquidity(1000000);

		Account *accountA = new Account();
		Account *accountB = new Account();

		// Add accounts to bank
		bank.addAcount(accountA);
		bank.addAcount(accountB);
		bank.addNewAcount();

		// Deposit 100 to accountA & accountB
		bank.deposit(accountA, 160);
		bank.deposit(accountB, 100);

		bank.setLiquidity(2000);
		bank.deposit(accountB, 400);

		// Withdraw 500 from accountA
		bank.withdraw(accountA, 50);

		// Give loan of 1000 to accountB
		bank.giveLoan(accountA->getId(), 1000);
		
		// Get loan back from accountB
		bank.getLoanBack(accountA->getId());

		// Delete accountA
		bank.deleteAccount(accountA->getId());

		std::cout << " ---------- " << std::endl;

		std::cout << "Bank Informations : " << std::endl;
		std::cout << bank << std::endl;

		std::cout << " ---------- " << std::endl;
	} catch(const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
