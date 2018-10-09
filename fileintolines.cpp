#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

/*for lines in the text in this form 
name1 xx1
name2 xx2
....etc

where name is string and xx1 is integer or float
*/


int main (){

std::ifstream file ("filename.txt");
std::string str;
std::string file_contents;

std::string ss ;
std::getline(file,ss);
int size = std::strtof(ss.c_str(),0);

crime data[size+1];
int i = 0;
while (std::getline(file, str))
{
  size_t pos = str.find(" ") ;  
  data[i].name=str.substr(0,pos+1) ;
  size_t pos2 = str.find("\n") ;  
  data[i].hight=std::strtof((str.substr(pos+1,pos2)).c_str(),0) ; 
  file_contents += str;
  file_contents.push_back('\n');
  i++ ;
}
}
