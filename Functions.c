#include"Functions.h"
int main( 
  char quest [11][200],
  char optionl [3][20],
  char option2 [3][20], 
  char option3 [3][20],
  char option4 [3][20], 
  char option5 [3][20],
  char option6 [3][20],
  char option7 [3][20],
  char option8 [3][20],
  char option9 [3][20],
  char option10 [3][20],
  char option11 [3][20],
  int response[11],int correct_ans[11], int option,int i, int marks){    
           marks = 0;  
           for(i = 0;i <= 10;i++)  {   
             if(correct_ans[i]+1==response[i])   {   
                marks++;   
             }  
           }        
      while(option!=4);
      return 0;
}