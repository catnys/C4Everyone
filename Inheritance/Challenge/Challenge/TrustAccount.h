#pragma once
#include "Savings_Account.h"

class TrustAccount :public Savings_Account {

	friend std::ostream& operator<<(std::ostream& os, const TrustAccount& account);
private:
	static constexpr const char* def_name = "Unnamed Trust Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
	static constexpr double bonus_amount = 0.0;
	static constexpr double bonus_threshold = 0.0;
	static constexpr double max_withdraw_percent = 0.2;
	static constexpr int max_withdrawals = 3;
protected:
	int num_withdrawals;
public:
	TrustAccount(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

	//Deposits of $5.000,00 or more will receive $50 bonus
	bool deposit(double amount);

	//Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value
	bool withdraw(double amount);		
};