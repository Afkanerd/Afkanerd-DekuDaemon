#include "modem_listener.cxx"
#include "saitama.hpp"

int main() {
	/*string modem_index = "1";
	map<string,string> configs {
		{"DIR_SCRIPTS", "../../scripts"}
	};
	Modem modem( configs );
	modem.setIndex( modem_index );

	vector<map<string,string>> sms_messages = modem.get_sms_messages();

	for(auto sms_message : sms_messages) {
		for(auto component : sms_message) {
			logger::logger(__FUNCTION__, component.first + " -> " + component.second);
		}
		cout << endl;
	}

	saitama::configs = configs;

	// string message = "--:all_might:--";
	// saitama::execute( message );

	string message = "--:bash:-- gnome-terminal";
	saitama::execute( message );

	cout << "===========" << endl;

	message = "--:fore_sight:--";
	saitama::execute( message );
	*/

	string formatters = "652156811   ";
	string output = helpers::remove_char_advanced( formatters, ' ' );
	cout << output << endl;
	cout << output.size() << endl;

	return 0;
}
