#include "Move.h"

Move::Move(uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, unsigned int e1, unsigned int e2)
{
    pinmode(pin1, OUTPUT);
    pinmode(pin2, OUTPUT);
    pinmode(pin3, OUTPUT);
    pinmode(pin4, OUTPUT);
    pinmode(e1, OUTPUT);
    pinmode(e2, OUTPUT);

    _pin1 = pin1;
    _pin2 = pin2;
    _pin3 = pin3;
    _pin4 = pin4;
    _e1 = e1;
    _e2 = e2;
}

void Move::forward(uint8_t l, uint8_t r)
{
    analogWrite(_e1, l);
    analogWrite(_e2, r);
    digitalWrite(_pin1, LOW);
    digitalWrite(_pin2, HIGH);
    digitalWrite(_pin3, LOW);
    digitalWrite(_pin4, HIGH);
  
}
void Move::backward(uint8_t l, uint8_t r)
{
    analogWrite(_e1, l);
    analogWrite(_e2, r);
    digitalWrite(_pin1, LOW);
    digitalWrite(_pin2, HIGH);
    digitalWrite(_pin3, LOW);
    digitalWrite(_pin4, HIGH);

}
void Move::left(uint8_t l, uint8_t r)
{
    analogWrite(_e1, l);
    analogWrite(_e2, r);
    digitalWrite(_pin1, LOW);
    digitalWrite(_pin2, HIGH);
    digitalWrite(_pin3, HIGH);
    digitalWrite(_pin4, LOW);

}
void Move::slight_left(uint8_t l, uint8_t r)
{
    analogWrite(_e1, l + 10);
    analogWrite(_e2, r );
    digitalWrite(_pin1, LOW);
    digitalWrite(_pin2, HIGH);
    digitalWrite(_pin3, HIGH);
    digitalWrite(_pin4, LOW);

}

void Move::right(uint8_t l, uint8_t r)
{
    analogWrite(_e1, l);
    analogWrite(_e2, r);
    digitalWrite(_pin1, HIGH);
    digitalWrite(_pin2, LOW);
    digitalWrite(_pin3, LOW);
    digitalWrite(_pin4, HIGH);

}

void Move::slight_right(uint8_t l, uint8_t r)
{
    analogWrite(_e1, l);
    analogWrite(_e2, r + 10);
    digitalWrite(_pin1, HIGH);
    digitalWrite(_pin2, LOW);
    digitalWrite(_pin3, LOW);
    digitalWrite(_pin4, HIGH);

}
void Move::stop(uint8_t l, uint8_t r)
{
    analogWrite(_e1, l);
    analogWrite(_e2, r);
    digitalWrite(_pin1, LOW);
    digitalWrite(_pin2, LOW);
    digitalWrite(_pin3, LOW);
    digitalWrite(_pin4, LOW);

}
