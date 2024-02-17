#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double int_rate)
	: Savings_Account{ name,balance,int_rate }, num_withdrawals{ 0 } {

}


// Deposit additional $50 bonus when amonut >= $5000
bool TrustAccount::deposit(double amount) {
	if (amount >= bonus_threshold)
		amount += bonus_amount;
	return Savings_Account::deposit(amount);
}

// Only allowed 3 withdrawals, each can be up to a max of 20% of the account's value
bool TrustAccount::withdraw(double amount) {

	if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent)) {
		return false; // reject
	}
	else {
		num_withdrawals++;
		return Savings_Account::withdraw(amount);
	}

}


std::ostream& operator<<(std::ostream& os, const TrustAccount& account) {
	os << "[TrustAccount: " << account.name << ": " << account.balance << " ," << account.int_rate
		<< " %, withdrawals: " << account.num_withdrawals << " ]";
	return os;
}