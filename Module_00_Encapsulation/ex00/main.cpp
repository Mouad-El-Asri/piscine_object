#include "Account.hpp"
#include "Bank.hpp"

int main()
{
	try {
		Account accountA = Account();
		Account accountB = Account();

		Bank bank = Bank();
		bank.setLiquidity(1000000);

		// add accounts to bank
		bank.addAcount(&accountA);
		bank.addAcount(&accountB);

		// deposit 100 to accountA & accountB
		bank.deposit(&accountA, 160);
		bank.deposit(&accountB, 100);

		bank.setLiquidity(2000);
		bank.deposit(&accountB, 400);

		// withdraw 500 from accountA
		bank.withdraw(&accountA, 500);

		// give loan of 1000 to accountB
		bank.giveLoan(&accountA, 1000);
		
		// get loan back from accountB
		bank.getLoanBack(accountA.getId());

		// delete accountA
		bank.deleteAccount(accountA.getId());

		std::cout << " ---------- " << std::endl;

		std::cout << "Account : " << std::endl;
		std::cout << accountA << std::endl;
		std::cout << accountB << std::endl;

		std::cout << " ---------- " << std::endl;

		std::cout << "Bank Informations : " << std::endl;
		std::cout << bank << std::endl;

		return (0);
	} catch(const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
