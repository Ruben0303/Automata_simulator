#ifndef _ATM_H
#define _ATM_H
#include<iostream>
#include<set>
#include<string>
#include<sstream>
#include<unordered_map>
#include <cassert>
#include<algorithm>

class Table_Automat {
public:
	std::unordered_map<std::string, std::unordered_map<std::string, std::pair<std::string, std::string>>> table_map;
};
void Read_vec_from_line(const std::string& line, std::vector<std::string>& vec);

enum class Automat_functions {
	Lambda,
	Delta,
};
class Automat
{
private:
	std::vector<std::string> in_alphabet;
	std::vector<std::string> out_alphabet;
	std::vector<std::string> states;
	Table_Automat table;
public:
	Automat(const std::vector<std::string>& Input_Alphabet, const std::vector<std::string>& Out_alphabet, const std::vector<std::string>& states)
		: in_alphabet(Input_Alphabet), out_alphabet(Out_alphabet), states(states)
	{}
	const std::string& F(const std::string& A, const std::string& Q, Automat_functions type) const;
	void create_table();
};
#endif 




































