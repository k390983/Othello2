
void startup(){
	FILE *fp;
	fp = fopen(".\\log\\log.txt", "a");
	fprintf(fp, "\n%ld\n", time(NULL));
	srand(time(NULL));
	InitWindow(screenWidth, screenHeight, "Othello2");
	SetTargetFPS(60);
	fclose(fp);

}
