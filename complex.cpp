class ComplexNumbers
{

private:

int real;
int imag;

public:

ComplexNumbers(int real,int imag)
{

this->real=real;
this->imag=imag;
}


void print()
{
cout<<real<<" + "<<imag<<"i"<<endl;
}


void plus(ComplexNumbers const &c2)//by reference passing second complex no so as to save space by stopping formation of copy of  c2
{

real=real+c2.real;
imag=imag+c2.imag;

};

void multiply(ComplexNumbers const  &c2)
{
int r=real;
real=real*c2.real-imag*c2.imag;

imag=imag*c2.real+c2.imag*r;

}
};



