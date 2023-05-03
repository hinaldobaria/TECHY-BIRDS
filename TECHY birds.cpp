#include<iostream>
using namespace std;
class Shape{
	protected:
		double x,y;//for dimension
    public:
		void get_data();//input data
		void display();//for area and perimeter
};
//class for circle

class Circle : public Shape
{
	public:
		void get_data()//to input data
		{
			cout<<"Enter Radius of Circle :";
			cin>>x;
		}
		void display()//to display data
		{
			double ac,pc;//for area and perimeter of circle
			ac = 3.14*x*x;
			pc=2*3.14*x;
			cout<<"Area of Circle is :"<<ac<<endl;
			cout<<"Perimeter of circle is :"<<pc<<endl;
		}
};
// Class for rectangle
class Rectangle : public Shape
{
	public:
		void get_data()//for inputing data
		{
			cout<<"Enter Width and Length of Rectangle :";
			cin>>x>>y;
		}
		void display()
		{
			double ar,pr;
			ar = x*y;
			pr=2*(x+y);
			cout<<"Area of Rectangle is :"<<ar<<endl;
			cout<<"Perimeter of Rectangle is :"<<pr<<endl;
		}
};
class Triangle  : public Shape
{
	public:
	    double side1,side2;
		void get_data()
		{
			cout<<"Enter Height,side1, side2 and Base of Triangle :";
			cin>>x>>side1>>side2>>y;//x=height y=base
		}
		void display()
		{
			double at,pt;
			at = 0.5* x*y;
			pt=side1+side2+y;
			cout<<"Area of Triangle is :"<<at<<endl;
			cout<<"Perimeter of Triangle is :"<<pt<<endl;
		}
};
class Square : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Side of Square :";
			cin>>x;
		}
		void display()
		{
			double as,ps;
			as = x*x;
			ps=4*x;
			cout<<"Area of Square is :"<<as  <<endl;
			cout<<"perimeter of Square is :"<<ps  <<endl;
		}
};
class Trapezium : public Shape
{
	public:
	    int base1,base2,side1,side2;
		void get_data()
		{
			cout<<"Enter both base of trapezium :"<<endl;
			cin>>base1>>base2;
			cout<<"Enter both side of trapezium :"<<endl;
			cin>>side1>>side2;
			cout<<"Enter height of trapezium :"<<endl;
			cin>>x;
		}
		void display()
		{
			double a_tr,p_tr;
			a_tr = ((base1+base2)*x)/2;
			p_tr=base1+base2+side1+side2;
			cout<<"Area of trapezium is:"<<a_tr <<endl;
			cout<<"perimeter of trapezium is :"<<p_tr<<endl;
		}
};
class Parallelogram : public Shape
{
	public:
	    double base;
		void get_data()
		{
			cout<<"Enter base and height of parallelogram :"<<endl;
			cin>>base>>x;
		}
		void display()
		{
			double a_parallelogram,p_parallelogram;

			a_parallelogram = base*x;
			p_parallelogram = 2*(base+x);
			cout<<"Area of is parallelogram:"<<a_parallelogram<<endl;
			cout<<"perimeter of parallelogram is :"<<p_parallelogram<<endl;
		}
};
class Cone : public Shape
{
	public:
	    double r;
		void get_data()
		{
			cout<<"Enter radius ,slant height:"<<endl;
			cin>>r>>x;
		}
		void display()
		{
			double a_cone;
			a_cone=3.14*r*x;
			cout<<"Area of cone is :"<<a_cone<<endl;
			cout<<"perimeter of cone can't be determined"<<endl;
		}
};
class Kite : public Shape
{
	public:
	    double d1,d2,l1,l2;
		void get_data()
		{
			cout<<"Enter both diagonal and both length :";
			cin>>d1>>d2>>l1>>l2;
		}
		void display()
		{
			double a_kite,p_kite;
			a_kite = (d1*d2)/2;
			p_kite=2*(l1+l2);
			cout<<"Area of kite is :"<<a_kite<<endl;
			cout<<"perimeter of kite is :"<<p_kite<<endl;
		}
};
class Rhombus : public Shape
{
	public:
	    double d1,d2;
		void get_data()
		{
			cout<<"Enter both diagonal and length of rhombus :";
			cin>>d1>>d2>>x;
		}
		void display()
		{
			double a_rhombus,p_rhombus;
			a_rhombus = (d1*d2)/2;
			p_rhombus=4*x;
			cout<<"Area of rhombus is :"<<a_rhombus<<endl;
			cout<<"perimeter of rhombus is :"<<p_rhombus<<endl;
		}
};
class Hexagon: public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter length of hexagon :"<<endl;
			cin>>x;
		}
		void display()
		{
			double a_hexagon,p_hexagon;
			a_hexagon = 2.598*x*x;
			p_hexagon=6*x;
			cout<<"Area of hexagon is :"<<a_hexagon<<endl;
			cout<<"perimeter of hexagon is :"<<p_hexagon<<endl;
		}
};
class Cylinder : public Shape
{
	public:
        double r;
		void get_data()
		{
			cout<<"Enter height and radius of cylinder :";
			cin>>x>>r;
		}
		void display()
		{
			double a_cy,p_cy;
            a_cy =((2*3.14*r*x) + (2*3.14*r*r));
            p_cy=4*r + 2*x;
            cout<<"Area of closed cylinder is :"<<a_cy<<endl;
            cout<<"Perimeter of closed cylinder is :"<<p_cy<<endl;
        }
};

main()
{

	int option;//for selecting the object
	char choice;//for selecting the ans(Yes/No)
    Circle c;
	Rectangle r;
	Triangle t;
	Square s;
	Trapezium tra;
	Parallelogram par;
	Cone con;
	Kite kite;
	Rhombus rho;
	Hexagon hex;
	Cylinder cyl;
	do{
    system("cls");
	cout<<"********************|| Calculate Area of Different Shape ||********************"<<endl;
	cout<<"1: Area of Circle "<<endl;
	cout<<"2: Area of Rectangle "<<endl;
	cout<<"3: Area of Triangle "<<endl;
	cout<<"4: Area of Square "<<endl;
	cout<<"5: Area of Trapezium"<<endl;
	cout<<"6: Area of Parallelogram "<<endl;
	cout<<"7: Area of Cone "<<endl;
	cout<<"8: Area of Kite "<<endl;
	cout<<"9: Area of Rhombus "<<endl;
	cout<<"10: Area of Hexagon "<<endl;
	cout<<"11: Area of Cylinder "<<endl;

    cout<<"Plz Enter Your Choice"<<endl;
    cin>>option;

	switch(option){
		case 1:
			c.get_data();
			c.display();
			break;
		case 2:
            r.get_data();
            r.display();
            break;
		case 3:
			t.get_data();
			t.display();
			break;
		case 4:
			s.get_data();
			s.display();
			break;
        case 5:
			tra.get_data();
			tra.display();
			break;
        case 6:
			par.get_data();
			par.display();
			break;
        case 7:
			con.get_data();
			con.display();
			break;
        case 8:
			kite.get_data();
			kite.display();
			break;
        case 9:
			rho.get_data();
			rho.display();
			break;
        case 10:
			hex.get_data();
			hex.display();
			break;
        case 11:
			cyl.get_data();
			cyl.display();
			break;

		default:
			cout<<"Entered number is invalid "<<endl;
	   }
	   cout<<"Do You Want to Calculate Another Area [Y / N] :";
	   cin>>choice;
	}while(choice =='Y'||choice =='y');
	if(choice=='N'||'n')
    {
        cout<<endl;
        cout<<"**************************** ||  THANKS  || ****************************"<<endl;
    }
}
