#pragma once
#ifndef Playlist_h
#define Playlist_h
#include <string>
#include <iostream>
#include "Playlist.h"

using namespace std;

class Playlist
{
public:
   Playlist(string playlistName);
   ~Playlist();

private:
   string name;
};

#endif 
