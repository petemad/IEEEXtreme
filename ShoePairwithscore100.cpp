#include <iostream>

struct shoe {
int size = 0 ;
char lr ;
bool check = false ;
};

int main (){

int n = 0;
std::cin >> n ;
shoe shoes[n] ;

for (int i=0 ; i<n ; i++ ){
   
   std::cin >> shoes[i].size >> shoes[i].lr   ;
}

int pairs = 0 ;

for (int j = 0 ; j < n ; j++){
    for (int x = 1 ; x < n ; x++)
    {   
        if (shoes[j].lr!=shoes[x+1].lr && shoes[j].size == shoes[x+1].size && shoes[j].check==false && shoes[x+1].check==false )
        {
            shoes[j].check=true ;
            shoes[x+1].check=true ;
            pairs++;
        }
    }
}
std::cout <<  pairs ;
return 0 ;

}
