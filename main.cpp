#include<raylib.h>
using namespace std;

int main() {
	int length = 800;
	int width = 800;
	InitWindow(width, length, "Following Mouse");
	SetTargetFPS(60);	
	Color bgcolor[5] = { RED,GREEN,BLUE,YELLOW,PURPLE };
	int radius[5] = { 120,100,80,60,40 };
	int CXaxis = 200;
	int CYaxis = 200;
	int X,Y;
	while (!WindowShouldClose()) {

		BeginDrawing();
		ClearBackground(BLACK);
		CXaxis = GetMouseX();
		CYaxis = GetMouseY();
		if (CXaxis <= 400)
			X = CXaxis + 80;
		else
			X = CXaxis - 80;
		if(CYaxis <= 400)
		   Y = CYaxis + 80;
		else
			Y = CYaxis - 80;


		for (int i = 0; i < 4;i++) {
			DrawCircle(X, Y, radius[i], bgcolor[i]);
			if (CYaxis <= 400)
				Y -= 20;
			else
				Y += 20;

			if (CXaxis <= 400) {
				X -= 20;
			}
			else {
				X += 20;
			}
		}
		

		DrawCircle(CXaxis , CYaxis , radius[4], bgcolor[4]);
	

		
	
		EndDrawing();
	}
}

