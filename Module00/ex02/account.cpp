/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 22:03:09 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 22:03:11 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "account.hpp"

int Account:: _nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


// construct

Account::Account(int initial_deposit) {

	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
		
}

// display info for all account

void Account::displayAccountsInfos(){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" \
	<< Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

// deposit

void Account::makeDeposit(int deposit){
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amout:" << this->_amount - deposit \
			  << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits <<  std::endl;
}

// withdrawal

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (this->_amount - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal \
		<< ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount \
	<< ";withdrawal: resufed" << std::endl;
	return (false);
}

// show status of the account
// const can change variables in own class

void	Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount \
			  << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


// time

void	Account::_displayTimestamp(void) {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%X] ", &tstruct);
	
	std::string str(buf);
	str.erase(12, 1);
	str.erase(14, 1);
	std::cout << str;
}

// getters

int Account::getNbAccounts(){
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(){
	return (Account::_totalAmount);
}

int Account::getNbDeposits(){
	return (Account::_nbAccounts);
}

int Account::getNbWithdrawals(){
	return (Account::_totalNbWithdrawals);
}

// destructor

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
} ;
