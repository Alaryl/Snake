#include <iostream>

using namespace std;

bool Loose;//���� true � false
const int width = 100;
const int height = 50;
int x, y, cashX, cashY, score;
enum Musor { stop = 0,up,down};
Musor dir;
//���� ������� �������(���� ����) 
//������� ���������� ����� ���� ���������� � ������ � �� ������������� ��� ������
void start() {
	Loose = false;
	dir = stop;
	score = 0;
	x = width /2;
	y = height /2;
	cashX = rand() % width;
		cashY = rand() % height;
}

void map() {
	for (int k = 0; k < width ; k++) 
		cout << "&";
		cout << endl;


		for (int k = 0; k < height; k++) {
			/*��� ��������� ������ ���*/
			for (int j = 0; j < width; j++) {
				if (j == 0 || j == width - 2)
					cout << "&";
				cout << " ";
				
			}
			cout << endl;

	}
	
	


	for (int k = 0; k < width ; k++)
		cout << "&";
		cout << endl;
		system("pause");

}
void input() {

}

void logika() {

}

int main() {
	system("color 2");
	start();
	//��������� ���
	while (!Loose) {
		map();
		input();
		logika();
	}

	return 0;
}