class fraction
{

private:
int numerator;
int denominator;

public:

fraction(int numerator,int denominator)
{
this->numerator=numerator;
this->denominator=denominator;
}

void simplify()
{
int gcd=1;
int j=min(denominator,numerator);

for(int i=1;i<=j;i++)
{
if(denominator%i==0&&numerator%i==0)
{
gcd=i;
}
}
this->numerator=numerator/gcd;
this->denominator=denominator/gcd;
}

void print()
{
cout<<this->numerator<<"/"<<denominator<<endl;
}

void add(fraction const &f2)
{
int lcm=denominator*f2.denominator;

int x=lcm/denominator;
int y=lcm/f2.denominator;

int num=x*numerator+y*f2.numerator;



numerator=num;

denominator=lcm;

simplify();
}



void multiply(fraction const &f2)
{
numerator=numerator*f2.numerator;

denominator=denominator*f2.denominator;

simplify();
}
};














