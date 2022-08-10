//Implementation of connection to Customer Table
#include<iostream>
#include <string>
using namespace std;
#include <mysql/jdbc.h>
using namespace sql;
#include "DatabaseConnection.h"
#include "Customer.h"
#include "CustomerManager.h"

int CustomerManager::insertCustomer(Customer* Customer) {
	DatabaseConnection dbConn;
	PreparedStatement* ps = dbConn.prepareStatement("INSERT INTO Customer VALUES(? , ? , ? )");
	ps->setString(1, Customer->memberID);
	ps->setString(2, Customer->name);
	ps->setString(3, Customer->password);
	int status = ps->executeUpdate();
	delete ps;
	return status;
}