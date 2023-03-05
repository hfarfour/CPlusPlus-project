#include <iostream>
#include <vector>
#include"Garage.h"
using namespace std;

int main()
{
  menu m;
  bool again = true;
  while(again)
  {
      m.displayMenu();
      string answer;
      cout << "Do you want to see the menu again ?" << endl;
      cin >> answer;
      if (answer == "yes")
      {
          again = true;
      }
      else
      {
          again = false;
      }
    
  }
    
    
    bool carryOn =true;
      vector<aVehicle> vehicles;
    while(carryOn)
    {
      aVehicle vehi;
      vehi.inputVehicleInformation();
      vehicles.push_back(vehi);
        string add;
        cout<<"Add Another Vehicle :";
        cin>>add;
        
        if (add=="yes")
        {
            carryOn=true;
            
        } else
            carryOn=false;
    }
 for (int i=0;i<vehicles.size();i++)
   {
      aVehicle v = vehicles[i];
   }
    
     bool carry_On = true;
      vector<aCustomer> customers;
    while(carry_On)
   {
     aCustomer cust;
     cust.inputCustomerInformation();
     customers.push_back(cust);
    string resp;
     cout<<"Add Another Customer :";
     cin>>resp;
     if (resp=="yes")
     {
     carry_On = true;
     } else
        carry_On = false;
 }
    for (int i=0;i<customers.size();i++)
     {
        aCustomer x= customers[i];
     }
    bool(book) = true;
         vector<aBooking> bookings;
    while(book)
    {
        aBooking books;
        books.inputBookingInformation();
        bookings.push_back(books);
        string booking;
        cout<<"Add Anoyher Booking :";
        cin>>booking;
        if(booking == "yes")
        {
            book = true;
        }else
        {  book = false;}
    }
    for (int i=0;i<bookings.size();i++)
      {
         aBooking b = bookings[i];
         b.printBookingInformation();
      }
    
   bool(partsNo)= true;
     vector<aPart> parts;
     while(partsNo)
 {
    aPart part;
    part.inputParts();
    parts.push_back(part);
    string prt;
    cout<<"Add Another part:";
    cin>>prt;
    if(prt=="yes")
    {
        partsNo=true;
    } else
    partsNo=false;
 }
 for (int i=0;i<parts.size();i++)
   {
     aPart x = parts[i];
   x.printPartsInformation();
   }

}


