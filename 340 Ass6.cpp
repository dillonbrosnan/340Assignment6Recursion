#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPalindrome(const string& input){
	int end = input.length()-1;//number of characters in string -1
	int start = 0;
	if(start >= end){
		return true;
	}if(input[start] != input[end]){//bsae case, if last letter of string != first
									//letter of string
		return false;
	}string s = input.substr(++start, --end);//if they do equal, create a new string
											//without first and last characters											
	return isPalindrome(s);//call function on new string;
}
int digitSum(int num){
	num = abs(num);//absolute value of num passed into method
	if(num < 10){//base case if number is less than 10
		return num;
	}else{
		return (num%10 + digitSum(num/10));//takes last digit of num (num%10)
											//and adds it to number
	}
}
int waysToClimb(int numStairs){
	if(numStairs < 4){
		return numStairs;
		/*base case, for numStairs = 1,2,3 there are only 1,2,3 ways to climb 
		the stairs, respectively*/
	}return waysToClimb(numStairs-1) + waysToClimb(numStairs-2);
	//returns the numStairs term of the fibbonici sequence
}

int main(){
	string s = "maam"; //create string that is a palindrome
	if (isPalindrome(s)){//if the string is a palindrome, print to screen\
						//appropriate message, feel free to change string s to any 
						//string you wish
		cout << "Word is palindrome" << endl;
	}
	else{
		cout << "Word is not a palindrome" << endl;
	}
	int num = -413213; //creates a num to put into digitSum
	int sum = digitSum(num);//calls digitSum with parameter num and stores in variable
							//sum
	cout << sum << endl;//print sum
	int ways = waysToClimb(5);//calls waysToClimb with stair number = 5, 
								//stores in variable ways
	cout << ways << endl;//print ways
	return 0;
}
