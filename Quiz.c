#include<stdio.h>
#include<string.h> 
int main() { 
  char quest [11][200];
  char optionl [3][20],option2 [3][20], 
  option3 [3][20],option4 [3][20], 
  option5 [3][20],option6 [3][20],
  option7 [3][20],option8 [3][20],
  option9 [3][20],option10 [3][20],
  option11 [3][20];
  int response[10], correct_ans[11], option,i, marks;    
  strcpy(quest[0], "Who invented C Language?");  
  strcpy (optionl [0],"1. Charles Babbage");  
  strcpy(optionl[1] ,"2. Dennis Ritchie");  
  strcpy(optionl[2] ,"3. Steve Jobs");  
  correct_ans[0] = 1;  
  strcpy(quest[1], "C Language is a successor to which language.?");  
  strcpy(option2 [0],"1. D Language");  
  strcpy(option2[1], "2. BASIC");  
  strcpy(option2[2],"3. B Language");  
  correct_ans[1]=2;  
  strcpy(quest[2], " C is a which level language.?");  
  strcpy(option3 [0],"1.Low Level");  
  strcpy(option3[1] ,"2.High Level");  
  strcpy(option3 [2],"3.Low + High");  
  correct_ans[2]=1;  
  strcpy(quest[3], "C Language was developed in the year ____");  
  strcpy(option4 [0],"l.1970.");  
  strcpy(option4[1] ,"2.1975");  
  strcpy(option4[2] ,"3.1980");  
  correct_ans[3] = 0;  
  strcpy(quest[4], "Which one is not a reserve keyword in C Language?");  
  strcpy(option5[0],"l.auto");  
  strcpy(option5[1],"2.main");  
  strcpy(option5[2],"3.case");  
  correct_ans[4] = 1; 
  strcpy(quest[5], "C is _______ type of programming language.?");  
  strcpy(option6[0],"l. Object Oriented");  
  strcpy(option6[1],"2. Procedural");  
  strcpy(option6[2],"3. Functional");  
  correct_ans[5] = 1;
  strcpy(quest[6], "C language was invented in which laboratories.?");  
  strcpy(option7[0],"l. Uniliver Labs");  
  strcpy(option7[1],"2. IBM Labs");  
  strcpy(option7[2],"3. AT&T Bell Labs");  
  correct_ans[6] = 2;
  strcpy(quest[7], "BCPL Language is also called..?");  
  strcpy(option8[0],"l. B Language");  
  strcpy(option8[1],"2. C Language");  
  strcpy(option8[2],"3. None");  
  correct_ans[7] = 2;
  strcpy(quest[8], "C language was invented to develop which Operating System.?");  
  strcpy(option9[0],"l. Linux");  
  strcpy(option9[1],"2. Ubuntu");  
  strcpy(option9[2],"3. Unix");  
  correct_ans[8] = 2;
  strcpy(quest[9], "C language is used in the development of .?");  
  strcpy(option10[0],"l. Databases");  
  strcpy(option10[1],"2. Graphic Applications");  
  strcpy(option10[2],"3. All of the above");  
  correct_ans[9] = 2;
  strcpy(quest[10], "Prototype of a function means _____");  
  strcpy(option11[0],"l. Input of function");  
  strcpy(option11[1],"2. Output of function");  
  strcpy(option11[2],"3. Declaration of function");  
  correct_ans[10] = 2;
  do {  
    printf("\n\n\n\n QUIZ PROGRAM"); 
    printf("\n*******************"); 
    printf("\n 1. Display Questions");   
    printf("\n 2. Display Result");  
    printf("\n 3. EXIT");  
    printf ("\n *************************");  
    printf("\n\n\n Enter your option: ");  
    scanf("%d", &option);  
    switch(option)  {  
       case 1:    
           printf ("\n %s \n", quest [0]);   
           for(i=0;i<3;i++)   {   
              printf("\n %s", optionl[i]);   
           }   
           printf ("\n\n Enter your answer number: ");   
           scanf("%d", &response[0]);   
           printf ("\n %s \n", quest [1]);   
           for (i=0;i<3;i++)   {   
             printf("\n %s", option2[i]);   
           }   
           printf("\n\n Enter your answer number: ");   
           scanf("%d", &response[1]);   
           printf("\n %s \n", quest[2]);  
           for(i=0;i<3;i++)  {   
             printf("\n %s", option3[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [2]);   
           printf("\n %s \n", quest[3]);  
           for (i=0;i<3;i++)  {   
              printf("\n %s", option4[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [3]);   
           printf("\n %s \n", quest[4]);  
           for (i=0;i<3;i++)  {   
               printf("\n %s", option5[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [4] );
		    printf("\n %s \n", quest[5]);  
           for (i=0;i<3;i++)  {   
               printf("\n %s", option6[i]);
		    }
		    printf("\n\n Enter your answer number: ");   
            scanf ("%d", &response [5]);   
            printf("\n %s \n", quest[6]);  
            for (i=0;i<3;i++)  {   
               printf("\n %s", option7[i]);  
            }
			printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [6]);   
           printf("\n %s \n", quest[7]);  
           for (i=0;i<3;i++)  {   
               printf("\n %s", option8[i]);  
           }  
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [7]);   
           printf("\n %s \n", quest[8]);  
           for (i=0;i<3;i++)  {   
               printf("\n %s", option9[i]);  
           } 
		   printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [8]);   
           printf("\n %s \n", quest[9]);  
           for (i=0;i<3;i++)  {   
               printf("\n %s", option10[i]);  
           }
		   printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [9]);   
           printf("\n %s \n", quest[10]);  
           for (i=0;i<3;i++)  {   
               printf("\n %s", option11[i]);  
           }   
            printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [10]); 
           break;
         
       case 2:   
           marks = 0;  
           for(i = 0;i <= 10;i++)  {   
             if(correct_ans[i]+1==response[i])   {   
                marks++;   
             }  
           }   
           printf ("\n Out of 10 you score %d",marks);   
           break;  
    }  
  }  
      while(option!=4);
      return 0;
}
