#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>


using namespace std;

////Simple Lambda expression
//void main() {
//
// //Bize setrde istifade oluna ve ya arqument kimi oturule bilen anonim funksiya obyektlerini 
// //mueyyen etmeye imkan verir
// //[]-lambda ifadesinin baslangicini bildiren lambda introducerdir.
// //()-parametr oturmek ucundur adi funskiyada oldugu kimi
// 
//	auto Lambda = []() {
//		cout << "Lambda " << endl;
//	};
//	Lambda();
//}





////Lambda expression with parameters
//void main() {
//	int i = 10;
//	int j = 15;
//	 auto Lambda = [&i,&j](int a,int b)->int/*(-> yazaraq hansi tip element qaytarmaq isteyirikse onu qeyd edirik)*/ {
//		 i = 1;
//		 return a + b+i+j;
//	};
//	cout<<Lambda(10,20);
//	
//	//default olaraq, biz lambda body - de local variable istifade ede bilmerik, cunki onlar skope xaricindediler.
//	//Ancaq capture list - de qeyd ederek istifade ede bilerik yeni []-in daxilinde qeyd ederek(numune yuxarida)
//	//Parametri reference olaraq gondermek isteyirikse []in icindekiler & yazaraq edirik ve daha sonra
//	//istesek body-de deyisiklik ede bilerik,lakin reference olmadan deyisiklik etmek olmaz.
//}




//Sort algoritmi & Lambda
struct Point {
	double x;
	double y;
	Point() {
		x = (rand() % 10) ;
		y = (rand() % 10);
	}
	void Print() {
		cout << "[" << x << " , " << y << "]"  ;
	}
};
void main() {
	int count = 100;
	vector<Point>points;
	for (size_t i = 0; i < count; i++) {
		points.push_back(Point());
	}
	cout << "Unsorted :" << endl;
	for (size_t i = 0; i < 10; i++)
	{
		points[i].Print();
	}
	sort(points.begin(), points.end(),
		[](const Point& a, const Point& b)->bool {
			return(a.x * a.x) + (a.y * a.y) < (b.x * b.x) + (b.y * b.y);
		});
	cout << endl;
	cout << "Sorted : " << endl;
	for (size_t i = 0; i < 10; i++)
	{
		points[i].Print();

	}
}

