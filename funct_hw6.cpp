//Madison Passolano     ID: 12560375
//File: funct_hw6.cpp       Date: 03/16/2020
//Description: functions 

#include "head_hw6.h"

//making the functions in here except for templates 

void greeting()
{
  cout<<"\n\nWelcome to the best ever calculator."<<endl<<endl; 
}



short menu_display()
{
  short choice; 
  cout<<"\n\tMENU"<<endl; 
  cout<<"\t----"<<endl; 
  cout<<"1. Enter base number (x)"<<endl; 
  cout<<"2. Power of the number (x^n)"<<endl; 
  cout<<"3. Root of the number (x^1/n)"<<endl; 
  cout<<"4. Find e raised to the number (e^x)"<<endl; 
  cout<<"5. Quit"<<endl; 
  cout<<endl;  

  cout<<"Please enter a choice: "; 
  cin>>choice; 
  cout<<endl; 

  return choice; 
}



short menu_input_check(const short choice, const short max, const short min)
{ 
  if(min>choice || choice>max)
  {
    cout<<"Invalid input... Only enter numbers from 1-5.\n"<<endl; 
  } 

  return choice; 
}



float enter_base()
{
  float base_num; 
  do
  {
    cout<<"Enter a base number: "; 
    cin>>base_num;
    cout<<endl;  
    result_check(base_num); 
    //sends to template in h file 
  }while(base_num<0); 

  return base_num; 
}



float pos_power(const float base)
{
  int expo;
  float result = 1;  
  do
  {
    cout<<"Enter the exponent: "; 
    cin>>expo; 
    result_check(expo); 
  }while(expo<0);
  //while the exponent is negative 

  for(int i=0; i<expo; i++)
  {
    result = result * base; 
    //formula for finding the power of the base to another number 
  }

  return result; 
}



double root(const float base)
{
  short root_val;  
  do
  {
    cout<<"Enter the root value: "; 
    cin>>root_val; 
    result_check(root_val); 
  }while(root_val<0); 

  double result = base; 
  for(int i=1; i<20; i++)
  {
    result = (root_val-1)*result + (base/pow(result, root_val-1)); 
    result = result / root_val; 
    //finds the nht root of the base 
  }

  return result; 
}



float e_to_x(const float base)
{
  //no user input 
  float sum = 1.0; 
  for(int i=11; i>0; i--)
  {
    sum = 1+base * sum/i; 
    //finds the e to the base val 
  }

  return sum; 
}



void quit_prog() 
{
  cout<<"Ending program..."<<endl<<endl<<endl; 
  //good bye message 
  return; 
}















