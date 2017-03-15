#include <iostream>
#include <fstream>

// # For Alternative Read
#include <iterator>
#include <algorithm>
#include <ios>


using namespace std;
int N = 256;
//const char *FName="/home/semen/monkey/Cut.txt"; 
const char *FName="/etc/passwd"; 
void AltReadFile()
{
  std::ifstream f(FName);
  std::copy( std::istream_iterator<char>(f >> std::noskipws),
             std::istream_iterator<char>(),
             std::ostream_iterator<char>( std::cout ) );
}

void ReadFile()
{
  cout<<endl<<"ReadFile:  "; 
  char S[N]={""}; 
      ifstream in1(FName); 
	 while (!in1.eof()) 
	   {
	     in1.getline(S,N); 
	     cout<<S<<endl; 
	   }
       in1.close();
}
int main()
{
  //AltReadFile();
  ReadFile();
return 0;
}
