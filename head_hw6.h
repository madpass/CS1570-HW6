//Madison Passolano     ID: 12560375
//File: head.h          Date: 03/16/2020
//Description: declares the prototypes of the functions and is where template 
//             functions are kept 

#ifndef HEAD_HW6_H
#define HEAD_HW6_H

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std; 

/*-------------prototypes---------------*/
void greeting(); 
//Desc: greeting() funct displays greeting message
//Pre: none
//Post: message is displayed 

short menu_display(); 
//Desc: menu_display() funct displays menu and asks for choice 
//Pre: none 
//Post: user_choice is 

short menu_input_check(const short choice, const short max, const short min); 
//Desc: menu_input_check() funct makes sure the user_choice is within 1-5
//Pre: choice must not be between 1-5
//Post: error statement is outputted and user is returned to menu 

template<typename T> 
void result_check(const T input)
{ 
  short zero = 0; 
  if(input<static_cast<T>(zero))
  {
    cout<<"\nInvalid input... Only enter positive numbers."<<endl; 
  }
  return; 
}
//Desc: result_check() funct ensures the user_input is positive 
//Pre: none 
//Post: the value of input is returned, if it is negative, an error message is returned as well

float enter_base();
//Desc: enter_base() funct prompts user for the x value in the problems 
//Pre: none 
//Post: base_num can now be used within the other options and the other options 
//      can be chosen 

float pos_power(const float base); 
//Desc: pos_power() funct raises the base to an exponent 
//Pre: positive base value 
//Post: returns positive value of base raised to an exponent 

double root(const float base); 
//Desc: root() funct find the root of a base number to another number 
//Pre: positive base value
//Post: returns the nth root of the base 


float e_to_x(const float x); 
//Desc: e_to_x() funct find the value of e to the base number 
//Pre: positive x value 
//Post: returns e to the x 

void quit_prog(); 
//Desc: quit() funct displays a goodbye message 
//Pre: none 
//Post: goodbye message displayed, and program terminates 



/*-------------template functs----------*/


#endif 




