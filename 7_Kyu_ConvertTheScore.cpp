#include <vector>
#include <string>

std::vector<int> scoreboard(const std::string &s) {

  using std::vector;
  std::vector<int> ans;
	using std::string;
	std::cout << s << std::endl;
	size_t pos = 0;
	vector<string> temp;

	while (ans.size() != 2) {

		if (s.find("one", pos) != string::npos) {
			ans.push_back(1); temp.push_back("one");
		}
		if (s.find("two", pos) != string::npos) {
			ans.push_back(2); temp.push_back("two");
		}
		if (s.find("three", pos) != string::npos) {
			ans.push_back(3); temp.push_back("three");
		}
		if (s.find("four", pos) != string::npos) {
			ans.push_back(4); temp.push_back("four");
		}
		if (s.find("five", pos) != string::npos) {
			ans.push_back(5); temp.push_back("five");
		}
		if (s.find("six", pos) != string::npos) {
			ans.push_back(6); temp.push_back("six");
		}
		if (s.find("seven", pos) != string::npos) {
			ans.push_back(7); temp.push_back("seven");
		}
		if (s.find("eight", pos) != string::npos) {
			ans.push_back(8); temp.push_back("eight");
		}
		if (s.find("nine", pos) != string::npos) {
			ans.push_back(9); temp.push_back("nine");
		}
		if (s.find("nil", pos) != string::npos) {
			ans.push_back(0); temp.push_back("nil");
		}

		if (temp.size() == 2) {
			pos = s.find(temp[0]);
			if (pos > s.find(temp[1])) { int temp = ans[1]; ans[1] = ans[0]; ans[0] = temp; }
		}
		else pos = s.find(temp[0]);
	}

  return ans;
}
