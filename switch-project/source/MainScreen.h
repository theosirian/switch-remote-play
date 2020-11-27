#ifndef __MAINSCREEN_H__
#define __MAINSCREEN_H__

#include <SDL2/SDL_render.h>
#include <string>
#include "network/NetworkDiscovery.h"
#include "SDL_FontCache.h"
#include "ui/FFMPEGConfigUI.h"

SDL_Color constexpr black = {0,0,0, 255};
SDL_Color constexpr green = { 100, 200, 100, 255 };
SDL_Color constexpr red = { 200, 100, 100, 255 };
SDL_Color constexpr blue = {100, 100, 200, 255};
extern FFMPEGConfigUI configRenderer;

void SetupMainScreen();

void RenderMainScreen(SDL_Renderer * const renderer, FC_Font * const systemFont);

void RenderNetworkStatus(SDL_Renderer * const renderer, FC_Font * const systemFont, NetworkDiscovery const * network);
void RenderNetworkStatus(SDL_Renderer * const renderer, FC_Font * const systemFont, NetworkDiscovery const & network);

void RenderPendingConnectionScreen(SDL_Renderer * const renderer, FC_Font * const systemFont);


#endif