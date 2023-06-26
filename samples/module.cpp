#include <iostream>
#include <string>

using namespace std;

class Chatbot {
public:
  Chatbot() {}

  string respond(string input) {
    // TODO: Implement this function to generate a response to the input string.
    return input;
  }
};

int main() {
  Chatbot chatbot;
  string input;

  while (true) {
    cout << "Enter a message: ";
    cin >> input;

    string response = chatbot.respond(input);
    cout << "Chatbot: " << response << endl;
  }

  return 0;
}
