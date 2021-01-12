#include <iostream>
#include <sstream>
#include <string>

class converting {
public:
	std::string ToString(int x) {
		return std::to_string(x);
	}
	std::string ToString(long x) {
		return std::to_string(x);
	}
	std::string ToString(float x) {
		return std::to_string(x);
	}
	std::string ToString(double x) {
		return std::to_string(x);
	}
	std::string ToString(short x) {
		return std::to_string(x);
	}
	short ToInt16(std::string x) {
		std::stringstream asdf(x);
		short cnvrtd;
		asdf >> cnvrtd;
		return cnvrtd;
	}
	short ToInt16(int x) {
		return (short)x;
	}
	short ToInt16(long x) {
		return (short)x;
	}
	short ToInt16(double x) {
		return (short)x;
	}
	short ToInt16(float x) {
		return (float)x;
	}
	int ToInt32(std::string x) {
		std::stringstream asdf(x);
		int cnvrtd;
		asdf >> cnvrtd;
		return cnvrtd;
	}
	int ToInt32(long x) {
		return (int)x;
	}
	int ToInt32(float x) {
		return (int)x;
	}
	int ToInt32(double x) {
		return (int)x;
	}
	int ToInt32(short x) {
		return (int)x;
	}
	long ToInt64(std::string x) {
		std::stringstream asdf(x);
		long cnvrtd;
		asdf >> cnvrtd;
		return cnvrtd;
	}long ToInt64(int x) {
		return (long)x;
	}
	long ToInt64(float x) {
		return (long)x;
	}
	long ToInt64(double x) {
		return (long)x;
	}
	long ToInt64(short x) {
		return (long)x;
	}
	float ToFloat(std::string x) {
		std::stringstream asdf(x);
		float cnvrtd;
		asdf >> cnvrtd;
		return cnvrtd;
	}
	float ToFloat(int x) {
		return (float)x;
	}
	float ToFloat(double x) {
		return (float)x;
	}
	float ToFloat(long x) {
		return (float)x;
	}
	float ToFloat(short x) {
		return (float)x;
	}
	double ToDouble(std::string x) {
		std::stringstream asdf(x);
		double cnvrtd;
		asdf >> cnvrtd;
		return cnvrtd;
	}
	double ToDouble(int x) {
		return (double)x;
	}
	double ToDouble(long x) {
		return (double)x;
	}
	double ToDouble(float x) {
		return (double)x;
	}
	double ToDouble(short x) {
		return (double)x;
	}
};

int main() {
	converting Convert;
	std::cout << "This program is for a test. Available options are:" << std::endl << "ToInt16" << std::endl << "ToInt32" << std::endl << "ToInt64" << std::endl << "ToDouble" << std::endl << "ToFloat" << std::endl << "ToString" << std::endl;
	//This program is basically makes a kind of library for us to use "Convert.To" functions from C# in C++.
	//Yes. This program is completely useless.
}
