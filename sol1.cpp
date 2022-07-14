#include<bits/stdc++.h>

using namespace std;

struct Vehicle
{
    int two_wheeler = 0;
    int four_wheeler = 0;
};

Vehicle get_vehicles(int vehicle, int wheel)
{
    Vehicle vehicles;

    int two_wheeler;
    int four_wheeler;

    for(four_wheeler=0; four_wheeler<=vehicle; four_wheeler++)
    {
        two_wheeler = vehicle - four_wheeler;

        if(two_wheeler * 2 + four_wheeler * 4 == wheel)
        {
            vehicles.two_wheeler = two_wheeler;
            vehicles.four_wheeler = four_wheeler;

            return vehicles;
        }
    }

    for(vehicles.two_wheeler; vehicles.two_wheeler<=vehicle; vehicles.two_wheeler++)
    {
        if(vehicles.two_wheeler * 2 + vehicles.four_wheeler * 4 == wheel)
        {
            return vehicles;
        }
    }

    for(vehicles.four_wheeler; vehicles.four_wheeler<=vehicle; vehicles.four_wheeler++)
    {
        if(vehicles.two_wheeler * 2 + vehicles.four_wheeler * 4 == wheel)
        {
            return vehicles;
        }
    }

    return vehicles;      
}

int main()
{
    int vehicle = 100;
    int wheel = 100;

    //cin>>vehicle>>wheel;

    // Invalid Test Case
    if((wheel%2!=0 or wheel<2) or vehicle>wheel)
    {
        cout<<"INVALID INPUT";
        return 0;
    }

    Vehicle vehicles = get_vehicles(vehicle, wheel);

    cout<<vehicles.two_wheeler<<" "<<vehicles.four_wheeler;

    return 0;
}