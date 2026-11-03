#include <iostream> 
int main(){
    int num ;

     std::cout<< " Enter the number: ";
     std::cin>>num ;
     if (num <= 0) {
    std::cout << "Please enter a positive number.\n";
    return 0;
}

    int evencount=0;
    int oddcount=0;
    int i ;
    int j ;
    int sum= 0 ;
    int evensum= 0 ;
    int oddsum = 0 ;
    for(i= 1 ; i<=num ; i++){
      sum+=i;
       if (i%2 == 0){
        evencount++
        ;evensum+=i;
       } 
       else {
        oddcount++;
        oddsum+=i;
       }
  
         
    }
    for ( j =1 ; j<=10 ; j++){
          std::cout << num << "x" << j << " = " << num * j << '\n';}
      std::cout<<"Even Count ="<< evencount<<'\n';
       std::cout<<"Odd Count ="<< oddcount<< '\n' ;
       std::cout<<"Total Sum ="<< sum << '\n';
       std::cout<<"Even Sum ="<<  evensum<< '\n';
       std::cout<< "Odd Sum ="<< oddsum << '\n';
       
       return 0;

}

