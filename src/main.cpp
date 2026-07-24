#include <iostream>

#include <Motor.h>

Motor _Motor;

float vertices[] = {
  // pos              // color
  0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,   // bottom right
  -0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f,  // bottom left
  0.0f, 0.5f, 0.0f,  0.0f, 0.0f, 1.0f     // top left
};

int main(void)
{
  int initVal = _Motor.InitWindow();

  return initVal;
}
