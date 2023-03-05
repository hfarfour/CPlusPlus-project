#include<iostream>
using namespace std;
#include <stdio.h>
#include"Garage.h"
#include<string>


bool aVehicle::setVehicleType(string VehicleType)
        {
            if (VehicleType=="car" || VehicleType=="van" || VehicleType == "motorbike"|| VehicleType=="lorry")
               {
        vehicleType = VehicleType;
                return true;
                }
            else
                {   return false;
                    
                }
        }
 void aVehicle::setMaker(string Maker)
        {
            maker=Maker;
        }
 void aVehicle::setModel(string Model)
        {
            model=Model;
        }
 bool aVehicle::setEngineType(string EngineType)
        {
        if (EngineType=="petrol" || EngineType=="diesel"||EngineType=="hybird"||EngineType=="electric")
        {
            engineType=EngineType;
            return true;
        }
        else
            return false;
            }
 void aVehicle::setNumberOfWheels(unsigned int NonmberOfWheels)
            {
                numberOfWheels=NonmberOfWheels;
            }
    
    string aVehicle::getVehicalType()
            {
                return vehicleType;
            }
    
    string aVehicle::getMaker()
            {
                return maker;
            }

    string aVehicle::getModel()
            {
                return model;
            }
    string aVehicle::getEngineType()
            {
                return engineType;
            }
            
    unsigned int aVehicle::getNumberOfWheels()
            {
                return numberOfWheels;
            }

   aVehicle::aVehicle()
            {
                
            }
   aVehicle::~aVehicle()
            {
                
             }


void aCustomer::setName(string Name)
  {
    name=Name;
  }
void aCustomer::setAddress(string Address)
  {
    address=Address;
  }
void aCustomer::setPhoneNumber(string PhoneNumber)
  {
    phoneNumber=PhoneNumber;
  }
void aCustomer::setNotes(string Notes)
  {
    notes=Notes;
  }

string aCustomer::getName()
  {
    return name;
  }
string aCustomer::getPhoneNumber()
  {
    return phoneNumber;
  }
string aCustomer::getNotes()
  {
    return notes;
  }
aCustomer::aCustomer()
  {
    
  }
aCustomer::~aCustomer()
 {
    
 }

   void aBooking::setServiceRequired(string ServiceRequired)
       {
      serviceRequired=ServiceRequired;
       }
   void aBooking::setDate(string Date)
       {
           date=Date;
       }
       
   void aBooking::setTime(string Time)
       {
           time=Time;
       }
   void aBooking::setQuotedPrice(float QuotedPrice)
       {
           quotedPrice=QuotedPrice;
       }

     string aBooking::getServiceRequired()
      {
           return serviceRequired;
      }
     string aBooking::getDate()
      {
     return date;
      }
     string aBooking::getTime()
       {
      return time;
       }
      float aBooking::getQuotedPrice()
       {
      return quotedPrice;
       }

     aBooking::aBooking()
       {
    
       }
    aBooking::~aBooking()
       {
    
       }


   void aPart::setPartsName(string PartsName)
   {
       partsName=PartsName;
   }
   void aPart::setSuitableForVehicleMake(string SuitableForVehivleMake)
   {
       suitableForVehicleMake=SuitableForVehivleMake;
   }
   
    void aPart::setSuitableForVehicleModel(string SuitableForVehicleModel)
   {
       suitableForVehicleModel=SuitableForVehicleModel;
   }
   void aPart::setPrice(float Price)
   {
       price=Price;
   }
   void aPart::setNumberOfStock(int NumberOfStock)
   {
       numberOfStock=NumberOfStock;
   }


   string aPart::getPartsName()
   {
    return partsName;
   }
   string aPart::getSuitableForVehicleMake()
   {
   return suitableForVehicleMake;
   }
   string aPart::getSuitableForVehicleModel()
   {
   return suitableForVehicleModel;
   }
  float aPart::getPrice()
   {
   return price;
   }
   int aPart::getNumberOfStock()
   {
   return numberOfStock;
   }
 aPart::aPart()
   {
    
   }
 aPart::~aPart()
   {
    
   }
