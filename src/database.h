#ifndef DATABASE_H
#define DATABASE_H

// C++ includes
#include <string>

class database {
	public:
		void connect();
		void disconnect();
		
		bool getData();
		bool insertData();

	private:
		std::string _dbUser;
		std::string _dbPass;
		std::string _dbName;
		std::string _dbHost;
};


#endif // DATABASE_H
