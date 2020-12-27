class Solution {
public:
  int romanToInt(string s) {
    int out=0;
    map<char, int> m;
    
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    
    for (int i=0; i<s.length(); ++i) {
      if (s[i]=='I' && s[i+1]=='V') {
        out += 4;
        ++i;
      } else if (s[i]=='I' && s[i+1]=='X') {
        out += 9;
        ++i;
      } else if (s[i]=='X' && s[i+1]=='L') {
        out += 40;
        ++i;
      } else if (s[i]=='X' && s[i+1]=='C') {
        out += 90;
        ++i;
      } else if (s[i]=='C' && s[i+1]=='D') {
        out += 400;
        ++i;
      } else if (s[i]=='C' && s[i+1]=='M') {
        out += 900;
        ++i;
      } else {
        out += m[s[i]];
      }
    }
    
    return out;
  }
};