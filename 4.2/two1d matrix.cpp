#include <iostream>
using namespace std;
class Matrix
{
   
    int *A;
    int size;
   public:
    Matrix(int size)
    {
        this->size = size;
        A = new int[size];
    }
    void getMatrix()
    {
        cout << "Enter the elements of the matrix: " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> A[i];
        }
    }
    void displayMatrix()
    {
        cout << "The matrix is: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    Matrix operator+(Matrix m)
    {
        Matrix result(size);
        for (int i = 0; i < size; i++)
        {
            result.A[i] = A[i] + m.A[i];
        }
        return result;
    }
};
int main()
{
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;
    Matrix m1(size);
    m1.getMatrix();
    Matrix m2(size);
    m2.getMatrix();
    Matrix m3 = m1 + m2;
    m3.displayMatrix();
    return 0;
}
