// zig c++ thing.cpp && ./thing
// author: slab
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str) {
	std::istringstream stream(str);
	std::string word;
	std::vector<std::string> words;

	while (stream >> word) {
		words.push_back(word);
	}

	return words;
}

int calc(const std::string op, const std::vector<int>& nums) {
	if (nums.empty()) {
		std::cout << "Invalid input" << std::endl;
		return 0;
	}

	int acc = nums[0];

	for (int i = 1; i < nums.size(); i++) {
		switch (op[0]) {
			case '+':
				acc += nums[i];
				break;
			case '-':
				acc -= nums[i];
				break;
			case '*':
				acc *= nums[i];
				break;
			case '/':
				acc /= nums[i];
				break;
			default:
				std::cout << "Invalid operator" << std::endl;
				return 0;
		}
	}

	return acc;
}

int main() {
	while (1) {
		std::string input;
		std::getline(std::cin, input);
		std::vector<std::string> words = split(input);

		if (words.empty()) break;
		std::string op = words[0];
		words.erase(words.begin());

		std::vector<int> nums;
		std::transform(words.begin(), words.end(), std::back_inserter(nums), 
					  [](const std::string& str) { return std::stoi(str); });

		std::cout << calc(op, nums) << std::endl;
	}
}
