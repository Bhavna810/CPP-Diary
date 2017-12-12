#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	void set_firstname(string fname);
	string get_firstname();
	void set_lastname(string lname);
	string get_lastname();
	void set_gender(string gender);
	string get_gender();
	void set_age(int age);
	int get_age();
	void set_account(double acc_bal);
	double get_account();
private:
	string m_firstname;
	string m_lastname;
	string m_gender;
	int m_age;
	double m_account;
};

int main()
{
	
	return 0;
}
