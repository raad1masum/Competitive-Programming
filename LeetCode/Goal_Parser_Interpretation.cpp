class Solution {
public:
  string interpret(string command) {
    string out;
    for (int i=0; i<command.length(); ++i) {
      if (command[i]=='G' || command[i]=='a' || command[i]=='l') {
        out += command[i];
      } else if (command[i]=='(' && command[i+1]==')') {
        out += 'o';
      }
    }
    return out;
  }
};