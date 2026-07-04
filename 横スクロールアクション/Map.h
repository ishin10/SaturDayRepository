#pragma once
class Map
{
private:

	float worldX;
	float worldY;
public:
	//コンストラクタ
	Map(float world, float worldY);

	//描画
	void Draw(float cameraX);
};

