#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int ma[16][16]=
{
	0, 1, 2, 3, 0, 9, 0, 0x7F,0, 0, 0, 11, 12, 13, 14, 15,
	16, 17, 18, 19, 0, 0, 8, 0, 24, 25, 0, 0, 28, 29, 30, 31,
	0, 0, 0, 0, 0, 10, 23,27, 0, 0, 0, 0, 0, 5, 6, 7,
	0, 0, 22, 0, 0, 0, 0, 4, 0, 0, 0, 0, 20, 21, 0, 26,
	32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '.', '<', '(', '+', '|',
	'&', 0, 0, 0, 0, 0, 0, 0, 0, 0, '!', '$', '*', ')', ';', 0,
	'-', '/', 0, 0, 0, 0, 0, 0, 0, 0, 0, ',', '%', '_', '>', '?',
	0, 0, 0, 0, 0, 0, 0, 0, 0, '`', ':', '#', '@', '\'', '=', '\"',
	0, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0, 0, 0, 0, 0, 0,
	0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0, 0, 0, 0, 0, 0,
	0, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0, 0, 0, 0, 0, 0,
	'^', 0, 0, 0, 0, 0, 0, 0, 0, 0, '[', ']', 0, 0, 0, 0,
	'{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0, 0, 0, 0, 0, 0,
	'}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0, 0, 0, 0, 0, 0,
	'\\', 0, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0, 0, 0, 0, 0, 0,
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0, 0, 0, 0, 0, 0

};

char str[20500000];

int main()
{
	char s, t;
	int x, y;
	int num;
	while(~scanf("%s", str))
	{
		int len=strlen(str);
		for(int i=0;i<len;i+=2){
			s=str[i];
			t=str[i+1];
			if(s>='0'&&s<='9')
				x=s-'0';
			else
				x=s-'A'+10;
			if(t>='0'&&t<='9')
				y=t-'0';
			else
				y=t-'A'+10;
			num=ma[x][y];
			x=num/16;
			y=num%16;
			printf("%c%c", x>9?'A'+x-10:'0'+x, y>9?'A'+y-10:'0'+y);
		}
		printf("\n");
	}
}

