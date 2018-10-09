#include <iostream>

int main (){
    int trials = 0 , x = 0 , op = 0 ,  total = 0 , max = 0 ;
    std::cin >> trials ;
    for (int i = 0 ; i < trials ; i++){
        std::cin >> op >> x ;
        if (op == 0){
            if (total < 0){
            total = 0 ;           
            }
            total = total + x ;
            if (total > max ){
                max = total ;
            }
        }    
        if (op == 1){
            if((total-x)<0)
            max = max -total+x;
            if (x>total && total > 0){
            total = x ;
            }
            total = total - x ;
            if (total < 0 && total*-1 > max){                
                max = total * -1 ;
            } 
        }
        
    }
    std::cout << max ;
}


/*

feeh mo4kela 2kbar mn el fat x)

int main (){
    int trials = 0 , x = 0 , op = 0 ,  total = 0 , max = 0 ;
    std::cin >> trials ;
    for (int i = 0 ; i < trials ; i++){
        std::cin >> op >> x ;
        if (x > total){
            if (op == 0)
            {
                total = total + x ;    
                if (max < total)
                {
                    max = total ;
                }    
            }           
            if (op == 1)
            {
                total = total - x ;

            if (total < 0 && total*-1 > max)
            {                
                max = total * -1 ;
            }
        }             
        if (x < total || x == total)
        {
            if (op == 1){
            total = total - x ;
                if (total < 0 && total*-1 > max)
                {                
                    max = total * -1 ;
                }
            }
            if (op==0)
            {
                total = total + x ;
                if (max < total)
                {
                    max = total ;
                }
            }    
        }        
    }
    std::cout << max ;
}
*/