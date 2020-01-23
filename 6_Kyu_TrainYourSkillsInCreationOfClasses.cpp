using namespace std;

class X {
	int m_a;
	int m_b;
public:
	X();
  X(int);
  X(int, int);
  X(const X&);
  X& operator+=(const X&);
  X& operator++();
  X operator++(int);
  X operator+(const X&);
  X& operator=(const X&);
  friend ostream& operator<<(ostream& c, const X& x);
  
	string print(); // used for testing
};

string X::print()
{
		stringstream s;
		s << "[" << m_a << "," << m_b << "]";
		return s.str();
}

X::X(){m_a = 1; m_b = 2;}
X::X(int a) {m_a = a; m_b = 2;}
X::X(int a, int b) {m_a = a;m_b = b;}
X::X(const X& x) {this->m_a = x.m_a; this->m_b = x.m_b;}
X& X::operator += (const X& x){
this->m_a += x.m_a;
this->m_b += x.m_b;
return *this;}

X& X::operator++(){
  (++m_a);
  (++m_b);
  return *this;
}

X X::operator++(int){
  X temp(*this);
  this->m_a++;
  this->m_b++;
  return temp;
}

X X::operator+(const X& x){
  X temp;
  temp.m_a = x.m_a + m_a;
  temp.m_b = x.m_b + m_b;
  return temp;
}

X& X::operator=(const X& x){
  
  if(this != &x){ 
    
    m_a = x.m_a;
    m_b = x.m_b;
  }
  
  return *this;
}

ostream& operator<<(ostream& c, const X& x){
  c << "[" << x.m_a << "," << x.m_b << "]";
  
  return c;
}

/*
  { X{}                   } // see the logs, find out what happens with m_a and m_b
	{ X{1,2};				    	  }
  { X{1};				       	  } // see the logs, find out what happens with m_b
	{ X x{}, y{x};			  	} 
	{ X x{}, y = x;				  } // as expected
	{ X x{}, y{}; y += x;		}
	{ X x{}; ++x;				    }  // ++m_a, ++m_b
	{ X x{}; x++;				    }  // m_a++, m_b++
	{ X x{}, y{}; x + y;		}  // as expected
	{ cout << X{1,2};				}  // shows "[1,2]"
*/
