#include<iostream>
#include<string>
using namespace std;


class Calendar{
	private:
		int dd;  //date
		int mm; //month
		int yy; //year
	public:
		int cheak_leap_year(int year);
		void increase_month(int m,int y);
		void decrease_month(int m,int y);
		int get_number_of_days(int m,int y);
		char get_name(int day);
		void print_date(int mm,int yy);
		int get_day_number(int d,int m,int y); //d=day   m=month  y=year
		char *get_day(int d,int m,int y);
		void print_month(int d,int m ,int y);
};

Calendar::cheak_leap_year(int year){
	cout<<"not found";
	
}
void increase_month(int m,int y){
	
}
int get_number_of_days(int m,int y){
}
char get_name(int day){
}
void print_date(int mm,int yy){
}
int get_day_number(int d,int m,int y){                                                 //d=day   m=month  y=year
} 
char *get_day(int d,int m,int y){
}
void print_month(int d,int m ,int y){
}




///////////////***********************////////////////////

class Note{
	private:
		int dd;
		int mm;
		string note;
		
	public:
		int check_note(int d,int m);
		void add_note();
		void  show_note();
		
};

int main(){
	Calendar cl;
	cl.cheak_leap_year(3);
	Note n;
	return 0;
}
