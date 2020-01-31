#include <map>
#include <vector>
#ifndef MODEM_LISTENER_H_INCLUDED_
#define MODEM_LISTENER_H_INCLUDED_
using namespace std;

class Modem {
	string index;
	public:
		Modem();

		void setIndex( string index );
		void setIMEI( string IMEI );
		void setISP( string ISP );

		string getIndex();
};

class Modems {
	vector<Modem> modemCollection;
	public:
		Modems();
		void __INIT__();
		
		vector<string> getAllIndexes();
		vector<string> getAllISP();
		vector<string> getAllIMEI();
		~Modems(){}
};

#endif
