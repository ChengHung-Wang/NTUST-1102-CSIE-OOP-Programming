#include"TranslationMachine.h"

int main()
{
	Translate M;
	int letter_pare;
	int translation_pare;
	string str1;
	string str2;
	while (cin >> letter_pare)
	{
			cin >> translation_pare;
			if (letter_pare == 0 && translation_pare == 0)
				return 0;
			M.buid(letter_pare);
			//M.print();
			for (int i = 0; i < translation_pare; i++)
			{
				cin >> str1 >> str2;
				bool flag=0;
				for (int i = 0; i < str1.length(); i++)
				{
					if (isdigit(str1[i]))
					{
						cout << "ERROR" << endl;
						flag = 1;
						break;
					}
				}
				if (flag)
				{
					continue;
				}
				for (int i = 0; i < str2.length(); i++)
				{
					if (isdigit(str2[i]))
					{
						cout << "ERROR" << endl;
						flag = 1;
						break;
					}
				}
				if (flag)
				{
					continue;
				}
				if (M.search(str1, str2))
					cout << "yes" << endl;
				else
					cout << "no" << endl;
			}
	}
}