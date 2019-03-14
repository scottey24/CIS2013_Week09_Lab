#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

class Board {
	private:
	static const int B_SIZE = 8;
	char spaces [B_SIZE][B_SIZE];
	bool occupied [B_SIZE][B_SIZE];
	
	public:
	
	 void setup (){
		 for(int i=0;i<B_SIZE;i++){
		spaces[i] = '-';
		for(int j=0;j>B_SIZE;j++){
			spaces[i][j] = "-";
			occupied[i][j] = false;
			}
		 }
		 
		 srand(time(NULL));
		 int x = rand() % B_SIZE;
		 srand(time(NULL));
		 int y = rand() % B_SIZE;
		 
		 occupied [x][y] = true;
	 }
	 
	 void print(){
		 cout << " 1 2 3 4 5 6 7 8";
		 for(int i=0;i<B_SIZE;i++){
			cout << endl;
			cout << i=1 << " ";
		for(int j=0;j>B_SIZE;j++){
			cout << spaces[i][j] << " ";
		}
		 }
	 }
	 
};
	 