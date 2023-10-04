/*
  This is the first task!
  1 - Write a function which receive a vector and revert the values positions:

*/
#include <iostream>
#include <vector>

using namespace std ;

/*
 *\Funcion print values of a vector
 *\param vec a vector of integers 
*/

void revertVector(){
    /* Write your code here */
    
}
void print_vector(const std::vector<int> &vec){
  
  cout << endl;
  
  for (auto val : vec){
    cout << "| " << val ;
  }
  
  cout <<"|" << endl;
}

int main (){
  
  std::vector<int> original = {0, 1, 2, 3, 4, 5, 6 , 7, 8, 9};
  print_vector(original);
  
  //revertVector(original);

}
