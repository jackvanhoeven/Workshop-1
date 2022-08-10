//Header file for connection with Customer Table
#ifndef CUSTOMERMANAGER_H
#define CUSTOMERMANAGER_H
class CustomerManager {
public:
	int insertCustomer(Customer* customer);
	int updateCustomer(Customer* customer);
	Customer* getCustomer(string memberID);
};
#endif