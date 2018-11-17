// ħ������2��0.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <conio.h>
#include <graphics.h>
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <ctime>
#include "��ͷ.h"
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

using namespace std;
//#include "map.h"

int map_[5][13][13] = {
	{{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 9, 1, 2, 3, 2, 1, 1, 1, 1, 1, 1, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
		{ 0, 8, 1, 1, 16, 1, 0, 5, 6, 1, 0, 1, 0 },
		{ 0, 1, 12, 1, 0, 1, 0, 4, 8, 1, 0, 1, 0 },
		{ 0, 0, 16, 0, 0, 1, 0, 0, 0, 16, 0, 1, 0 },
		{ 0, 6, 1, 1, 0, 1, 16, 10, 11, 10, 0, 1, 0 },
		{ 0, 1, 13, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0 },
		{ 0, 0, 16, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0 },
		{ 0, 1, 1, 1, 0, 0, 16, 0, 0, 0, 16, 0, 0 },
		{ 0, 8, 1, 6, 0, 6, 1, 6, 0, 1, 10, 1, 0 },
		{ 0, 8, 1, 6, 0, 1, 18, 1, 0, 2, 14, 2, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }},//
	{{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 7, 4, 0, 7, 14, 7, 0, 1, 0, 1, 8, 0 },
        { 0, 1 ,8,0,14,7,14,0,1,17,10,1, 0 },
		{ 0, 11,1,0,7,6,7,0,1,0,0,0, 0 },
		{ 0, 17,0,0,0,1,0,0,1,0,1,1, 0 },
		{ 0, 1,1,10,1,1,1,2,1,1,1,1, 0 },
		{ 0, 17,0,0,1,1,1,0,1,0,0,0, 0 },
		{ 0, 12,1,0,0,1,0,0,1,0,1,8, 0 },
		{ 0, 1,7,0,1,1,1,0,1,17,11,7, 0 },
		{ 0, 8,5,0,1,1,1,0,1,0,0,0, 0 },
		{ 0, 0,0,0,0,1,0,0,3,0,1,1, 0 },
		{ 0, 15,18,1,1,1,1,0,1,17,1,9, 0 },
		
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }},//
	{{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 19,3,7,0,8,8,8,0,0,0,0, 0 },
		{ 0, 3,7,1,0,1,1,1,0,1,10,1, 0 },
		{ 0, 7,12,1,0,0,17,0,0,1,0,1, 0 },
		{ 0, 0,17,0,0,1,12,1,0,7,0,3, 0 },
		{ 0, 1,1,1,0,0,0,1,0,7,0,10, 0 },
		{ 0, 2,0,1,10,3,10,1,0,7,0,3, 0 },
		{ 0, 2,0,0,10,1,0,1,1,1,0,1, 0 },
		{ 0, 1,1,1,1,1,0,0,17,0,0,1, 0 },
		{ 0, 0,0,0,0,10,0,3,1,3,0,1, 0 },
		{ 0, 0,1,1,1,1,0,4,10,7,0,1, 0 },
		{ 0, 15,18,0,0,0,0,5,14,7,0,9, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }},//
	{{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0,1,1,12,17,1,15,1,17,2,1,8, 0 },
		{ 0, 1,7,1,0,1,18,1,0,1,2,1, 0 },
		{ 0, 13,0,0,0,0,16,0,0,0,0,1, 0 },
		{ 0,1,7,1,0,7,1,7,17,17,1,1, 0 },
		{ 0, 4,1,10,17,1,5,1,0,0,0,0, 0 },
		{ 0, 0,0,0,0,0,0,3,0,1,1,13, 0 },
		{ 0, 7,0,17,13,7,0,1,0,20,0,1, 0 },
		{ 0, 13,1,0,1,1,0,1,0,0,0,17, 0 },
		{ 0, 17,0,0,0,17,0,1,0,7,1,11, 0 },
		{ 0, 1,8,0,1,12,0,10,0,1,12,1, 0 },
		{ 0, 9,1,16,1,1,17,1,17,11,1,8, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }},//
	{{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 14, 1, 14, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 8, 1, 1, 1, 8, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 8, 1, 1, 1, 8, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }}
};

struct monster
{
	int Ѫ��;
	int ����;
	int ����;
	int ����;
};

struct gamerole
{
	char name[20] = { "��ʿ" };
	int x, y;
	int Ѫ��;
	int ����;
	int ����;
	int ����;
	int ��Կ��;
	int ��Կ��;
	int �ȼ�;
	int ����;
};

TCHAR str[100] = "";
//����ת��Ϊ�ַ�
char *inttoWchar(int Number)
{
	_stprintf_s(str, "%d", Number);
	return str;
}

HWND hwnd;
int map[13][13];
time_t start, now;
//class Game
//{   
int floor1, game;

bool can;
bool flag, flag_boss;
IMAGE ǽ, �ذ�, ��ʷ��ķ, ��ʷ��ķ, ��, ��, ��ˮ��, ��ˮ��,
      ��Կ��, ��Կ��, С��ҩˮ, ������, С����, С��ʦ, ���ñ�, 
	  �����ñ�, С��ҩˮ, ����, ����, ��Ϣ, ��,��ħ��,��¥��;

gamerole role;

struct monster ��ʷ��ķ���� = { 100, 15, 2, 100 };
struct monster ��ʷ��ķ���� = { 100, 25, 0, 100 };
struct monster С�������� = { 100, 40, 10, 100 };
struct monster ���ñ����� = { 200,60,20,200 };
struct monster �����ñ����� = { 250,80,25,250 };
struct monster С��ʦ���� = { 100,50,10,300 };
struct monster ��ħ������ = { 4000,150,110,10000 };
//
void welcome();
void userInfo();
void initgame();
void initGame();
void playGame();
bool isgameover();
void up_down();
void end();
void bloodPK(struct monster);
void open_file();


void bloodPK(struct monster ����)
{
	can = 0;
	//���Լӳ�
	int Ѫ = role.Ѫ�� + role.Ѫ��*role.���� / 100;
	int �� = role.���� + role.����*role.���� / 100;
	int �� = role.���� + role.����*role.���� / 100;

	//˫���˺�
	int hero = ����.���� - ��;
	int mons = �� - ����.����;

	if (mons > 0 && hero <= 0) {
		can = true;
		return;
	}
	if (mons <= 0 && hero > 0) {
		can = false;
		return;
	}
	if (hero > 0 && mons > 0) 
	{
		//�غ�����
		int num1 = Ѫ / hero + 1;
		int num2 = ����.Ѫ�� / mons + 1;

		if(role.����>=5)
		   role.���� -= 5;
		else role.���� = 0;
		if (num1 >= num2)
		{
			can = true;
			role.Ѫ�� -= (num2 - 1)*hero;
			role.���� += ����.����;
		}
		else role.Ѫ�� = 0;
	}

}

void initgame()
{
	loadimage(&ǽ, "ǽ.jpg", 60, 60);
	loadimage(&�ذ�, "�ذ�.jpg", 60, 60);
	loadimage(&��ʷ��ķ, "��ʷ��ķ.jpg", 60, 60);
	loadimage(&��ʷ��ķ, "��ʷ��ķ.jpg", 60, 60);
	loadimage(&��ˮ��, "��ˮ��.jpg", 60, 60);
	loadimage(&��ˮ��, "��ˮ��.jpg", 60, 60);
	loadimage(&��Կ��, "��Կ��.jpg", 60, 60);
	loadimage(&��Կ��, "��Կ��.jpg", 60, 60);
	loadimage(&С��ҩˮ, "С��ҩˮ.jpg", 60, 60);
	loadimage(&������, "����.jpg", 60, 60);
	loadimage(&��¥��, "��¥.JPG", 60, 60);
	loadimage(&С����, "С����.jpg", 60, 60);
	loadimage(&С��ʦ, "С��ʦ.jpg", 60, 60);
	loadimage(&���ñ�, "���ñ�.jpg", 60, 60);
	loadimage(&�����ñ�, "�����ñ�.jpg", 60, 60);
	loadimage(&С��ҩˮ, "С��ҩˮ.jpg", 60, 60);
	loadimage(&����, "����.jpg", 60, 60);
	loadimage(&����, "����.jpg", 60, 60);
	loadimage(&��, "��.jpg", 60, 60);
	loadimage(&��, "��.jpg", 60, 60);
	loadimage(&��, "��.jpg", 60, 60);
	loadimage(&��ħ��, "��ħ��.jpg", 60, 60);
	loadimage(&��Ϣ, "info.jpg");
}

int main()
{
	mciSendString("open ����.mp3", 0, 0, 0);	//������
	mciSendString("play ����.mp3", 0, 0, 0);	//��������
	mciSendString("play ����.mp3 repeat", 0, 0, 0);

	userInfo();
	initgraph(60 * 14, 60 * 13);
	welcome();
	initgame();

	open_file();
	initGame();//��ʼ����Ϸ,���������ͼ��
	playGame();

	end();
	Sleep(6000);
	closegraph();
	return 0;
}

void end()
{
	for (int i = 0; i < 14; i++) 
	{
		for (int j = 0; j < 13; j++) 
		{
			putimage(i * 60, j * 60, &ǽ);
		}
	}

	settextstyle(80,0, "����");
	setfillcolor(BLUE);
	if (game == 1) 
	{
		mciSendString("open ʤ��.mp3", 0, 0, 0);	//������
		mciSendString("play ʤ��.mp3", 0, 0, 0);	//��������
		
		fillrectangle(250, 250, 720, 600);
		outtextxy(350, 300, "�ǳ���");
		outtextxy(300, 400, "�ξ�����");
	}
	else {
		mciSendString("open ʧ��.mp3", 0, 0, 0);	//������
		mciSendString("play ʧ��.mp3", 0, 0, 0);	//��������

		fillrectangle(250, 250, 720, 600);
		outtextxy(350, 300, "ʤ�ܳ���");
		outtextxy(300, 400, "�Ű���ս");
	}
}

void welcome() 
{
	IMAGE img;
	loadimage(&img, "wel.jpg", 60 * 14, 60 * 13,false);
	putimage(0, 0, &img);

	setbkmode(TRANSPARENT);
	// ʵ����˸��"�����������"
	int c = 255;
	while (!_kbhit())
	{
		settextcolor(RGB(0, c, 0));
		outtextxy(360, 500, "���ո������");
		outtextxy(350, 600, "��R/r���¿�ʼ\n");
		outtextxy(350, 650, "��V/v�浵\n");
		outtextxy(350, 700, "��Q/q����\n");

		c -= 8;
		if (c < 0)
			c = 255;
		Sleep(20);
	}
	cleardevice();
}

void saved()
{
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13; j++) {
			map_[floor1 - 1][i][j] = map[i][j];
		}
	}
	ofstream outFile;
	outFile.open("save.txt");
	outFile.clear();
	outFile << 'Y' << endl;
	for (int k = 0; k < 5; k++) {

		for (int i = 0; i < 13; i++) {
			for (int j = 0; j < 13; j++) {
				outFile << map_[k][i][j] << ' ';
			}
			outFile << endl;
		}
	}
	outFile << role.name << endl;
	outFile << role.x << ' ' << role.y << endl;
	outFile << role.�ȼ� << ' ' << role.���� << '\n';
	outFile << role.���� << ' ' << role.��Կ�� << '\n';
	outFile << role.���� << ' ' << role.���� << '\n';
	outFile << role.��Կ�� << ' ' << role.Ѫ�� << endl;
	outFile << floor1;
	outFile.close();
}

void open_file()
{
	HWND hWnd = GetHWnd();
	ifstream Infile;
	ofstream outFile;

	Infile.open("save.txt");
	if (!Infile.is_open())
	{
		int ret = MessageBox(hWnd, TEXT("��ȡ�浵ʧ�ܣ��Ƿ���Լ�����Ϸ��"), TEXT("ѡ��"), MB_YESNO | MB_ICONQUESTION);
		if (ret == IDYES)
		{
			return;
		}
		else {
			exit(EXIT_FAILURE);
		}
	}
	char ch;
	Infile >> ch;
	if (ch == 'Y') 
	{
		int ret = MessageBox(hWnd, TEXT("��ȡ�浵�ɹ� ���Ƿ�Ӵ浵��������"), TEXT("ѡ��"), MB_YESNO | MB_ICONQUESTION);
		if (ret == IDYES)
		{
			for (int k = 0; k < 5; k++)
			{
				for (int i = 0; i < 13; i++)
				{
					for (int j = 0; j < 13; j++)
					{
						int a;
						Infile >> a;
						map_[k][i][j] = a;
					}
				}
			}
		}
		Infile >> role.name;
		Infile >> role.x >> role.y;
		Infile >> role.�ȼ� >> role.����;
		Infile >> role.���� >> role.��Կ��;
		Infile >> role.���� >> role.����;
		Infile >> role.��Կ�� >> role.Ѫ��;
		int f;
		Infile >> f; 
		floor1 = f;
		flag_boss = false;
        for (int i = 0; i < 13; i++) 
    	{
	    	for (int j = 0; j < 13; j++) 
	    	{
	    		map[i][j] = map_[floor1-1][i][j];
	    	}
    	}
	}

	outFile.open("save.txt");
	outFile.clear();
	outFile.close();
	Infile.close();
	
}

void userInfo()
{
	//��ʼ����ɫ��Ϣ
	role.���� = 10;
	role.���� = 10;
	role.�ȼ� = 1;
	role.���� = 0;
	role.��Կ�� = 0;
	role.��Կ�� = 2;
	role.Ѫ�� = 1500;
	role.���� = 0;

	flag_boss = false;
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13; j++) {
			map[i][j] = map_[0][i][j];
		}
	}
}

void up_down()
{
	if (floor1 > 0 && floor1 < 6)
	{
		if (flag == 1)
		{
			for (int i = 0; i < 13; i++)
			{
				for (int j = 0; j < 13; j++)
				{
					map_[floor1 - 1][i][j] = map[i][j];
					map[i][j] = map_[floor1][i][j];
				}
			}
		}
		else {
			for (int i = 0; i < 13; i++)
			{
				for (int j = 0; j < 13; j++)
				{
					map_[floor1 + 1][i][j] = map[i][j];
					map[i][j] = map_[floor1][i][j];
				}
			}
		}
	}

}

void initGame()
{
	int i, j;
	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 13; j++)
		{
			switch (map[i][j])
			{
			case 0:
				putimage(j * 60, i * 60, &ǽ);
				break;
			case 1:
				putimage(j * 60, i * 60, &�ذ�);
				break;
			case 2:
				putimage(j * 60, i * 60, &��ʷ��ķ);
				break;
			case 3:
				putimage(j * 60, i * 60, &��ʷ��ķ);
				break;
			case 4:
				putimage(j * 60, i * 60, &��ˮ��);
				break;
			case 5:
				putimage(j * 60, i * 60, &��ˮ��);
				break;
			case 6:
				putimage(j * 60, i * 60, &��Կ��);
				break;
			case 7:
				putimage(j * 60, i * 60, &��Կ��);
				break;
			case 8:
				putimage(j * 60, i * 60, &С��ҩˮ);
				break;
			case 9:
				putimage(j * 60, i * 60, &������);
				break;
			case 10:
				putimage(j * 60, i * 60, &С����);
				break;
			case 11:
				putimage(j * 60, i * 60, &С��ʦ);
				break;
			case 12:
				putimage(j * 60, i * 60, &���ñ�);
				break;
			case 13:
				putimage(j * 60, i * 60, &�����ñ�);
				break;
			case 14:
				putimage(j * 60, i * 60, &С��ҩˮ);
				break;
			case 15:
				putimage(j * 60, i * 60, &��¥��);
				break;
			case 16:
				putimage(j * 60, i * 60, &����);
				break;
			case 17:
				putimage(j * 60, i * 60, &����);
				break;
			case 18:
				putimage(j * 60, i * 60, &��);
				break;
			case 19:
				putimage(j * 60, i * 60, &��);
				break;
			case 20:
				putimage(j * 60, i * 60, &��);
				break;
			case 21:
				putimage(j * 60, i * 60, &��ħ��);
				break;
			}
		}
	}
	//��ʾ��Ϣ
	putimage(60 * 13, 0, &��Ϣ);
	settextcolor(WHITE);
	setbkmode(TRANSPARENT); //���ñ���͸��
	outtextxy(60 * 13 + 12, 100, role.name);
	outtextxy(60 * 13 + 12, 180, inttoWchar(role.�ȼ�));
	outtextxy(60 * 13 + 12, 235, inttoWchar(role.����));
	outtextxy(60 * 13 + 12, 362, inttoWchar(role.Ѫ��));
	outtextxy(60 * 13 + 12, 425, inttoWchar(role.����));
	outtextxy(60 * 13 + 12, 517, inttoWchar(role.����));
	outtextxy(60 * 13 + 12, 567, inttoWchar(role.����));
	outtextxy(60 * 13 + 12, 689, inttoWchar(role.��Կ��));
	outtextxy(60 * 13 + 12, 759, inttoWchar(role.��Կ��));
}

bool isgameover()
{

	if (flag_boss)
	{
		game = 1;
		return true;
	}
	else if (role.Ѫ�� == 0) {
		game = 2;
		return true;
	}
	return false;
}

void playGame()
{
	char cUser; //���������û�����
	int i = 0, j = 0;
	while (1)
	{
		hwnd = GetHWnd();
		if (isgameover())break;
		for (i = 0; i < 13; i++)
		{
			for (j = 0; j < 13; j++)
			{
				if (map[i][j] == 18)
					break;
			}
			if (map[i][j] == 18)
				break;//ֻ������һ��ѭ��
		}
		initGame();
		cUser = _getch(); //ʹ�ò��ɼ����� getch(); getchar()
		switch (cUser)
		{
			//���
			//�����:��:72;��:80:��:75;��:77;
		case 75:
		case'a':
		case'A':
			if (map[i][j - 1] == 1)
			{
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 17;
			}

			else if (map[i][j - 1] == 2)
			{
				int ID = MessageBox(hwnd, "������ʷ��ķ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ʷ��ķ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j - 1] += 16;
				}
			}

			else if (map[i][j - 1] == 3)
			{
				int ID = MessageBox(hwnd, "������ʷ��ķ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ʷ��ķ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j - 1] += 15;
				}
			}
			else if (map[i][j - 1] == 4)
			{
				role.���� += 5;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 14;
			}
			else if (map[i][j - 1] == 5)
			{
				role.���� += 5;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 13;
			}
			else if (map[i][j - 1] == 6)
			{
				role.��Կ��++;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 12;
			}
			else if (map[i][j - 1] == 7)
			{
				role.��Կ��++;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 11;
			}
			else if (map[i][j - 1] == 8)
			{
				role.Ѫ�� += 100;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 10;
			}
			else if (map[i][j - 1] == 9)
			{
				flag = 1;
				floor1++;
				up_down();
				initGame();
			}
			else if (map[i][j - 1] == 10)
			{
				int ID = MessageBox(hwnd, "����С����", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(С��������);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j - 1] += 8;
				}
			}
			else if (map[i][j - 1] == 11)
			{
				int ID = MessageBox(hwnd, "������ʦ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(С��ʦ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j - 1] += 7;
				}
			}
			else if (map[i][j - 1] == 12)
			{
				int ID = MessageBox(hwnd, "�������ñ�", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(���ñ�����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j - 1] += 6;
				}
			}
			else if (map[i][j - 1] == 13)
			{
				int ID = MessageBox(hwnd, "���������ñ�", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(�����ñ�����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j - 1] += 5;
				}
			}
			else if (map[i][j - 1] == 14)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 4;
			}
			else if (map[i][j - 1] == 15)
			{
		    	flag = 0;
		    	floor1--;
	    		up_down();
	    		initGame();
			}
			else if (map[i][j - 1] == 16 && role.��Կ�� > 0)
			{
				role.��Կ��--;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 2;
			}
			else if (map[i][j - 1] == 17 && role.��Կ�� > 0)
			{
				role.��Կ��--;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] += 1;
			}
			else if (map[i][j - 1] == 19)
			{
				role.���� += 120;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] -= 1;
			}
			else if (map[i][j - 1] == 20)
			{
				role.���� += 120;
				map[i][j] = map[i][j] - 17;
				map[i][j - 1] -= 2;
			}
			else if (map[i][j - 1] == 21)
			{
				int ID = MessageBox(hwnd, "��ħ������", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ħ������);
				if (ID == IDYES && can)
				{
					flag_boss = true;
					map[i][j] = map[i][j] - 17;
					map[i][j - 1] += 5;
				}
			}
			break;

		case 77:
		case'd':
		case'D':
			if (map[i][j + 1] == 1)
			{
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 17;
			}

			else if (map[i][j + 1] == 2)
			{
				int ID = MessageBox(hwnd, "������ʷ��ķ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ʷ��ķ����);
				if (ID == IDYES)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j + 1] += 16;
				}
			}

			else if (map[i][j + 1] == 3)
			{
				int ID = MessageBox(hwnd, "������ʷ��ķ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ʷ��ķ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j + 1] += 15;
				}
			}
			else if (map[i][j + 1] == 4)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 14;
			}
			else if (map[i][j + 1] == 5)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 13;
			}
			else if (map[i][j + 1] == 6)
			{
				role.��Կ��++;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 12;
			}
			else if (map[i][j + 1] == 7)
			{
				role.��Կ��++;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 11;
			}
			else if (map[i][j + 1] == 8)
			{
				role.Ѫ�� += 10;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 10;
			}
			else if (map[i][j + 1] == 9)
			{
				flag = 1;
				floor1++;
				up_down();
				initGame();
			}
			else if (map[i][j + 1] == 10)
			{
				int ID = MessageBox(hwnd, "����С����", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(С��������);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j + 1] += 8;
				}
			}
			else if (map[i][j + 1] == 11)
			{
				int ID = MessageBox(hwnd, "������ʦ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(С��ʦ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j + 1] += 7;
				}
			}
			else if (map[i][j + 1] == 12)
			{
				int ID = MessageBox(hwnd, "�������ñ�", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(���ñ�����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j + 1] += 6;
				}
			}
			else if (map[i][j + 1] == 13)
			{
				int ID = MessageBox(hwnd, "���������ñ�", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(�����ñ�����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i][j + 1] += 5;
				}
			}
			else if (map[i][j + 1] == 14)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 4;
			}
			else if (map[i][j + 1] == 15)
			{
		    	flag = 0;
	     		floor1--;
	    		up_down();
	    		initGame();
			}
			else if (map[i][j + 1] == 16 && role.��Կ�� > 0)
			{
				role.��Կ��--;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 2;
			}
			else if (map[i][j + 1] == 17 && role.��Կ�� > 0)
			{
				role.��Կ��--;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] += 1;
			}
			else if (map[i][j + 1] == 19)
			{
				role.���� += 120;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] -= 1;
			}
			else if (map[i][j + 1] == 20)
			{
				role.���� += 120;
				map[i][j] = map[i][j] - 17;
				map[i][j + 1] -= 2;
			}
			else if (map[i][j + 1] == 21)
			{
				int ID = MessageBox(hwnd, "��ħ������", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ħ������);
				if (ID == IDYES && can)
				{
					flag_boss = true;
					map[i][j] = map[i][j] - 17;
					map[i][j + 1] += 5;
				}
			}
			break;
			//�ϱ�
		case 72:
		case'w':
		case'W':
			if (map[i - 1][j] == 1)
			{
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 17;
			}

			else if (map[i - 1][j] == 2)
			{
				int ID = MessageBox(hwnd, "������ʷ��ķ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ʷ��ķ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i - 1][j] += 16;
				}
			}

			else if (map[i - 1][j] == 3)
			{
				int ID = MessageBox(hwnd, "������ʷ��ķ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ʷ��ķ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i - 1][j] += 15;
				}
			}
			else if (map[i - 1][j] == 4)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 14;
			}
			else if (map[i - 1][j] == 5)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 13;
			}
			else if (map[i - 1][j] == 6)
			{
				role.��Կ��++;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 12;
			}
			else if (map[i - 1][j] == 7)
			{
				role.��Կ��++;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 11;
			}
			else if (map[i - 1][j] == 8)
			{
				role.Ѫ�� += 10;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 10;
			}
			else if (map[i - 1][j] == 9)
			{
				flag = 1;
				floor1++;
				up_down();
				initGame();
			}
			else if (map[i - 1][j] == 10)
			{
				int ID = MessageBox(hwnd, "����С����", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(С��������);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i - 1][j] += 8;
				}
			}
			else if (map[i - 1][j] == 11)
			{
				int ID = MessageBox(hwnd, "������ʦ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(С��ʦ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i - 1][j] += 7;
				}
			}
			else if (map[i - 1][j] == 12)
			{
				int ID = MessageBox(hwnd, "�������ñ�", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(���ñ�����);
				if (ID == IDYES)
				{
					map[i][j] = map[i][j] - 17;
					map[i - 1][j] += 6;
				}
			}
			else if (map[i - 1][j] == 13)
			{
				int ID = MessageBox(hwnd, "���������ñ�", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(�����ñ�����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i - 1][j] += 5;
				}
			}
			else if (map[i - 1][j] == 14)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 4;
			}
			else if (map[i - 1][j] == 15)
			{
			flag = 0;
			floor1--;
			up_down();
			initGame();
			}
			else if (map[i - 1][j] == 16 && role.��Կ�� > 0)
			{
				role.��Կ��--;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 2;
			}
			else if (map[i - 1][j] == 17 && role.��Կ�� > 0)
			{
				role.��Կ��--;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] += 1;
			}
			else if (map[i - 1][j] == 19)
			{
				role.���� += 120;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] -= 1;
			}
			else if (map[i - 1][j] == 20)
			{
				role.���� += 120;
				map[i][j] = map[i][j] - 17;
				map[i - 1][j] -= 2;
			}
			else if (map[i - 1][j] == 21)
			{
				int ID = MessageBox(hwnd, "��ħ������", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ħ������);
				if (ID == IDYES && can)
				{
					flag_boss = true;
					map[i][j] = map[i][j] - 17;
					map[i - 1][j] += 5;
				}
			}
			break;
			//�±�
		case 80:
		case's':
		case'S':
			if (map[i + 1][j] == 1)
			{
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 17;
			}

			else if (map[i + 1][j] == 2)
			{
				int ID = MessageBox(hwnd, "������ʷ��ķ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ʷ��ķ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i + 1][j] += 16;
				}
			}

			else if (map[i + 1][j] == 3)
			{
				int ID = MessageBox(hwnd, "������ʷ��ķ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ʷ��ķ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i + 1][j] += 15;
				}
			}
			else if (map[i + 1][j] == 4)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 14;
			}
			else if (map[i + 1][j] == 5)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 13;
			}
			else if (map[i + 1][j] == 6)
			{
				role.��Կ��++;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 12;
			}
			else if (map[i - 1][j] == 7)
			{
				role.��Կ��++;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 11;
			}
			else if (map[i + 1][j] == 8)
			{
				role.Ѫ�� += 10;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 10;
			}
			else if (map[i + 1][j] == 9)
			{
				flag = 1;
				floor1++;
				up_down();
				initGame();
			}
			else if (map[i + 1][j] == 10)
			{
				int ID = MessageBox(hwnd, "����С����", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(С��������);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i + 1][j] += 8;
				}
			}
			else if (map[i + 1][j] == 11)
			{
				int ID = MessageBox(hwnd, "������ʦ", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(С��ʦ����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i + 1][j] += 7;
				}
			}
			else if (map[i + 1][j] == 12)
			{
				int ID = MessageBox(hwnd, "�������ñ�", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(���ñ�����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i + 1][j] += 6;
				}
			}
			else if (map[i + 1][j] == 13)
			{
				int ID = MessageBox(hwnd, "���������ñ�", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(�����ñ�����);
				if (ID == IDYES && can)
				{
					map[i][j] = map[i][j] - 17;
					map[i + 1][j] += 5;
				}
			}
			else if (map[i + 1][j] == 14)
			{
				role.���� += 10;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 4;
			}
			else if (map[i + 1][j] == 15)
			{
	    		flag = 0;
	    		floor1--;
	    		up_down();
	    		initGame();
			}
			else if (map[i + 1][j] == 16 && role.��Կ�� > 0)
			{
				role.��Կ��--;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 2;
			}
			else if (map[i + 1][j] == 17 && role.��Կ�� > 0)
			{
				role.��Կ��--;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] += 1;
			}
			else if (map[i + 1][j] == 19)
			{
				role.���� += 120;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] -= 1;
			}
			else if (map[i + 1][j] == 20)
			{
				role.���� += 120;
				map[i][j] = map[i][j] - 17;
				map[i + 1][j] -= 2;
			}
			else if (map[i + 1][j] == 21)
			{
				int ID = MessageBox(hwnd, "��ħ������", "�Ƿ񹥻�?", MB_YESNO);
				bloodPK(��ħ������);
				if (ID == IDYES && can)
				{
					flag_boss = true;
					map[i][j] = map[i][j] - 17;
					map[i + 1][j] += 5;
				}
			}
			break;
		case 'R':
		case 'r': 
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 13; j++) 
				{
					for (int k = 0; k < 13; k++) 
					{
						map_[i][j][k] = map_1[i][j][k];
					}
				}
			}
			userInfo();
			break;
		case 'V':
		case 'v':
			saved();
			break;
		/*case 'Q':
		case 'q':
			open_file();
			break;*/
		}
	}
	cleardevice();
}
