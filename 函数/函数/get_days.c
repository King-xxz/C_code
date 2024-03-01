//判断闰年
int is_leap_year(int y) 
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 0;//表示闰年
	}
	else
	{
		return 1;
	}
}

//判断某年某月的天数
int get_days(int y, int x)
{
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (is_leap_year(y) == 0)
	{
		days[2] = 29;
	}
	return  days[x];
}
