#include <SDL2/SDL.h>

#define HEIGHT 480
#define WIDTH 600
#define SNAKE_SIZE 30

class Playground {
public:
  Playground(int nbrow, int nbcol);
  ~Playground();
  SDL_Renderer *GetRenderer();
  int Init(SDL_Renderer* renderer);
private:
  int nbrow;
  int nbcol;
};