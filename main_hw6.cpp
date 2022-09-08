//Madison Passolano     ID: 12560375
//File: main_hw6.cpp        Date: 03/16/2020
//Description: loops through switch case to offer user different options on how 
//             to calculate different numbers using different math equations 

#include "head_hw6.h"

int main()
{
  /*----------variables------------*/
  const short USER_INPUT_MAX = 5; 
  const short USER_INPUT_MIN = 0; 

  short user_choice;
  float base_num; 
  float result; 

  bool quit = false; 
  bool base_num_entered = false; 

  /*------------body---------------*/
  greeting(); //outputs welcome 

  do
  {
    user_choice = menu_display(); 

    switch(user_choice)
    {
      case 1: 
        base_num = enter_base(); 
        cout<<"The base number (x) is "<<base_num<<endl; 
        base_num_entered = true; 
        break; 

      case 2: 
        if(base_num_entered == true)
        {
          result = pos_power(base_num); 
          cout<<"\nThe result is "<<result<<endl;  
          break; 
        }
        else
        {
          cout<<"Enter a base number first."<<endl; 
          break; 
        }

      case 3: 
        if(base_num_entered == true)
        {
          result = root(base_num); 
          cout<<"\nThe result is "<<result<<endl; 
          break; 
        } 
        else
        {
          cout<<"Enter a base number first."<<endl; 
          break; 
        }

      case 4:
        if(base_num_entered == true)
        {
          result = e_to_x(base_num); 
          cout<<"The result is "<<result<<endl; 
          break; 
        } 
        else
        {
          cout<<"Enter a base number first."<<endl; 
          break; 
        }

      case 5: 
        quit_prog();
        quit = true;  
        break;

      default: 
        user_choice = menu_input_check(user_choice, USER_INPUT_MAX, USER_INPUT_MIN);  
    }

  }while(quit != true); 

  



    


  return 0; 
}


