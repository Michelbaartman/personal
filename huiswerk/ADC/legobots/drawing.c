int limitX = 99;
int limitY = 63;

void draw_light(int value1, int value2)
{
	for(i = 0; i < limitX; i++){
		for(j = 0; j < 4; j++){
			nxtClearPixel(i, j);
		}
	}
	
	for(i = 0; i < value1; i++){
		nxtSetPixel(i, 0;
		nxtSetPixel(i, 1);
	}
	
	for(i = 0; i < value2; i++){
		nxtSetPixel(i, 2;
		nxtSetPixel(i, 3);
	}
}