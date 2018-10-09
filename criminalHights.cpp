#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>


struct crime {
std::string name ;
int hight = 0 ;
};

bool cmp (crime & a , crime & b){
    return a.hight > b.hight ;
}


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


std::sort(data , data+size , cmp) ;
int x = 1 ;
for (int j = 0 ; j < size ; j++)
{
std::cout << data[j].name ;
if (data[j+1].hight < data[j].hight ){
    std::cout<< x << " " << j+1 << std ::endl ;
    x=j+1 ;
}
}

}






