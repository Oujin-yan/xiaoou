//#include<iostream>
//using namespace std;
//int main()
//{
//	int score;
//	cout << "score=";
//	cin >> score;
//	if (score >= 0 && score < 60)
//	{
//		cout << "grade is E" << endl;
//	}
//	else if (score >= 60 && score < 70)
//	{
//		cout << "grade is D" << endl;
//	}
//	else if (score >= 70 && score < 80)
//	{
//		cout << "grade is C" << endl;
//	}
//	else if (score >= 80 && score < 90)
//	{
//		cout << "grade is B" << endl;
//	}
//	else
//	{
//		cout << "grade is A" << endl;
//	}
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	float x, y;
//	cout << "please input x:" << endl;
//	cin >> x;
//	if (x = 3)
//	{
//		if (x < -3)
//		{
//			y = 1;
//		}
//		else
//		{
//			y = x * x + 1;
//		}
//	}
//	else
//	{
//		y = x - 1;
//	}
//	cout << "y=" << y << endl;
//	return 0;
//}




#include<iostream>
using namespace std;
int main()
{
	int i, count = 0, j, sum = 0;
	for (i = 1; i <= 10; i++)
	{
		cout<< "请输入第" << i << "个数据";
		cin >> j;
		if (j <= 0)
			continue;
		count++;
		sum += j;
	}
	if (count)
	{
		cout << "正整数的个数" << count << "平均值：" << 1.0 * sum / count << endl;
	}
	else
	{
		cout << "输入数据中无正整数" << endl;
	}
	return 0;
}