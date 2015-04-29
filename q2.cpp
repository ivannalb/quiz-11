# quiz-11
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

void check_banana (string filename){
  string line;
  string banana = "banana";
  int count = 0;

  ifstream myfile;
  myfile.open ("banana.txt");
  if (myfile.good() == true){
    while (getline (myfile, line)){
      transform(line.begin(),line.end(),line.begin(), ::tolower);
      if (line.find (banana) != string::npos){
        count ++;
      }
    }
    cout << "Number of times that 'banana' appears: " << count << endl;
  }
}



int main (){
  string name;

  cout << "Name of the file:" << endl;
  cin >> name;
  cout << endl;
  check_banana (name);
  return 0;
}
