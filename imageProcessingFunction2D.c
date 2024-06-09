#define ROWS 1080
#define COLS 1920

int Adjust(int image[ROWS][COLS])
{
    for (int row = 0; row < ROWS; row++){
        for (int col = 0; col < COLS; col++){
            image[row][col] = image[row][col] / 2; // This function divides each pixel by 2.
        }
    }
}