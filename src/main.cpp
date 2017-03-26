#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <algorithm>
#include <ios>
#include <map>

using namespace std;
int N = 256;
//const char *FName="/home/semen/monkey/Cut.txt"; 
const char *FName="/etc/passwd"; 


void AltReadFile()
{
  std::ifstream f(FName);
  std::copy( std::istream_iterator<std::string>(f),
             std::istream_iterator<std::string>(),
             std::ostream_iterator<std::string>( std::cout, "\n" ) );
}

int main()
{
	map <string,int> words;
	
	ifstream in;
	in.open(FName);
	
	string word;
	
	while (in>>word)
	{
		words[word]++;
	}
	

	int count = 0;
	
	map <string,int>::iterator cur;
	
	cout<<"Words count:"<<endl;
	
	for (cur=words.begin();cur!=words.end();cur++)
	{
		cout<<(*cur).first<<": "<<(*cur).second<<endl;
		count+=(*cur).second;
	}
	
	cout<<"Words percenc:"<<endl;
	
	for (cur=words.begin();cur!=words.end();cur++)
	{
		cout<<(*cur).first<<": "<<(float)((float)(*cur).second/(float)count)*100<<"%"<<endl;
	}
	
return 0;
}


