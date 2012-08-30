// Introduction to the Boost C++ Libraries - Volume II - Advanced Libraries
//
// Chapter 6.5.2 - Matrix Algebra in Boost - Part I - Dense Matrices - Special Dense Matrices
//
// (C) Datasim Education BV  2011

#include <boost/numeric/ublas/matrix.hpp>		// The (identity)matrix class.
#include <boost/numeric/ublas/io.hpp>			// Sending to IO stream.

using namespace std;
namespace ublas=boost::numeric::ublas;

int main()
{
	cout<<"\n*** Identity Matrices ***\n\n";
	{
		// Create identity matrices.
		ublas::identity_matrix<double> m1(2);
		ublas::identity_matrix<double> m2(3);

		// Print the matrices.
		cout<<"m1 (2x2): "<<m1<<endl;
		cout<<"m2 (3x3): "<<m2<<endl;
		cout<<"m1 rows: "<<m1.size1()<<", columns: "<<m1.size2()<<endl;
		cout<<"m2 rows: "<<m2.size1()<<", columns: "<<m2.size2()<<endl;

		// Resize the identity matrix. The data is always preserved even when preservation argument is false.
		m2.resize(2, false); cout<<"m2 resized to 2 (data always preserved)"<<m2<<endl;
		m2.resize(3, false); cout<<"m2 resized back to 3 (data always preserved)"<<m2<<endl;
	}

	cout<<"\n*** Zero Matrices ***\n\n";
	{
		// Create zero matrices.
		ublas::zero_matrix<double> m1(2, 3);
		ublas::zero_matrix<double> m2(3);

		// Print the matrices.
		cout<<"m1 (2x3): "<<m1<<endl;
		cout<<"m2 (3x3): "<<m2<<endl;
		cout<<"m1 rows: "<<m1.size1()<<", columns: "<<m1.size2()<<endl;
		cout<<"m2 rows: "<<m2.size1()<<", columns: "<<m2.size2()<<endl;

		// Resize the zero matrix. The data is always preserved even when preservation argument is false.
		m1.resize(3, 2, false); cout<<"m1 resized to 3x2 (data always preserved)"<<m1<<endl;
		m1.resize(2, 3, false); cout<<"m1 resized back to 2x3 (data always preserved)"<<m1<<endl;

		cout<<endl<<"Swap the matrices"<<endl;
		m1.swap(m2);
		cout<<"m1: "<<m1<<endl;
		cout<<"m2: "<<m2<<endl;

		// Zero matrices can be used with normal matrices.
		cout<<endl<<"Normal matrices can use zero matrices"<<endl;
		ublas::matrix<double> m(2, 3, 5);
		cout<<"m:     "<<m<<endl;
		cout<<"m+=m2: "<<(m+=m2)<<endl;
	}

	cout<<"\n*** Scalar Matrices ***\n\n";
	{
		// Create scalar matrices.
		ublas::scalar_matrix<double> m1(2, 3, 4);
		ublas::scalar_matrix<double> m2(3, 2, 5);

		// Print the matrices.
		cout<<"m1 (2x3)=4: "<<m1<<endl;
		cout<<"m2 (3x2)=5: "<<m2<<endl;
		cout<<"m1 rows: "<<m1.size1()<<", columns: "<<m1.size2()<<endl;
		cout<<"m2 rows: "<<m2.size1()<<", columns: "<<m2.size2()<<endl;

        }
}
