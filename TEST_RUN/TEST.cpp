#include"AUTOMATA.h"

int main()
{

	std::string word1;
	std::string word2;
	std::string word3;
	std::getline(std::cin, word1);
	std::getline(std::cin, word2);
	std::getline(std::cin, word3);
	std::vector<std::string> A;
	Read_vec_from_line(word1, A);
	std::vector<std::string> B;
	Read_vec_from_line(word2, B);
	std::vector<std::string> Q;
	Read_vec_from_line(word3, Q);
	Automat TA(A, B, Q);
	TA.create_table();

	int size;
	std::cout << "TYPE INPUT SIZE AND INPUT USING ONLY ALPHABET WORDS:";
	std::cin >> size;
	std::vector<std::string> inputs(size);
	std::string cur_state = Q[0];
	std::vector<std::string> results;
	for (int i = 0; i < size; ++i)
	{

		std::cin >> inputs[i];
		results.push_back(TA.F(inputs[i], cur_state, Automat_functions::Lambda));
		cur_state = TA.F(inputs[i], cur_state, Automat_functions::Delta);
	}
	std::cout << "\nRES\n";
	for (auto& el : results)
		std::cout << el << " ";
	return 0;
}
