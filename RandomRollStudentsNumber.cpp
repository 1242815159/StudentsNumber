//C++

//����ͷ�ļ�
#include<iostream>
#include<ctime>
#include<random>
#include<windows.h> 

//define random(a, b) (rand() % (b - a + 1)) + a

//�����ռ�
using namespace std; 

//��ʼ������ѭ������
int EndVariable = 0; 
//����
int random(int a, int b)
{
    srand((int)time(NULL));  
    return (rand() % (b - a + 1)) + a;      
}

//������
int main()
{   
    //����
    SetConsoleTitle("������������������, δ������, ��ֹת��! ! ! "); 
    //�ϻ�
    int ModeVariable, StudentsQuantily, QuestionQuantily, LuckyStudentNumber; 
    cout << "��ӭʹ�����������" << endl << "��Ӧ�ý��������ѧ��" << endl << "����ʦ����ȱ�ٵ�ʵ��Ӧ��" << endl << "ע��" << endl << "�˳�����������в���������Ŀ��ʣ�µĲ��ɸ���" << endl; 
    cout << "C++û��Python��random()����, ���ǿ�����ϵͳʱ���������, ���Գ������е�ʱ����ܻῨһ��" << endl; 
    //������ģʽ����
    cout << "һ����˵�껹��һ��һ��˵? " << endl << "һ��һ��˵����1, һ����˵������2" << endl; 
    cin >> ModeVariable; 
    cout << "�༶һ������ͬѧ? " << endl; 
    cin >> StudentsQuantily; 
    while(EndVariable != 1)
    {
        //��Ŀ��
        cout << "������Ŀ��" << endl; 
        cin >> QuestionQuantily; 
        int QuestionQuantily2 = QuestionQuantily + 1; 

        //ѡ���֧, �𶴣�
        if(ModeVariable == 1)
        {
            for(int i = 1; i < QuestionQuantily2; i++)
            {
                srand((int)time(0)); 
                LuckyStudentNumber = random(1, StudentsQuantily); 
                cout << "��ϲ" << LuckyStudentNumber << "��ͬѧ�н���" << i << "����! "; 
                system("timeout 1"); 
                system("pause"); 
            }
        }
        else if (ModeVariable == 2)
        {
            for(int i = 1; i < QuestionQuantily2; i++)
            {
                srand((int)time(0)); 
                LuckyStudentNumber = random(1, StudentsQuantily); 
                cout << "��ϲ" << LuckyStudentNumber << "��ͬѧ�н���" << i << "����! "; 
                system("timeout 3"); 
            }
        }
        else
        {
            cout << "LLLLL" << "��ϲ��, ����BUG��" << endl << "�˳���" << endl;  
            cin >> EndVariable;  
        }
        cout << "����1����" << endl << "������������";
        cin >> EndVariable;  
    }
    return 0; 
} 