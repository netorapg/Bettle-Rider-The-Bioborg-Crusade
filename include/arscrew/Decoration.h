// Decoration.h
#ifndef DECORATION_H
#define DECORATION_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Object.h"
#include "Sprite.h"
#include "Animation.h"

namespace ARSCREW
{
    class Decoration : public StaticObject 
    {
        private:
            Animation mAnimation;   
        public:
            Decoration
            (
                const Vector position, 
                const Vector size, 
                SDL_Texture* texture, 
                int tileId
            );
            void render
            (
                SDL_Renderer* renderer, 
                Vector cameraPosition
            ) 
            override;
    };
}
#endif