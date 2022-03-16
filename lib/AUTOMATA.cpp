#include"AUTOMATA.h"

void Read_vec_from_line(const std::string& line, std::vector<std::string>& vec)
{
	std::string word;
	std::istringstream iss(line);
	while (iss >> word)
	{
		char last = word[word.size() - 1];
		if (last == ',' || last == '\n')
			word.pop_back();
		vec.push_back(word);
	}

}
const std::string& Automat::F(const std::string& A, const std::string& Q, Automat_functions type) const
{
    const std::string& s = (type == Automat_functions::Lambda) ? table.table_map.at(A).at(Q).first  : table.table_map.at(A).at(Q).second;
    return s;
}

void Automat::create_table()
{
    for (unsigned i = 0; i < states.size(); ++i)
    {
        for (unsigned int j = 0; j < in_alphabet.size(); ++j)
        {
            std::string s;
            std::cin >> s;
            int partition = s.find(',');
            std::string b = s.substr(0, partition);
            assert(std::find(out_alphabet.begin(), out_alphabet.end(), b) != out_alphabet.end());
            table.table_map[in_alphabet[j]][states[i]].first = b;
            std::string q = s.substr(partition + 1, s.size() - 1);
            assert(std::find(states.begin(), states.end(), q) != states.end());
            table.table_map[in_alphabet[j]][states[i]].second = q;
            if (j == in_alphabet.size() - 1)
                break;
            char symbol;
            std::cin >> symbol;
        }
    }
}














