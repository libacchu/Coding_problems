#include <string>
bool solution(std::string const &str, std::string const &ending) {
  int len = str.length();
  int endLen = ending.length();
  
  if (len < endLen)
    return false;
  if (str.substr(len - endLen) == ending)
      return true;
  else
      return false;
}
