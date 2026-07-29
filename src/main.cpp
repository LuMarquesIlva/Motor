#include <iostream>

#include <Motor.h>

Motor motor;

std::vector<float> vertices = {
  // pos              // color
  0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,   // bottom right
  -0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f,  // bottom left
  0.0f, 0.5f, 0.0f,  0.0f, 0.0f, 1.0f     // top left
};

float Vert[] {
  // pos              // color
  0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,   // bottom right
  -0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f,  // bottom left
  0.0f, 0.5f, 0.0f,  0.0f, 0.0f, 1.0f     // top left
};

int main(void)
{

  while (motor.ShouldQuit != true) {
    motor.Update();
  }

  SDL_DestroyRenderer(motor.ren);
  SDL_DestroyWindow(motor.win);

  SDL_Quit();

  return 0;
}
