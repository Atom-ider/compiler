int main()
{
	3.5; // 普通的浮点数（我们普通地跑）
	3e5; // 普通的科学计数法
	.35; // 没有整数部分的普通浮点数
	3e+5;
	3e-5;
	35.; // 没有小数部分的普通的浮点数
	35; // 普通的整数
	035; // 普通的八进制
	0x35; // 普通的十六进制数
	0X35;
	0x3f;
	0x3F;
	0X3f;
	0xFf;
	0xFfFf;
	-0xFF; // 负数，但是在语法分析才处理
}
