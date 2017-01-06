#ifndef EIP_H
#define EIP_H

class Eip {
	public:
		void connect();
		void disconnect();

		bool sendData();
		bool recvData();

	private:
		std::string _plsIp;
		std::string _plsPort;		
};

#endif // EIP_H
