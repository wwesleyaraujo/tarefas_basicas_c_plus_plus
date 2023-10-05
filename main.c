/*
  This is the first task!
  1 - Write a function which receive a vector and revert the values positions:

*/
#include <stdio.h>


/*
 *\Funcion print values of a vector
 *\param vec a vector of integers 
*/

void revertVector(){
    /* Write your code here */
        
}
void print_vector(int vet[], int tam){
  
    for(int i = 0; i < tam; i++){
        printf(" | %d", vet[i]); 
    }   

    printf("|\n"); 
}

int main (){ 
  int tam = 10; 
  int original[] = {0, 1, 2, 3, 4, 5, 6 , 7, 8, 9}; 
  print_vector(original, tam);
  
  //revertVector(original);

}
