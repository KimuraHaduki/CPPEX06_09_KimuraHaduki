#pragma once

class Box{
private:
	float width;
	float height;
	float depth;

public:
	Box(float width,float height,float depth); //コンストラクタ
	float GetSurface();
	float GetVolume();
};