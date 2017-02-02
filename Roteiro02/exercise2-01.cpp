#include <iostream>

using namespace std;

void hourConverter(int, int);

int main()
{
  int i=0;

  cout << "00:00 = ";
  hourConverter(24, 00);

  cout << "14:25 = ";
  hourConverter(14, 25);
  
  return 0;
}

void hourConverter(int hour, int minutes)
{
  if(hour > 12)
  {
    hour -= 12;
    cout << hour << ":" << minutes <<" PM" << endl;
  }
  else{
    cout << hour << ":" << minutes <<" PM" << endl;
  }

}
