#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears){
  std::vector<int> v;
  int h=humanYears;
  if(h<2){
    v={1,15,15};
  }
  else{
    int x=h-3;
    v={h,28+4*x,29+5*x};
  }
  return v;
}

#include <string>
#include <vector>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string s;
  for(int i=0; i<repeat; i++){
   s+=str; 
  }
  return s;
}

#include <vector>

std::vector<int> between(int start, int end) {
  std::vector<int> v;
  for(int i=start; i<=end; i++){
    v.push_back(i);
  }
    return v;
}

std::string DNAtoRNA(std::string dna){
  std::replace(dna.begin(), dna.end(), 'T', 'U');
  return dna;
}

#include <vector>

std::vector<int> between(int start, int end) {
  std::vector<int> v;
  for(int i=start; i<=end; i++){
    v.push_back(i);
  }
    return v;
}  

#include <string>
#include <vector>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string s;
  for(int i=0; i<repeat; i++){
   s+=str; 
  }
  return s;
}

using namespace std;

string replace(string s) {
  string vowels = "aeiouAEIOU";
  for (auto& c : s) if (vowels.find(c) != string::npos) c = '!';
  return move(s);
}

#include <string>
#include <regex>

using namespace std;

string replace(const string &w)
{
  return regex_replace(w, regex("[aeiouAEIOU]"), "!");
}

#include <iostream>
#include <vector>
#include <cmath>

int index(const std::vector<int> &vector, int n) {
    try {
        return std::pow(vector.at(n), n);
    } catch (std::out_of_range const& exc)
    {};
    return -1;

using namespace std;

string replace(string s) {
  string vowels = "aeiouAEIOU";
  for (auto& c : s) if (vowels.find(c) != string::npos) c = '!';
  return move(s);
}

#include <string>
#include <iostream>
using namespace std;
std::string replace(const std::string &s)
{
	string answer;
	int string_length = s.length();
	for (int x = 0; x < string_length; x++){
		char temp = s.at(x);
		
		if (temp == 'a' || temp == 'A' || temp == 'e' || temp == 'E' || temp == 'i' || temp == 'I' || temp == 'o' || temp == 'O' || temp == 'u' || temp == 'U'){
			answer += '!';
		} else {
			answer += temp;
		}
	}
    return answer; //coding and coding....
}

using namespace std;

string replace(const string &s)
{
  std::string result = s;
  std::replace( result.begin(), result.end(), 'a', '!');
  return result; //coding and coding....
}

#include <string.h>
using namespace std;

string replace(const string &s) {
  string res = s;
  for (char &c:res) {
    if (strchr("aiueoAIUEO", c) != NULL) c = '!';
  }
  return res;
}

std::string replace(std::string s) {                                               
  std::string st = "aeiouAEIOU";
  for (auto& c: s)
    if (st.find(c) != std::string::npos)
      c = '!';
  return s; 
}

using namespace std;

string replace(const string &s)
{
    string vowels = "aeiouAEIOU";
    string ss=s;

    while (ss.find_first_of(vowels) != string::npos) {
        ss[ss.find_first_of(vowels)] = '!'; 
    }
    return ss;
}

#include <utility>
#include <cmath>

using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3) {
  double x0,y0;
  x0 = round((p1.first+p2.first+p3.first)/3*10000)/10000;
  y0 = round((p1.second+p2.second+p3.second)/3*10000)/10000;
  return {x0, y0};
}

#include <string>

std::string removeExclamationMarks(std::string str){
  str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
  return str;
}

#include <string>
#include <regex>

std::string removeExclamationMarks(std::string str){
  return std::regex_replace(str, std::regex ("!"), "");
}

std::string removeExclamationMarks(const std::string &str)
{
  std::string r{ str };
  for (int i { 0 }; i < r.size(); i++)
  { 
  if (r[i] == '!') 
      { 
          r.erase(i,1);
          i--;
      }
  }
  return r;
}

#include <regex>

using namespace std;

string removeExclamationMarks(const string &s)
{
    regex e("!");
    return regex_replace(s, e, "");
}

#include <string>

std::string removeExclamationMarks(std::string str){
  std::string res;
  std::remove_copy(str.begin(), str.end(),
                   std::back_inserter(res), '!');
  return res;
}

#include <vector>
#include <cmath>
int index(const std::vector<int> &vector, int n) {
  return n >= (int)vector.size() ? -1 : std::pow(vector[n], n);
}

std::vector<std::string> solution(const std::string &s) {
    std::vector <std::string> res;
    for (int i = 0; i < s.length(); i += 2) res.push_back(s.substr(i, 2));
    if (s.length() % 2) res[res.size() - 1] += "_";
    return res;
}