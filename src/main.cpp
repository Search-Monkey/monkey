#include <iostream>
#include <fstream>
#include <string>

// # For Alternative Read
#include <iterator>
#include <algorithm>
#include <ios>

//for map
#include <map>

using namespace std;
int N = 256;
//const char *FName="/home/semen/monkey/Cut.txt"; 
//const char *FName="/etc/passwd"; 
const char *FName="/tmp/t"; 
#if 0 

// C - style iterator
char *begin = FName;
char *end = ptr + strlen(FName);

while ( begin != end )
{
	doSmth( *begin );
	begin++;
}

// C++ style
const std::string FName="/etc/passwd"; 
std::string::const_iterator begin = FName.begin();
auto end = FName.end();
while ( begin != end )
{
	doSmth( *begin );
	begin++;
}


// Stream

auto first = std::istream_iterator<char>(f >> std::noskipws);
auto last = std::istream_iterator<char>();
auto out = std::ostream_iterator<char>( std::cout );
while ( first != last )
{
	*out = *first;
        out++;
	first++;
}


  std::copy( begin, end,  
             );

#endif

void AltReadFile()
{
  std::ifstream f(FName);
  std::copy( std::istream_iterator<std::string>(f),
             std::istream_iterator<std::string>(),
             std::ostream_iterator<std::string>( std::cout, "\n" ) );
}

#if 0
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
#endif

//Map
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
	
	ofstream out;
	out.open("out.txt");
	
	int count = 0;
	
	map <string,int>::iterator cur;
	
	out<<"Words count:"<<endl;
	
	for (cur=words.begin();cur!=words.end();cur++)
	{
		out<<(*cur).first<<": "<<(*cur).second<<endl;count+=(*cur).second;
	}
	
	out<<"Words percenc:"<<endl;
	
	for (cur=words.begin();cur!=words.end();cur++)
	{
		out<<(*cur).first<<": "<<(float)((float)(*cur).second/(float)count)*100<<"%"<<endl;
	}
	

//AltReadFile();
#if 0
	char c; 
	const char separator[]=" "; 
	char S[]="Строка, которая будет разбита на отдельные слова ";
	char *Ptr=NULL;
	map <char, int> Map;
        int i=0;
		Ptr=strtok(S,separtor); 
while (Ptr)
	{
	   Map.insert( pair<char,int>(Ptr,i))
	   Ptr=strtok(0,separator);
	}
#endif
return 0;
}


