#include<stdio.h>
#include<conio.h>

void main()
{
	char grade;
	int mark;
	
	printf("enter your mark");
	scanf("%d",&mark);
	
	grade=(mark>=90&&mark<=100)?
	'a'
	 :(mark>=80&&mark<90)?'B'
	 :(mark>=70&&mark<80)?'c'
	 :(mark>=60&&mark<70)?'D'
	 :(mark>=50&&mark<60)?'E'
	 :'F';
	 
	 printf("your grade is %c",grade);
	 scanf("%c",grade);
	 
	 switch(grade)
	 {
	 	case'a':printf("your work is excellent");
	 	break;
	 	case'b':printf("well done");
	 	break;
	 	case'c':printf("good job");
	 	break;
	 	case'd':printf("you passed,but cloud you better");
	 	break;
	 	case'e':printf("passed");
	 	break;
	 	case'f':printf("sorry,you are fail");
	 	break;
	 }
	  if(grade=='a'||grade=='b'||grade=='c'||grade=='d'||grade=='e')
	  
	  {
	  	 printf("you are eligible for the next level");
	  }
	  else
	  {
	  	 printf("you are try again next time");
	  }
}