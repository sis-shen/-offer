#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
class Sum
{
public:
	Sum()
	{
		_sum += _i;
		_i++;
	}
	static int GetSum()
	{
		return _sum;
	}
private:
	static int _sum;
	static int _i;
};


int Sum::_sum = 0;
int Sum::_i = 1;

class Solution
{
public:

	int Sum_solution(int n)
	{
		Sum a[n];//VS��֧�֣���
		return Sum::GetSum();
	}


private:
	int _sum = 0;
};


int main()
{
	std::cout << Solution().Sum_solution(5);//�������� Solution(),ֻ������һ��
	

	return 0;
}