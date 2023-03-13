#include <iostream>
using namespace std;

double rerate (double a, double b)
{
    return (a + b) / 2;
}
string satus (double d)
{
    if (d >= 60)
      return "lulus";
    else
     return "gagal";
}
string status2 (double r, double n)
{
    if (r >=60 && n >= 70)
       return "lulus";
else
    return "gagal";
}

int main()
{
    double nilM, nilB;
    cout << "masukkan nilai matematika : ";
    cin >> nilM;
    cout << "Masukan nilai Bahasa indoneisa : ";  
    cin >> nilB;
    // rerata = (nilM + nilB) / 2;
    //rata = rerata(nilM, nilB);
    // st = status(rata);
    // st = status (rerata(nilM, nilB));
    cout << "status kelulusannya" << satus (rerate(nilM, nilB)) << endl;
    cout << " status kelulusan 2 " << status2(rerate(nilM, nilB), nilM);
}

    