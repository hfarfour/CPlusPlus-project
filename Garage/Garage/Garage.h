#ifndef Garage_h
#define Garage_h
#endif /* Garage_h */

using namespace std;
#include<iostream>
#include<string>


class aVehicle
{
  private:
    string vehicleType;
    string maker;
    string model;
    string engineType;
   unsigned int numberOfWheels;
  public:
    bool setVehicleType(string VehicleType);
    void setMaker(string Maker);
    void setModel(string Model);
    bool setEngineType(string EngineType);
    void setNumberOfWheels(unsigned int NumberOfWheels);
    
    void inputVehicleInformation()
       {
           cout<< "input vehicle type :"<< endl;
           cin>>vehicleType;
           cout<< "input maker :"<< endl;
           cin>>maker;
           cout<< "input model :"<< endl;
           cin>>model;
           cout<< "input engine type :"<< endl;
           cin>>engineType;
           cout<<"input number of wheels :"<<endl;
           cin>>numberOfWheels;
           
       }
       void printVehicleInformation()
       {
           cout<<"vehicle type"<<" "<<vehicleType<<" "<<"\n"<<"maker"
           <<" "<<maker<<" "<<"\n"<<"modle"<<" "<<model<<" "<<"\n"<<"engine type"<<" "<<engineType<<" "<<"\n"<<"number of eheels"<<" "<<numberOfWheels<<" "<<endl;
       }
       string getVehicalType();
       string getMaker();
       string getModel();
       string getEngineType();
      unsigned int getNumberOfWheels();
    
       aVehicle();
       ~aVehicle();
};


class aCustomer
{
 private:
    string name;
    string address;
    string phoneNumber;
    string notes;
 public:
    void setName(string Name);
    void setAddress(string Address);
    void setPhoneNumber(string PhoneNumber);
    void setNotes(string Notes);
    
    string getName();
    string getAddress();
    string getPhoneNumber();
    string getNotes();
    
    void inputCustomerInformation()
    {
        cout<< "input name : "<< endl;
        cin>>name;
        cout<< "input address : "<< endl;
        cin>>address;
        cout<< "input phone Number :  "<< endl;
        cin>>phoneNumber;
        cout<< "input notes : "<< endl;
        cin>>notes;
    }
    void printCustomer()
    {
    cout<<"name" << "\n" <<name  <<"address"
    "\n"<<address  <<"phone Number" <<"\n"<<phoneNumber  <<"notes"<<"\n"<<notes  <<endl;
    }
    aCustomer();
    ~aCustomer();
};

class aBooking
{
  private:
    string serviceRequired;
    string date;
    string time;
    float quotedPrice;
  public:
    aVehicle theVehicle;
    aCustomer theCustomer;
    void setServiceRequired(string ServiceRequired);
    void setDate(string Date);
    void setTime(string Time);
    void setQuotedPrice(float QuotedPrice);
    
    void inputBookingInformation()
    {
        theVehicle.inputVehicleInformation();
        cout<< "input customer "<< endl;
        theCustomer.inputCustomerInformation();
        cout<< "input service require :"<< endl;
        cin>>serviceRequired;
        cout<< "input date: "<< endl;
        cin>>date;
        cout<<"input time:"<<endl;
        cin>>time;
        cout<<"quoted price: "<<endl;
        cin>>quotedPrice;
        
    }
    void printBookingInformation()
    {
    
        cout<<"booking  for this  vehicle" << endl;
        theVehicle.printVehicleInformation();
        
        cout <<"booked for this customer" << endl;
        theCustomer.printCustomer();
        
        cout <<"service required"<<"\n"<<serviceRequired<<"Date "<<"\n"<<date<<"time"<<"\n"<<time<<"quoted price"<<"\n"<<quotedPrice;
    }
    
    string getServiceRequired();
    string getDate();
    string getTime();
    float getQuotedPrice();
    
    aBooking();
    ~aBooking();
};

class aPart
{
  private:
    string partsName;
    string suitableForVehicleMake;
    string suitableForVehicleModel;
    float price;
    int numberOfStock;
  public:
    void setPartsName(string PartsName);
    void setSuitableForVehicleMake(string SuitableForVehicleMake);
    void setSuitableForVehicleModel(string SuitableForVehicleModel);
    void setPrice(float Price);
    void setNumberOfStock(int NumberOfStock);
   
    string getPartsName();
    string getSuitableForVehicleMake();
    string getSuitableForVehicleModel();
    float getPrice();
    int getNumberOfStock();
    
    void inputParts()
         {
             cout<< "input part name: "<< endl;
             cin>>partsName;
             cout<< "suitable for vehicle make :"<< endl;
             cin>>suitableForVehicleMake;
             cout<< "suitable For vehicle model: "<< endl;
             cin>>suitableForVehicleModel;
             cout<< "input the price :"<< endl;
             cin>>price;
             cout<<"number of stock: "<<endl;
             cin>>numberOfStock;
         }
         void printPartsInformation()
         {
         cout<<"parts name"<<" "<<partsName<<" "<<"\n"<<"suitable for vehicle make"
             <<" "<<suitableForVehicleMake<<" "<<"\n"<<"suitable for vehicle model"<<" "<<suitableForVehicleModel<<" "<<"\n"<<"the price is"<<" "<<price<<" "<<"\n"<<"number of stock"<<" "<<numberOfStock<<" "<<"/n";
         }
       aPart();
       ~aPart();
};

class menu
{
public:
    aCustomer c;
    aVehicle v;
    aBooking b;
    aPart p;
    
     void displayMenu()
    {
        int Info;
        cout <<"1.customer details"<<endl;
        cout<<"2.vehicle information"<<endl;
        cout<<"3.booking information"<<endl;
        cout<<"4.parts information"<<endl;
        cin>>Info;

     switch(Info)
    {
    case 1:
           c.inputCustomerInformation();
            break;
    case 2:
            v.inputVehicleInformation();
            //add to vehicle vector
            break;
    case 3:
            b.inputBookingInformation();
            break;
    case 4:
            p.inputParts();
            break;
    case 5:
            //exit(0);
          //  break;
        default:
            cout<<"Invalid input,tary again"<<endl;
            
     }
   }
};
  

        
        
