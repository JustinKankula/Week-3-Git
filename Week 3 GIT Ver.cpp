// Week3 Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //Display Header
    cout << ".................................................." << endl;
    cout << "ITCS 2530 - Programming Assignment for week #3" << endl;
    cout << ".................................................." << endl;
    cout << endl;
    cout << endl;

    //Variables

    //---Input Variables---
    string Item;
    string Fragile;
    double Total;
    string Destination;

    //---Output Variables
    double total_ShippingFees;
    double total_ShippingCosts;

    //---TOTAL SIZE---

    const int Small = 50;
    const int Medium = 100;
    const int Large = 150;


    //---Fragile Fee---
    int Fragile_FEE = 2;

    //---USA Shipping Fees---
    const double USA_S_FEE = 6;
    const double USA_M_FEE = 9;
    const double USA_L_FEE = 12;

    //---Canada Shipping Fees---
    const double CAN_S_FEE = 8;
    const double CAN_M_FEE = 12;
    const double CAN_L_FEE = 15;

    //---Australia Shipping Fees---
    const double AUS_S_FEE = 10;
    const double AUS_M_FEE = 14;
    const double AUS_L_FEE = 17;

    //---Mars Mission Estimates from Nasa---
    const double MARS_S_FEE = 2700000010;
    const double MARS_M_FEE = 2700000014;
    const double MARS_L_FEE = 2700000017;

    //---Other---
    const double Free = 0;

    //---Error String---
    string ERROR = "Invalid entry, exiting";


    //Getting Inputs

    //---Item---
    cout << left << setw(49) << setfill('.') << "Please enter the item name (no spaces)" << ':';
    cin >> Item;
    //CAPS
    transform(Item.begin(), Item.end(), Item.begin(), ::toupper);

    //---Fragile---
    cout << left << setw(49) << setfill('.') << "Is this item fragile? (y=yes/n=no)" << ':';
    cin >> Fragile;
    //CAPS
    transform(Fragile.begin(), Fragile.end(), Fragile.begin(), ::toupper);

    //Input Check
    if (Fragile == "Y" || Fragile == "N")
    {
        if (Fragile == "N")
            Fragile_FEE = 0;
        //TOTAL
        cout << left << setw(49) << setfill('.') << "Please enter your order total" << ':';
        cin >> Total;


        //---Destination---
        cout << left << setw(49) << setfill('.') << "Please enter destination. (usa/can/aus/mars)" << ':';
        cin >> Destination;
        //CAPS
        transform(Destination.begin(), Destination.end(), Destination.begin(), ::toupper);

        //Input Check
        if (Destination == "USA" || Destination == "CAN" || Destination == "AUS" || Destination == "MARS")
        {


            //Getting Total Fees
            if (Destination == "USA")
                if (Total <= Small)
                    total_ShippingFees = USA_S_FEE + Fragile_FEE;
                else if (Total > Small && Total <= Medium)
                    total_ShippingFees = USA_M_FEE + Fragile_FEE;
                else if (Total > Medium && Total <= Large)
                    total_ShippingFees = USA_L_FEE + Fragile_FEE;
                else
                    total_ShippingFees = Free + Fragile_FEE;

            else if (Destination == "CAN")
                if (Total <= Small)
                    total_ShippingFees = CAN_S_FEE + Fragile_FEE;
                else if (Total > Small && Total <= Medium)
                    total_ShippingFees = CAN_M_FEE + Fragile_FEE;
                else if (Total > Medium && Total <= Large)
                    total_ShippingFees = CAN_L_FEE + Fragile_FEE;
                else
                    total_ShippingFees = Free + Fragile_FEE;

            else if (Destination == "AUS")
                if (Total <= Small)
                    total_ShippingFees = AUS_S_FEE + Fragile_FEE;
                else if (Total > Small && Total <= Medium)
                    total_ShippingFees = AUS_M_FEE + Fragile_FEE;
                else if (Total > Medium && Total <= Large)
                    total_ShippingFees = AUS_L_FEE + Fragile_FEE;
                else
                    total_ShippingFees = Free + Fragile_FEE;

            else if (Destination == "MARS")
                if (Total <= Small)
                    total_ShippingFees = MARS_S_FEE + Fragile_FEE;
                else if (Total > Small && Total <= Medium)
                    total_ShippingFees = MARS_M_FEE + Fragile_FEE;
                else if (Total > Medium && Total <= Large)
                    total_ShippingFees = MARS_L_FEE + Fragile_FEE;
                else
                    total_ShippingFees = Free + Fragile_FEE;

            //getting Total Costs
            total_ShippingCosts = total_ShippingFees + Total;



            //Printing Results
            cout << endl;
            cout << left << setw(39) << setfill('.') << "Your item is" << Item << endl;
            cout << left << setw(39) << setfill('.') << "Your shipping cost is" << "$" << total_ShippingFees << endl;
            cout << left << setw(39) << setfill('.') << "You are shipping to" << Destination << endl;
            cout << left << setw(39) << setfill('.') << "Your total shipping costs are" << "$" << total_ShippingCosts << endl;
            cout << endl;
            cout << right << setw(39) << setfill('-') << "Thank You!" << endl;
            cout << endl;



        }
        else
        {
            cout << endl;
            cout << ERROR << endl;
        }

    }
    else
    {
        cout << endl;
        cout << ERROR;
    }





    //Pausing    
    system("pause");
    return 0;
}

