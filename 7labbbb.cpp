#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	system("chcp 1251");
	system("cls");
	int n;
	char* str;
	printf("Введите размер строки\n");
	scanf_s("%d", &n);
	puts("Enter str:");
	str = (char*)malloc(n * sizeof(char));
	rewind(stdin);//Очищает входной поток,  в потоке осталось нажатие Enter и fgets по этому символу заканчивается ,ревайнд уберет enter .
	fgets(str, n, stdin);
	for (int i = 0; str[i] != '\n';)
	{


		if (str[i] == ' ')
		{
			for (int j = i; str[j] != '\n'; j++)
			{

				str[j] = str[j + 1];



			}
		}
		else
		{
			i++;
			if (str[i] == ' ') i++;
		}

	}

	printf("%s", str);

	free(str);
	return 0;
}


