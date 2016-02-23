#include <stdio.h>
int y;//saves the y variable, used to save the user's input
int x;//used to determine the total per line during print
int i;//used to account for the columns in the print
int k;//used in a for loop to print out the total numbers determined by x
int o = 5;//used to determine the number of open spaces in the print function
int print_pattern(void)//prints out the diamond
{
  x = -1;//saves a necesariy number in order for the function to work
  for( i = 0; i < y; i++)//runs a loop for the columns
    {
      if(((y+1)/2) > i)//increases the diamond if it hasn't reached it's middle
	{
	  o--;//decreases the number of spaces
	  x = (x+2);//increases the number of numbers to be printed
	}
      else if(((y+1)/2) <= i)//decreases the diamond if it has reached it's middle
	{
	  o++;//increases the number of spaces
	  x = (x-2);//decreases the number of numbers to be printed
	}
      printf("%*s", o, "");//prints the spaces
      for(k = 1; k <= x; k++)//runs a for loop that will match the x value
	{
	  printf("%d", k);//prints out the individual numbers
	}
      printf("\n");//adds a space for the diamond
    }
}
int get_input(void)//runs the program and checks the inputted numbers
{
  printf("Enter a odd value between 3 and 9  > ");//prompts the user
  scanf("%d", &y);//records the users input
  if(y < 1)//makes sure that the input is within the bottom values
    {
      printf("Please follow the prompt, you have entered a value less than 1\n");//tells the user to follow directions
      get_input();//recursively runs the program if the value is less than 1
    }
  else if(y> 9)//makes sure that the input is within the top values
    {
      printf("Please follow the prompt, you have entered a value greater than 9\n");//recursively runs the program if the value is greater than 10
      get_input();//tells the user to follow directions
    }
  else if(y%2 == 0)//makes sure that the value is odd
    {
      printf("Please follow the prompt, you have entered an even value\n");//tells the user to follow directions
      get_input();//recursively runs the program if the value is even
    }
}
int main(void)//runs the program
{
  get_input();//runs the input program
  print_pattern();//runs the print program
}
