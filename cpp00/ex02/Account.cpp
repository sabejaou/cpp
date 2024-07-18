    #include "Account.hpp"
    #include <iostream>
    #include <string>


    int Account::_nbAccounts;
    int Account::_totalAmount;
    int Account::_totalNbDeposits;
    int Account::_totalNbWithdrawals;

    void	Account::_displayTimestamp(void)
    {
        std::time_t now = std::time(0);
        std::tm *ltm = std::localtime(&now);

        std::cout << "[" << ltm->tm_mday << "." << 1+ltm->tm_mon << "." <<1900+ltm->tm_year << "-" << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << "]";
    }

    Account::Account( int initial_deposit )
    {
        Account::_totalAmount += initial_deposit;
        Account::_amount += initial_deposit;
        Account::_accountIndex = Account::_nbAccounts;
        Account::_nbAccounts += 1;
        return ;
    }

	 Account::~Account( void )
    {
        return ;
    }

	int	 Account::getNbAccounts( void )
    {
        return (Account::_nbAccounts);
    }

	int	 Account::getTotalAmount( void )
    {
        return (Account::_totalAmount);
    }

	int	 Account::getNbDeposits( void )
    {
        return (Account::_totalNbDeposits);
    }

	int	 Account::getNbWithdrawals( void )
    {
        return (Account::_totalNbWithdrawals);
    }

	void	 Account::displayAccountsInfos( void )
    {
        Account::_displayTimestamp();
        std::cout << "accounts:" << Account::_nbAccounts;
        std::cout << ";amount:" << Account::_totalAmount;
        std::cout << ";totalNbdeposit:" << Account::_totalNbDeposits;
        std::cout << ";totalNbWithdrawal:" << Account::_totalNbWithdrawals << std::endl;
    }


	void	 Account::makeDeposit( int deposit )
    {
        Account::_displayTimestamp();
        std::cout << "index:" << Account::_accountIndex;
        std::cout << ";p_amount:" << Account::_amount;
        Account::_amount += deposit;
        Account::_totalAmount += deposit;
        std::cout << ";deposit:"<< deposit;
        std::cout << ";amount:" << Account::_amount;
        Account::_nbDeposits += 1;
        Account::_totalNbDeposits += 1;
        std::cout << ";nbdeposit:" << Account::_nbDeposits << std::endl;
    }

	bool	 Account::makeWithdrawal( int withdrawal )
    {
        Account::_displayTimestamp();
        std::cout << "index:" << Account::_accountIndex;
        std::cout << ";p_amount:" << Account::_amount;
        Account::_amount -= withdrawal;
        if (Account::_amount < 0)
        {
            Account::_amount += withdrawal;
            std::cout << ";withdrawal:Refused"<< std::endl;
            return (1);
        }
        std::cout << ";withdrawal:"<< withdrawal;
        std::cout << ";amount:" << Account::_amount;
        Account::_totalNbWithdrawals += 1;
        Account::_nbWithdrawals += 1;
        std::cout << ";nbWithdrawal:" << Account::_nbWithdrawals << std::endl;
        Account::_totalAmount -= withdrawal;
        return (0);
    }
	int		 Account::checkAmount( void ) const
    {
        return (Account::_amount);
    }
	void	 Account::displayStatus( void ) const
    {
        Account::_displayTimestamp();
        std::cout << "index:" << Account::_accountIndex;
        std::cout << ";amount:" << Account::_amount;
        std::cout << ";nbdeposit:" << Account::_nbDeposits;
        std::cout << ";nbWithdrawal:" << Account::_nbWithdrawals << std::endl;
    }