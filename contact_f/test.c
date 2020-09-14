#include "contact.h"

void menu()
{
	printf("**************************************************\n");
	printf("******1. add                      2. del    ******\n");
	printf("******3. search                   4. modify ******\n");
	printf("******5. show                     6. sort   ******\n");
	printf("******7. save                     0. exit   ******\n");
	printf("**************************************************\n");
}

int main()
{
	int input = 0;
	struct Contact con;//���1000���˵���Ϣ
	// ��ʼ��ͨѶ¼
	initContact(&con);
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			addContact(&con);
			break;
		case 2:
			delContact(&con);
		case 3:
			searchContact(&con);
			break;
		case 4:
			modifyContact(&con);
			break;
		case 5:
			showContact(&con);
			break;
		case 6:
			break;
		case 7:
			saveContact(&con);
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			destoryContact(&con);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while(input);
	
	return 0;
}