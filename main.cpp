// Program that keeps track of your friends!
// Wally Greathouse

#include <iostream>
#include <fstream>
#include "tracking.h"
using namespace std;

void usage();
bool new_user(string name);

int main(int argc, char** argv) {
	
	ofstream make_new;
	ifstream user;	
	string user_filename = ".data";	
	
	if(argc != 2) { usage(); return -1; }
	
	// need to see if users are already in the system
	
	// Check if user exists
	user_filename = argv[1] + user_filename;
	user_filename = "users/" + user_filename;

	cout << user_filename;
	cout << endl;
	
	user.open(user_filename);
	if(user.is_open() ) ;
	else { new_user(argv[1]); }

  return 0;
}


/* Helper Functions */

void usage() {
string usage = "usage: ./PerTrak username \n";
cerr << usage; }

bool new_user(string name) {
	
	cout << "A user of that name doesn't exist yet.\n";
	cout << "Would you like to add a user with the name \"";
	cout << name << "\"?\n" << "(y/n)\n";
	
	string temp;
	cin >> temp;
	
	int yeet = 0;
	while(!yeet) {
		if(temp == "y" || temp == "Y") return 1;
		else if(temp == "n" || temp == "N") return 0;
	
	} return -1; 
}
