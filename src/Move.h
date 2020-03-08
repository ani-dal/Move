#ifndef move_h
#include <iostream>

   #define move_h
   #if defined (ARDUINO)
		#include <Arduino.h>
   #else
   #endif
   #if defined(__arm__)
    #include <wiringPi.h>
   #endif
class Move{

  public:
   Move(uint8_t,uint8_t,uint8_t,uint8_t, unsigned int,unsigned int);
   void forward(uint8_t,uint8_t);
   void backward(uint8_t,uint8_t);
   void left(uint8_t,uint8_t);
   void right(uint8_t,uint8_t);
   void slight_left(uint8_t,uint8_t);
   void slight_right(uint8_t,uint8_t);
   void stop(uint8_t l, uint8_t r);
  private:
   uint8_t _pin1,_pin2,_pin3,_pin4;
  
   unsigned int _e1,_e2;


};


#endif
