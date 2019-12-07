
int board[8][8];
int cursor_x;
int cursor_y;
int turn;
int check();

const int screenHeight = 800;
const int screenWidth = 800;

void draw(){

	Vector2 position;
	char text[100];

	BeginDrawing();

	ClearBackground(GREEN);

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			position.x = 100 * (j + 1) - 50;
			position.y = 100 * (i + 1) - 50;

			if(i == cursor_y && j == cursor_x){
				DrawRectangle(100 * j, 100 * i, 100, 100, LIME);
			}

			if(board[i][j] == 1){
				DrawCircleV(position, 30, BLACK);

			}else if(board[i][j] == 2){
				DrawCircleV(position, 30, WHITE);

			}else if(check(j, i) == 1){
				DrawCircleV(position, 5, RED);

			}

		}

	}

	for(int i = 1; i < 8; i++){
		DrawLine(i * 100, 0, i * 100, 800, BLACK);
		DrawLine(0, i * 100, 800, i * 100, BLACK);

	}

	sprintf(text, "x: %d, y: %d", cursor_x, cursor_y);
	DrawText(text, 10, 10, 20, WHITE);

	EndDrawing();

}
