#ifndef TILEMAP_HPP
#define TILEMAP_HPP

#include <vector>
#include <fstream>
#include <iostream>

#include "TileSet.hpp"

class TileMap
{
public:
	TileMap(const char* file, TileSet* tileSet);
	void load(const char* file);
	void setTileSet(TileSet* tileSet);
	int& at(int x, int y, int z=0);
	void render(int cameraX, int cameraY);
	void renderLayer(int layer, int cameraX, int cameraY);
	int getWidth() const;
	int getHeight() const;
	int getDepth() const;
private:
	std::vector<int> tileMatrix_;
	TileSet* tileSet_;
	int mapWidth_;
	int mapHeight_;
	int mapDepth_;
};

#endif