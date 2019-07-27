//  Fedora+ Classes.cpp
//  Created by TeamZipFile on 4/24/19.

#include <stdio.h>

class Call{
private:
    string phoneNum;
    string dateOfCall;
    int callDuration;
    
public:
    void makeCall(string phoneNum){
        //action to make phone call with parameter passed in
    }
    void hangUp(){
        //end current call on smartphone...
    }
}

class Text{
private:
    int textId;
    string message;
    string toNum;
    string toName;
    
public:
    void openText(){
        //action to open the text
    }
    void sendText(string toName){
        this->toName = toName;
        //sets text class's name equal to toName parameter passed in
    }
    
}

class PhoneBook{
private:
    map<string, name> contacts;
    
public:
    string getContact(string findName){
        //find contact name in contacts map where key is equal to findName parameter
    }
}

class Smartphone{
private:
    string number;
    vector<Call> calls;
    vector<Text> texts;
    PhoneBook PhoneBook;
public:
    void turnOnBlueTooth(){
        //turns on BlueTooth via built-in smartphone function call...
    }
}

class VoiceCommand{
private:
    string command;
public:
    void verifyCommand(){
        //checks local command variable for verification
    }
}

class User{
private:
    string name;
    string email;
    string passcode;
public:
    void verifyPasscode(){
        //called to verify user password
    }
    void setUserName(){
        //sets username
    }
    void setEmail(){
        //sets email address
    }
}

class GPS{
private:
    int currentLocation;
public:
    void setCurrentLocation(){
        //will use sensors to find user's current location
    }
}

class HeartbeatMonitor{
private:
    int currentBeat;
public:
    void getCurrentBeat(){
        //will use sensors to get user's current heartbeat and save it locally
    }
}

class BloodSugarMonitor(){
private:
    int bloodSugar;
public:
    void getCurrentBeat(){
        //will use sensors to get user's current blood sugar and save it locally
    }
}

class VoiceAssistant(){
private:
    //name of voice assistant
    string name;
public:
    void processUserInput(){
        //processes user input to see what actions should be performed
    }
}

class FedoraSystem{
private:
    //fedora system has access to other classes
    GPS fedoraGPS;
    HeartbeatMonitor fedoraHeartMonitor;
    BloodSugarMonitor fedoraBloodSugarMonitor;
    VoiceAssistant fedoraVoiceAssistant;
    User fedoraUser;
    Smartphone fedoraSmartphone;
    
    string serialNumber;
public:
    FedoraSystem::FedoraSystem(Smartphone phone){
        //constructor calls connectToPhone to accept the phone parameter being passed in
        connectToPhone(phone);
    }
    void connectToPhone(){
        //connects to user's phone and sets up the user's phone
    }
}
