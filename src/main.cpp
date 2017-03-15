#include <iostream>
#include <fstream>
using namespace std;
int N = 256;
//const char *FName="/home/semen/monkey/Cut.txt"; 
const char *FName="/etc/passwd"; 
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
ReadFile();
return 0;
}
