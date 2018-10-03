   //Armaan Hossain
   //Program to calculate monthly earnings per month
  
   #include <iostream>
   using namespace std;
 
   int main()
   {
          //variables
          int  hourpay, totalpay, totalhour, numweeks;
          char repeat;
 
          //init
          totalpay = 0;
 
          //bulk
          do
          {
                  cout << "Welcome! Enter your hourly work rate: ";
                  cin >> hourpay;
                  cout << "How many weeks of work are you trying to calculate?: ";
                  cin >> numweeks;
                  int *hourweek = new int[numweeks];
                  for (int i = 0; i<numweeks;i++)
                  {
                          cout << "Enter hours worked during week " << i+1 << ": ";
                          cin >> hourweek[i];
                          totalhour  = totalhour + hourweek[i];
                  }
                  totalpay = totalhour*hourpay;
                  cout << "Your total payout for " << numweeks << " weeks will be " << totalpay << endl;
                  cout << "would you like to recalculate your pay?: ";
                  cin >> repeat;
          }while ((repeat == 'Y') || (repeat == 'y'));
 
          return 0;
   }
