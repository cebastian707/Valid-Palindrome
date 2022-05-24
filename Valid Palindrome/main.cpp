/*By::Cebastian Santiago 
* Leetcode 125
*/
#include<iostream>
#include<string>

bool isPalindrome(std::string s) {
	//if string is empty return true
	if (s.empty()) {
		return true;
	}

	//variables
	std::string temp = "";
	int right = 0;
	//loop through s and insert it into temp
	for (size_t i = 0; i < s.size(); i++) {
		if (isspace(s[i])){
			continue;
		}
		if (isalpha(s[i]) || isalnum(s[i])) {
			temp.push_back(tolower(s[i]));
		}
	}


	//the right pointer
	right = temp.size() - 1;

	//loop through string 
	for (size_t i = 0; i < temp.size(); i++) {
		//1.If not equal return false
		if (temp[i] != temp[right]) {
			return false;
		}
		

		//2.If i >= right return true
		if (i >= right){
			return true;
		}

		right--;
	}

	return true;
}


int main() {
	std::string s = "A man, a plan, a canal: Panama";


	std::cout << isPalindrome(s) << std::endl;

	return 0;
}