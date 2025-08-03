#include<assert.h>
#include<stdio.h>
#include "day2.h"


int sum_of_digit(int num)
{
    int sum;

    for(sum = 0; num > 0; num /= 10)
        sum += num % 10;

    return sum;
}

int digit_search(const int number, const int digit)
{
    int num = number;

    for(; num > 0; num /= 10)
        if(num % 10 == digit)
            return FOUND;
    return NOT_FOUND;
}

int reverse_number(int num)
{
    int result = 0;

    while(num != 0){
        result = result * 10 + num % 10;
        num = num / 10;
    }
    return result;
}
// number that doesnot start with 0
int is_palindrome(const int num)// return 1 if TRUE
{

    int reverse = reverse_number(num);

    if(reverse == num)
        return TRUE;
    else
        return FALSE;
}
int generate_factorial(const int num)
{
    int i, fact = 1;

    for(i=2; i<= num; i++) // for(i=num; i>1; i--)
        fact *= i;
    return fact;
}

int is_prime(int num)
{
    int i;

    for(i = 2; i <= num/2 ; i++)
        if(num % i == 0)
            return FALSE;
    return TRUE;
}

int is_prime_using_flag_and_break(int num)
{
    int i, flag = 0;

    for(i = 2; i <= num/2 ; i++)
        if(num % i == 0){
            flag = 1;
            break;
        }
    if(flag == 0)
        return TRUE;
    else
        return FALSE;
}
int generate_first_N_prime(int limit)
{
    int count = 0;
    int num=2;

    while(count < limit){
        if(is_prime(num)){
            count++;
            printf("Number is %d \n", num);
        }
        num++;
    }
    return count;
}
int merge_two_int(int, int); // return merged integer
int find_hcf(int);
int sum_of_two_integer_equal(int, int);// returns 1 if its equal
int set_intersection_int(const int first,const  int b) // returns the result
{
    int c, a = first;

    for(c = 0; a > 0; a /= 10)
        if(digit_search(b, a % 10) && !digit_search(c, a % 10))
           c = c * 10 + a % 10;
    return c;
}

