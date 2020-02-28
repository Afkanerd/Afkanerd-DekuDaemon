#include <thread>
#ifndef MODEM_H_INCLUDED_
#define MODEM_H_INCLUDED_
using namespace std;

class Modem {
	string index;
	string isp;
	string imei;
	string errorLogs;

	bool keepAlive = false;
	bool thread_safety = false;
	map<string,string> configs;

	
	public:
		enum STATE {TEST, PRODUCTION};
		enum TYPE{SSH, MMCLI};

		STATE state;
		Modem(map<string,string> configs, STATE state = TEST );
		Modem(const Modem& modem);
		~Modem();

		void setIndex( string index );
		void setIMEI( string IMEI );
		void setISP( string ISP );
		void setKeepAlive( bool keepAlive);
		void start();
		void setThreadSafety( bool thread_safety );
		void setType( string type );

		string getIndex() const;
		string getISP() const;
		string getIMEI() const;
		string getErrorLogs();
		string getInfo() const;
		TYPE getType() const;

		explicit operator bool() const;
		bool operator==(Modem modem) const;
		bool operator==(Modem* modem) const;
		bool operator>(Modem modem) const;
		bool operator<(Modem modem) const;

		bool end();
		bool send_sms(string message, string number);
		bool mmcli_send_sms(string message, string number);
		bool ssh_send_sms(string message, string number);
		bool getKeepAlive() const;
		bool getThreadSafety() const;

		map<string,string> request_job( string path_dir_request );
		map<string,string> getConfigs() const;
	private:
		TYPE type;
};

#endif