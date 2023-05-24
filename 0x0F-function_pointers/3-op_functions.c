#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - katraj3 sum ta3 2 nwamer tani a zin
 * @a: numero wahed hachak
 * @b: numero joj hachak
 *
 * Return: maso9akch a zmar
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - katarj3 far9 bin joj nwamer tani a zin
 * @a: numero wahed hachak
 * @b: numero tani hachak
 *
 * Return: wa nari amaso9 had fya hhhhhhhhh
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - katraj3 daerba ta3 joj nawmer tani a zin hhhhh
 * @a: numero lwal a zin
 * @b: numero tani hachak hhhhhhh
 *
 * Return: A nari maso9akomch fya
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - kataraj3 lina 9isma ta3 joj ar9am hhhhhh
 * @a: numero lwala zin
 * @b: numero tani hachak hhhhhh hhhhhhhhh
 *
 * Return: maso9akach zin hadchi
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - katraj3 the remainder ta3 had  division ota3 joj ar9am
 * @a: numero lowal a zin
 * @b: numero tani hachak
 *
 * Return: maso9akch ndir li bghit mohim iraje3 les devs
 */
int op_mod(int a, int b)
{
	return (a % b);
}

