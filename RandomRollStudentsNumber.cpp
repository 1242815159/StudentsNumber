//C++

//引入头文件
#include<iostream>
#include<ctime>
#include<random>
#include<windows.h> 

//define random(a, b) (rand() % (b - a + 1)) + a

//命名空间
using namespace std; 

//初始化结束循环变量
int EndVariable = 0; 
//定义
int random(int a, int b)
{
    srand((int)time(NULL));  
    return (rand() % (b - a + 1)) + a;      
}

//主函数
int main()
{   
    //标题
    SetConsoleTitle("本程序由王雨培制作, 未经允许, 禁止转载! ! ! "); 
    //废话
    int ModeVariable, StudentsQuantily, QuestionQuantily, LuckyStudentNumber; 
    cout << "欢迎使用随机点名器" << endl << "此应用将会随机点学号" << endl << "是老师不可缺少的实用应用" << endl << "注：" << endl << "此程序输入的所有参数除了题目数剩下的不可更改" << endl; 
    cout << "C++没有Python的random()函数, 但是可以用系统时间作随机数, 所以程序运行的时候可能会卡一下" << endl; 
    //人数，模式变量
    cout << "一次性说完还是一个一个说? " << endl << "一个一个说输入1, 一次性说完输入2" << endl; 
    cin >> ModeVariable; 
    cout << "班级一共多少同学? " << endl; 
    cin >> StudentsQuantily; 
    while(EndVariable != 1)
    {
        //题目数
        cout << "输入题目数" << endl; 
        cin >> QuestionQuantily; 
        int QuestionQuantily2 = QuestionQuantily + 1; 

        //选择分支, 起洞！
        if(ModeVariable == 1)
        {
            for(int i = 1; i < QuestionQuantily2; i++)
            {
                srand((int)time(0)); 
                LuckyStudentNumber = random(1, StudentsQuantily); 
                cout << "恭喜" << LuckyStudentNumber << "号同学中奖第" << i << "道题! "; 
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
                cout << "恭喜" << LuckyStudentNumber << "号同学中奖第" << i << "道题! "; 
                system("timeout 3"); 
            }
        }
        else
        {
            cout << "LLLLL" << "恭喜你, 程序卡BUG了" << endl << "退出吧" << endl;  
            cin >> EndVariable;  
        }
        cout << "输入1结束" << endl << "否则输入其他";
        cin >> EndVariable;  
    }
    return 0; 
} 