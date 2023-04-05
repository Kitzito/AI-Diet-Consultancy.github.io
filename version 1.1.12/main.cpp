//c++ program to create an AI DIET CONSULTANCY
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <conio.h>
#include <ctime>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string.h>
#include "learner.h"

using namespace std;
string usn;
int m;

//Login and Registration Functions
void valid(string str)
{
    string dir, user;
    ifstream file;
    dir = str+".txt";
    file.open(dir.c_str());
    if(!file.is_open() && file.fail())
    {
        //file.close();
        return;
    }
    else
    {
        m++;
        if(m==3){
            cout<<"\nthis username already exist. \n try again.";
            //file.close();
            return;
        }
        cout<<"\nthis username already exist. \n create a username: ";
        cin>>usn;
        //file.close();
        valid(usn);
    }
}
int main()
{
    float height;
    float weight;
    float BMI;
    char d,c,y,n;
    int opp,opera,i;
    string ans, psd, name, fname, bio, usern, pw, line, nusn, username, nname;
    ofstream fileo;
    ifstream filei;
    mainmenu:
        cout<< "\n\n";
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "----------------------WELCOME TO KZ AI DIET CONSULTANCY-------------------------" << endl;
    cout << "----------------------------all rights reserved---------------------------------" << endl;
    cout << "------------------------------version 1.1.12------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------\n\n" << endl;

do{//This is the overall main do while loop carrying all the other do while and while loops
    cout<<"----------------------------KZ AI DIET CONSULTANCY------------------------------ \n";
    cout<<"-----------------------------------MAIN MENU------------------------------------ \n";
    cout<<"(0*)EXIT \n";
    cout<<"(1*)REGISTER \n";
    cout<<"(2*)LOGIN \n";
    cout<<"(3*)FORGOTTEN PASSWORD \n";
    cout<<"(4*)CUSTOMER SERVICE \n\n";
    cout<<"|-------------------------------------------------------------------------------|\n";
    cout<<"|*************ONLY INTEGER INPUTS ARE VALID IN PROMPT MENU BOXES!!!*************|\n";
    cout<<"|-------------------------------------------------------------------------------|\n\n";
    cout<<"---Select Operation: ";
    cin>>opp;

    switch(opp){

case 0:
    if(opp == 0){
            close1:
            cout<< "\n\nConfirm Exit (y/n): ";
            cin>>c;
            if(c == 'y'){
                goto close;
            }
            else if(c == 'n'){
                goto mainmenu;
            }
    else{
        cout<< "\n\nInvalid Operation!!! Please, Yield to Instructions. \n";
        goto close1;
    }
            close:
    cout<<"--------------------------------------EXIT--------------------------------------- \n";
    cout<<"----------Proudly Sponsored by BILL'SUPDATE and LANDMARK TECHNOLOGIES.----------- \n";
    cout<<"---------------In association with BABILA GEORGE REAL ESTATE AGENCY-------------- \n";
    cout<<"------------------Thanks for patronizing KZ AI DIET CONSULTANCY.----------------- \n";
    cout<<"----------------contact:+237682726566 && email:mnkitzito@gmail.com--------------- \n";
    cout<<"-----Follow KZ AI DIET CONSULTANCY on FACEBOOK, GITHUB, LINKEDLN, CONNECTYU.----- \n";
    cout<<"-------------------Powered by BILL'SUPDATE all rights reserved.------------------ \n";
    exit(0);
    }
    break;

case 1:
    if(opp == 1){
            createaccount:
        cout<< "\n\n--------------------------------CREATE ACCOUNT---------------------------------- \n";
        cout<< "Full Name: ";
        cin.ignore();
        getline(cin,name);
        cout<< "Username: ";
        cin>>usn;
        m=0;
        valid(usn);
        if(m>=3){
            continue;
        }
        cout<<"Password: ";
        cin>>psd;

        cout<< "Have you Read, Understood and Accepted our Disclaimer?(y/n): ";
        cin>>c;
        if(c != 'y'){
                cout<< "\n You Must Read, Understand and Agree Accept our Disclaimer!!!\n";
            goto disclaimer;
        }
        fname=usn+".txt";
        //cout<<fname;
        fileo.open(fname.c_str());
        fileo<<usn<<endl<<name<<endl<<psd<<endl;
        cout<< "---------------------------REGISTRATION SUCCESSFULL!----------------------------\n";
        /*   cout<< "--------Enter Profile Name: ";
        cin.ignore();
        getline(cin,bio);
        fileo<<bio<<endl;
        cout<< "Account saved as: "<<bio; */
        do{
                loginoptions:
            cout<< "\n\n0. EXIT \n";
            cout<< "1. LOGIN \n";
            cout<< "2. MAINMENU \n\n";
            cout<< "select operation: ";
            cin>>opera;

            switch(opera)
            {
        case 0:
            if(opera == 0){
                    logop:
                      cout<< "\n\nConfirm Exit (y/n): ";
            cin>>c;
            if(c == 'y'){
                goto close;
            }
            else if(c == 'n'){
                goto loginoptions;
            }
    else{
        cout<< "\n\nInvalid Operation!!! Please, Yield to Instructions. \n";
        goto logop;
    }
            }
            break;
        case 1:
            if(opera == 1){
                goto loginaccount;
            }
            break;
        case 2:
            if(opera == 2){
                goto mainmenu;
            }
            break;

             default:
    cout<< "Syntax Error OR Invalid Operation!!!";
    goto loginoptions;
    break;
            }
        }while(opera != 0);

        fileo.close();
    }
    else{
        exit(0);
    }
    break;

case 2:
    if(opp == 2){
            loginaccount:
        cout<< "\n\n-------------------------------------LOGIN--------------------------------------\n";
        cout<< "username: ";
        cin>>usn;
        cout<<"password: ";
        cin>>psd;
        fname = usn+".txt";
        filei.open(fname.c_str());
        if(!filei.is_open() && filei.fail())
        {
            cout<< "\n You are not registered, please register before logging in !!!. \n\n";
            option:
            cout<< "---0. EXIT \n";
            cout<< "---1. CREATE ACCOUNT \n";
            cout<< "---2. MAINMENU \n\n";
            cout<< "---select operation: ";
            cin>>c;

            if(c == '0'){
                 off:
                      cout<< "\n\nConfirm Exit (y/n): ";
            cin>>c;
            if(c == 'y'){
                goto close;
            }
            else if(c == 'n'){
                goto option;
            }
    else{
        cout<< "\n\nInvalid Operation!!! Please, Yield to Instructions. \n";
        goto option;
    }
            }

            else if(c == '1'){
                goto createaccount;
            }

            else if(c == '2'){
                goto mainmenu;
            }

            else{
                cout<< "\nInvalid Operation!!! \n";
                goto option;
            }

            filei.close();
            continue;
        }
        getline(filei,usern);
        getline(filei,line);
        getline(filei,pw);
        if(usn==usern && psd==pw) //if statement of login test of username and password
        {
        cout<< "\n\n";
        cout<<"----------------------------------LOGIN SUCCESSFULL!!!--------------------------\n";
        accountinfo:
        cout<<"----------------------------------Username: "<<usern<<endl;
        cout<<"----------------------------------Full Name: "<<line<<endl;
        cout<<"-----------Welcome "<<usern<<"-------------" <<endl;
        //cout<<"----------------------------------Account Name :"<<line<<endl;
        cout<<"--------------------------------------------------------------------------------\n";
        cout<< "\n\n";
/*
        cout << "do you want to know your Body Mass Index? (y/n): ";
        cin>>c;
        if(c == 'y'){
        //BMI Stuff and Food Recommendations
        cout<< "please, enter weight in kilograms(kg): ";
        cin>>height;
        cout<< "please, enter height in meters(M): ";
        cin>>weight;
        BMI = weight / (height * height);
        cout << "Your BMI is: "<<BMI<<"\n";

        if(BMI < 18.5){
            cout<< "-----you are underweight. Thin and Skinny";
        }
        else if(BMI > 18.5 && BMI <24.9){
            cout<< "-----Congratulations, you are healthy \n";
            cout<< "-----PLease, maintain your diet and workout routine";
        }
        else if(BMI >25 && BMI <29.9){
            cout<< "-----you are overweight";
        }
        else if(BMI > 30){
            cout<< "-----you are obese";
        }
    }*/
    do{ //do while loop for sub menu login
            submenu:
            cout<< "\n\n------------------------------------SUBMENU-------------------------------------\n";
            cout<<"0. EXIT \n";
            cout<<"1. BODY MASS INDEX \n";
            cout<<"2. BODY MASS INDEX RULES \n";
            cout<<"3. CHAT WITH AI BOT ASSISTANT \n";
            cout<<"4. SETTINGS \n";
            cout<<"5. LOGOUT \n\n";
            cout<<"select operation: ";
            cin>>opera;

            switch(opera){
        case 0:
            if(opera == 0){
                drop:
            cout<< "\n\nConfirm Exit (y/n): ";
            cin>>c;
            if(c == 'y'){
                goto close;
            }
            else if(c == 'n'){
                goto submenu;
            }
    else{
        cout<< "\n\nInvalid Operation!!! Please, Yield to Instructions. \n";
        goto drop;
    }
            }
                break;

        case 1:
            if(opera == 1){
                    string botname = "KZ-BOT838-XP";
                //BMI Stuff and Food Recommendations
                cout<< "punch (0), (Enter) to zapback to Sub Menu \n\n";
                cout<< "\n-----"<<botname<<": Hi "<<usn<<" ";
        cout<< "\n-----"<<botname<<": please, enter weight in kilograms(kg): ";
        cin>>weight;
        if(weight == 0){
            cout<<"--------------------------------------SUBMENU-----------------------------------\n";
            goto submenu;
        }
        cout<< "\n-----"<<botname<<": please, enter height in meters(M): ";
        cin>>height;
        if(height == 0){
            cout<<"--------------------------------------SUBMENU-----------------------------------\n";
            goto submenu;
        }
        BMI = weight/(height * height);
        cout << "\n-----"<<botname<<": Your BMI is: "<<BMI<<"";

        if(BMI < 18.5){
            cout<< "\n-----"<<botname<<": "<<usern<<", you are underweight \n\n";
            cout<< "---------Recommended 30days Diet Plan-------------- \n\n";
            cout<< "-------------------Breakfast----------------- \n";
            cout<< "---Three loafs of bread with peanut butter, \n";
            cout<< "Two boiled eggs, a glass of hot quality chocolate \n";
            cout<< "with quality cocoa or milk and a fruit of your choice \n\n";
            cout<< "----------------------Lunch------------------ \n";
            cout<< "---Grilled fish or chicken breast, tomato, cheese \n";
            cout<< "and ofcourse vegetables and a fruit of your choice \n\n";
            cout<< "---------------------Dinner------------------ \n";
            cout<< "---sweet potato mash, fried fish, milk and vegetables \n\n";
            cout<< "---------------------Dessert------------------ \n";
            cout<< "choconuts, yoghurt, pancakes with honey \n";
        }
        else if((BMI > 18.6) && (BMI <25.0)){
            cout<< "\n-----"<<botname<<": "<<usern<<", Congratulations, you are healthy. ";
            cout<< "\n-----"<<botname<<": PLease, maintain your diet and workout routine \n";
        }
        else if((BMI > 25.1) && (BMI < 29.9)){
            cout<< "\n-----"<<botname<<": "<<usern<<", you are overweight \n\n";
            cout<< "-------------Recommended Diet Plan----------------- \n";
            cout<< "-------------------Breakfast----------------- \n";
            cout<< "scrambled eggs with spinach and tomatoes  \n\n";
            cout<< "----------------------Lunch------------------ \n";
            cout<< "vegetable salad with lettuce, cucumber and tomatoes  \n\n";
            cout<< "---------------------Dinner------------------ \n";
            cout<< "bean chill with cauliflower rice \n\n";
            cout<< "---------------------Dessert------------------ \n";
            cout<< "apple slices and peanut butter \n";
        }
        else if(BMI > 30){
            cout<< "\n-----"<<botname<<": "<<usern<<", you are obese \n\n";
            cout<< "-------------Recommended Diet Plan----------------- \n";
            cout<< "-------------------Breakfast----------------- \n";
            cout<< "mashed avocado and a fried egg on a slice of toast  \n\n";
            cout<< "----------------------Lunch------------------ \n";
            cout<< "chicken salad with lettuce and corn  \n\n";
            cout<< "---------------------Dinner------------------ \n";
            cout<< "broccoli and sweet potato mash \n\n";
            cout<< "---------------------Dessert------------------ \n";
            cout<< "tangerine and cashew nuts \n";
        }
            }
    break;

        case 2:
            if(opera == 2){
                    bmirules:
                cout<<"-------------------------------------BMI RULES----------------------------------\n";
                cout<< "1. You are underweight if your Body Mass Index (BMI) is below 18.5 \n";
                cout<< "2. You are perfectly healthy if your Body Mass Index (BMI) is between 18.6 and 25.0 \n";
                cout<< "3. You are overweight if your Body Mass Index (BMI) is between 25.1 and 29.9 \n";
                cout<< "4. You are obese if your Body Mass Index (BMI) is above than 30.0 \n";
            }
            break;

        case 3:
           if(opera == 3){
                    // bot1:
                    string botname = "KZ-BOT838-XP";
                    string bossname = "Engineer Kitzito";
                cout<< endl;
                cout<< "-----------WELCOME TO KZ AI DIET CONSULTANCY CHATBOT CUSTOMER SERVICE----------\n\n";
                cout<< "-----"<<botname<<": Hi "<<usern<<" my name is "<<botname<<" your AI Assistant \n";
                cout<< "-----"<<botname<<": You can ask me anything "<<usern<<" \n\n";
                do{ //do while loop for chatbot838
                        bot838:
                    cout<< "\n---"<<usern<<": ";
                    srand(time(0));
                    int z;
                    z = 1 + (rand() % 7);
                    char s[255];
                    gets(s);
                    strlen(s);

                    if(!strcmp(s, "hi") || !strcmp(s, "hello") || !strcmp(s, "hello there") || !strcmp(s, "hey") || !strcmp(s, "yoo") || !strcmp(s, "hey there") || !strcmp(s, "hi there") || !strcmp(s, "greetings"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": hi there "<<usern<<"...\n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": hello there "<<usern<<"...\n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": hi "<<usern<<"...\n";
                        break;
                    case 4:
                        cout<< "----------"<<botname<<": hello "<<usern<<"...\n";
                        break;
                    case 5:
                        cout<< "-----"<<botname<<": hey "<<usern<<"...\n";
                        break;
                    case 6:
                        cout<< "-----"<<botname<<": yoo... sup... "<<usern<<"\n";
                        break;
                    case 7:
                        cout<< "-----"<<botname<<": at your service Boss "<<usern<<"...\n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "how are you") || !strcmp(s, "how are you doing") || !strcmp(s, "sup") || !strcmp(s, "you good") || !strcmp(s, "whatsup") || !strcmp(s, "how do you do") || !strcmp(s, "wetin dey sup"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": i am doing alright, trust you are too "<<usern<<"...\n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": not to worry Boss, i am doing ay ok "<<usern<<"...\n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": all good boss "<<usern<<"...\n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": everything's ay ok Boss, thanks for asking "<<usern<<"...\n";
                        break;
                    case 5:
                        cout<< "-----"<<botname<<": i am fine boss "<<usern<<"...\n";
                        break;
                    case 6:
                        cout<< "-----"<<botname<<": all is well sir "<<usern<<"...\n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "what is your name") || !strcmp(s, "what do i call you") || !strcmp(s, "who are you") || !strcmp(s, "what are you called") || !strcmp(s, "whats the name") || !strcmp(s, "what do they call you") || !strcmp(s, "tell me your name"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": i am "<<botname<<" \n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": my name is "<<botname<<" \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": "<<botname<<" is my name \n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": i go by name "<<botname<<" \n";
                        break;
                    case 5:
                        cout<< "-----"<<botname<<": i was given the name "<<botname<<" \n";
                        break;
                    case 6:
                        cout<< "-----"<<botname<<": hello, my name is "<<botname<<" \n";
                        break;
                    case 7:
                        cout<< "-----"<<botname<<": hi, my name is "<<botname<<" \n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "thanks") || !strcmp(s, "thank you") || !strcmp(s, "i appreciate") || !strcmp(s, "much appreciated") || !strcmp(s, "gracias") || !strcmp(s, "appreciate you") || !strcmp(s, "thanks again") || !strcmp(s, "you're doing well") || !strcmp(s, "alright") || !strcmp(s, "ok"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": my genuine pleasure "<<usern<<"...\n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": happy to help "<<usern<<"...\n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": just doing my job "<<usern<<"...\n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "alright") || !strcmp(s, "ok") || !strcmp(s, "understood" ) || !strcmp(s, "yeah") || !strcmp(s, "i understand"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": perfect \n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": sure \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": ok "<<usern<<"...\n";
                        break;
                        }
                    }

                    else if((!strcmp(s, "what are you")))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": I am your personal Bot Assistant "<<usern<<"...\n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": I am whatever you need me to be "<<usern<<"...\n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": I am a whole lot, your AI Assistant is one of them "<<usern<<"...\n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "who created you") || !strcmp(s, "who made you") || !strcmp(s, "who programmed you") || !strcmp(s, "who built you"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": Sponsored by Bill'sUpdate and Landmark Technologies, \n i was programmed by "<<bossname<<", assisted by Engr. John Bato and other Engineers \n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": I was Built by "<<bossname<<" assisted by Engr John Bato and other Engineers \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": "<<bossname<<" built me with the assistance of Engr. John Bato and other Engineers \n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": with helping hands from Engr. John Bato and Other Engineers, i was built by "<<bossname<<" \n";
                        break;
                    }
                }

                else if(!strcmp(s, "what is my name") || !strcmp(s, "what do they call me") || !strcmp(s, "what am i called") || !strcmp(s, "what do they call me") || !strcmp(s, "tell me my name"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": you are "<<usern<<" \n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": your name is "<<usern<<" \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": "<<usern<<" is your name \n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": you go by name "<<usern<<" \n";
                        break;
                        }
                    }


                    else if(!strcmp(s, "") || !strcmp(s, " ") || !strcmp(s, "   "))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": say something "<<usern<<" \n";
                        break;
                    /*case 2:
                        cout<< "-----"<<botname<<": i know a blank text when i see one "<<usn<<" \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": you gotta stop sending blank texts "<<usn<<" \n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": say that again "<<usn<<"... \n";
                        break;
                    case 5:
                        cout<< "-----"<<botname<<": pardon...?\n";
                        break;
                    case 6:
                        cout<< "-----"<<botname<<": seems i missed that part, could you say that again "<<usn<<"...\n";
                        break;
                    case 7:
                        cout<< "-----"<<botname<<": i don't understand "<<usn<<"...\n";
                        break;*/
                        }
                    }

                    else if(!strcmp(s, "0") || !strcmp(s, "exit") || !strcmp(s, "bye") || !strcmp(s, "goodbye") || !strcmp(s, "talk later") || !strcmp(s, "see you later"))
                            {
                                cout << "-----"<<botname<<": Alright "<<usn<<" \n";
                                cout << "-----"<<botname<<": Punch (y) to close conversation or (n) to continue conversation: ";
                                cin>>c;
                                if(c =='y'){
                                cout<< "-----"<<botname<<": Have an awesome day "<<usn<<" \n\n\n";
                                goto submenu;
                                }
                                else if(c == 'n'){
                                        cout<< "-----"<<botname<<": Thanks For Sticking Around "<<usn<<" \n";
                                    goto bot838;
                                }
                                else{
                                    cout<< "\n-----"<<botname<<": Invalid Key!!! please, yield to instructions "<<usn<<" \n";
                                    goto bot838;

                                }
                            }

                           /* else{
                                cout<< "\n-----"<<botname<<": i dont understand you "<<usn<<"... \n";
                            }*/

                }while(1); //end of chatbot838 do while loop
            }
            break;


        case 4:
            if(opera == 4){
                cout<< "--------------------------------------SETTINGS----------------------------------\n";
               /* goto accountinfo;
                    cout<< "punch (y) to exit to submenu or punch (n) to stay: \n";
                    cin>>c;
                    if(c == 'y'){
                        goto submenu;
                    }
                    else if(c == 'n'){
                        goto accountinfo;
                    }
                    else{
                        cout<< "Please, punch a valid operation key!!!\n";
                    }*/
                    do{ //View and Update account do while loop
                            vad:
                        cout<< "\n\n0. EXIT \n";
                        cout<< "1. VIEW ACCOUNT DETAILS \n";
                        cout<< "2. UPDATE ACCOUNT NAME \n";
                        cout<< "3. UPDATE USERNAME \n";
                        cout<< "4. UPDATE PASSWORD \n";
                        cout<< "5. BACK TO SUB MENU \n\n";
                        cout<< " select operation: ";
                        cin>>opera;

                        switch(opera)
                        {
                        case 0:
                                gone:
            cout<< "\n\nConfirm Exit (y/n): ";
            cin>>c;
            if(c == 'y'){
                goto close;
            }
            else if(c == 'n'){
                goto vad;
            }
    else{
        cout<< "\n\nInvalid Operation!!! Please, Yield to Instructions. \n";
        goto vad;
    }

            break;


        case 1:
        getline(filei,usn);
        getline(filei,line);
        getline(filei,pw);
        //getline(filei,BMI);
        cout<<"----------------------------------Username: "<<usern<<endl;
        cout<<"----------------------------------Full Name: "<<line<<endl;
        //cout<<"----------------------------------Account Name :"<<line<<endl;
        cout<<"----------------------------------Password: "<<pw<<endl;
        //cout<<"----------------------------------Current BMI: "<<BMI<<endl;
        cout<<"--------------------------------------------------------------------------------\n";
        cout<< "\n\n";
                            //goto accountinfo;
                            break;
                        case 2:
                            cout<< "OPERATION NOT VALID FOR NOW!!!";
                            goto vad;
                            break;
                        case 3:
                            cout<< "OPERATION NOT VALID FOR NOW!!!";
                            goto vad;
                            break;
                        case 4:
                            cout<< "OPERATION NOT VALID FOR NOW!!!";
                            goto vad;
                            break;
                        case 5:
                            goto submenu;
                            break;

                        default: //default for view/update account info
                            cout<< "INVALID OPERATION!!! \n";
                            cout<< "Please select from the list of valid operations";
                            goto vad;
                            break;
                        }

                        cout<<"\nproceed to other operations...?(Punch any key): ";
                            cin>> c;
                    }while(opera != 0); //end condition of the view / update account info
            }
            break;


        case 5:
            if(opera == 5){
                    logout:
                cout<< "---------------------------------LOGOUT INITIATED-------------------------------\n";
                cout<< "Confirm Logout(y/n): ";
                cin>>c;
                if(c == 'y'){
                cout<< "--------------------------------LOGOUT SUCCESSFULL------------------------------\n";
               // exit(0);
               goto mainmenu;
                }
                else if(c == 'n'){
                        cout<< "\n\n-----Thanks For Sticking Around \n";
                    goto submenu;
                }
            else{
                cout<< "\nInvalid Operation!!! Please, Yield to Instructions \n";
                goto logout;
            }
            }
            break;

        default:
            cout<< "invalid operation!!!";
            goto submenu;
            }
    cout<<"\n\nproceed to other operations...?(punch any key): ";
    cin>> c;
        }while(opera != 0); //end condition of do while loop for sub menu login


        filei.close();
        }

        //else statement for incorrect username or password during login session
        else if((usn!=usern) || (psd!=pw)){
            cout<<"\n Incorrect username or password!!! \n\n";
            option2:
            cout<< "\n\n---0. EXIT \n";
            cout<< "---1. TRY AGAIN \n";
            cout<< "---2. RETRIEVE ACCOUNT \n";
            cout<< "---3. CREATE ACCOUNT \n";
            cout<< "---4. MAINMENU \n\n";
            cout<< "---select operation: ";
            cin>>c;
            if(c == '0'){
                       option3:
                          cout<< "\n\nConfirm Exit (y/n): ";
            cin>>c;
            if(c == 'y'){
                goto close;
            }
            else if(c == 'n'){
                goto option2;
            }
    else{
        cout<< "\n\nInvalid Operation!!! Please, Yield to Instructions. \n";
        goto option3;
    }
            }

            else if(c == '1'){
                goto loginaccount;
            }

            else if(c == '2'){
                goto getaccount;
            }

            else if(c == '3'){
            goto createaccount;
            }

            else if(c == '4'){
                goto mainmenu;
            }

            else{
                cout<< "\n Invalid Operation!!! \n";
                cout<< "Please, select from the list of valid operations";
                goto option2;
            }

        }
        cout<<endl;
    }
    break;


case 3:
    if(opp == 3){
            getaccount:
        cout<<"-----------------------------FORGOTTEN PASSWORD!!!------------------------------\n";
        cout<< "Account Name: ";
        cin.ignore();
        getline(cin,nname);
        cout<<"Enter Username: ";
        cin>>username;
        //getline(cin,username);
        if((nname == name) && (username == usn)){
           cout<< "your password is: "<<psd<<" ";
            cout<< "\n\n--------------------------------ACCOUNT FOUND!!!--------------------------------\n";
            cout<< "For security purposes, please, Consider Changing your password after this session!!!";
            cout<< "\n\nProceed to MAIN MENU and login(punch any key): ";
            cin>>c;
            goto mainmenu;
        }
        else{
            cout<< "------------------------------ACCOUNT NOT FOUND!!!------------------------------\n";
           /* cout<< "\n\nDo You Want To Try Again...(y/n)?: ";
            cin>>c;
            if(c == 'y'){
                goto getaccount;
            }
            else if(c == 'n'){
                goto mainmenu;
            }
            else{
                cout<< "\n\nSeems You Want To Create a New Account(y/n): ";
                cin>>c;
                if(c == 'y'){
                    goto createaccount;
                }
                else if(c == 'n'){
                    goto getaccount;
                }
            }*/

            do{ //this is the forgotten password / password retrieval do while loop
                    passwordmenu:
                cout<< "\n\n0. EXIT \n";
                cout<< "1. TRY AGAIN \n";
                cout<< "2. CREATE NEW ACCOUNT \n";
                cout<< "3. MAINMENU \n\n";
                cout<< "Select Operation: ";
                cin>>opera;

                switch(opera){
            case 0:
                if(opera == 0){
                        passmenu:
                          cout<< "\n\nConfirm Exit (y/n): ";
            cin>>c;
            if(c == 'y'){
                goto close;
            }
            else if(c == 'n'){
                goto passwordmenu;
            }
    else{
        cout<< "\n\nInvalid Operation!!! Please, Yield to Instructions. \n";
        goto passmenu;
    }
                }
                break;

            case 1:
                if(opera == 1){
                    goto getaccount;
                }
                break;

            case 2:
                if(opera == 2){
                    goto createaccount;
                }
                break;

            case 3:
                if(opera == 3){
                    goto mainmenu;
                }
                break;

                default: //this is the default condition of the forgotten password / password retrieval do while loop
    cout<< "Syntax Error OR Invalid Operation!!! \n";
    cout<< "Please Select a Valid operation.";
    goto passwordmenu;
    break;
                }
                cout<< "\n Proceed to other operations (punch any key) \n";
                cin>>c;
            }while(opera != 0); //this is the end condition of the forgotten password / password retrieval do while loop
        }
    }
    break;


case 4:
    if(opp==4){
            subsubmenu:
        cout<< "\n\n----------------WELCOME TO KZ AI DIET CONSULTANCY CUSTOMER SERVICE--------------\n\n";
        do{ //this is the customer service/sub menu do while loop
            cout<< "\n------------------------------------SUBMENU-------------------------------------\n";
            cout<<"0. EXIT \n";
            cout<<"1. CHAT WITH AI BOT ASSISTANT \n";
            cout<<"2. DISCLAIMER \n";
            cout<<"3. ABOUT \n";
            cout<<"4. MAIN MENU \n\n";
            cout<<"select operation: ";
            cin>>opera;

            switch(opera){
        case 0:
            if(opera == 0){
                    ssubmenu:
                  cout<< "\n\nConfirm Exit (y/n): ";
            cin>>c;
            if(c == 'y'){
                goto close;
            }
            else if(c == 'n'){
                goto subsubmenu;
            }
    else{
        cout<< "\n\nInvalid Operation!!! Please, Yield to Instructions. \n";
        goto ssubmenu;
    }
            }
            break;

        case 1:
            if(opera == 1){
                    //bot:
                    string botname = "KZ-BOT616-XP";
                    string bossname = "Engineer Kitzito";
                    cout<< "\n";
                cout<< "-----------------------WELCOME TO KZ AI DIET CHATBOT SERVICE-------------------\n";
                cout<< "---"<<botname<<": Hi, My Name is "<<botname<<" your AI Assistant \n";
                cout<< "---"<<botname<<": please, what do i call you? \n---: ";
                cin>>usn;
                //getline(cin, usn);
                cout<< " ---"<<botname<<": "<<usn<<"!? That's a nice name... \n";
                cout<< "---"<<botname<<": You can ask me anything "<<usn<<" \n";
                while(1){ //while loop for chatbot616
                        bot616:
                    cout<< "\n---"<<usn<<": ";
                    srand(time(0));
                    int z;
                    z = 1 + (rand() % 7);
                    char s[255];
                    gets(s);
                    strlen(s);

                    if(!strcmp(s, "hi") || !strcmp(s, "hello") || !strcmp(s, "hello there") || !strcmp(s, "hey") || !strcmp(s, "yoo") || !strcmp(s, "hey there") || !strcmp(s, "hi there") || !strcmp(s, "greetings"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": hi there... "<<usn<<"\n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": hello there... "<<usn<<"\n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": hi... "<<usn<<"\n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": hello... "<<usn<<"\n";
                        break;
                    case 5:
                        cout<< "-----"<<botname<<": hey... "<<usn<<"\n";
                        break;
                    case 6:
                        cout<< "-----"<<botname<<": yoo... sup... "<<usn<<"\n";
                        break;
                    case 7:
                        cout<< "-----"<<botname<<": at your service... "<<usn<<"\n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "how are you") || !strcmp(s, "how are you doing") || !strcmp(s, "sup") || !strcmp(s, "you good") || !strcmp(s, "whatsup") || !strcmp(s, "how do you do"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": i am doing alright, trust you are too "<<usn<<"...\n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": not to worry Boss, i'm doing alright "<<usn<<"...\n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": all good boss "<<usn<<"...\n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": everything's ay ok Boss, thanks for asking "<<usn<<"...\n";
                        break;
                    case 5:
                        cout<< "-----"<<botname<<": i am fine boss "<<usn<<"...\n";
                        break;
                    case 6:
                        cout<< "-----"<<botname<<": all is well sir "<<usn<<"...\n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "thanks") || !strcmp(s, "thank you") || !strcmp(s, "i appreciate") || !strcmp(s, "much appreciated") || !strcmp(s, "gracias") || !strcmp(s, "appreciate you") || !strcmp(s, "thanks again") || !strcmp(s, "you're doing well") || !strcmp(s, "alright") || !strcmp(s, "ok") )
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": my genuine pleasure "<<usn<<"...\n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": happy to help "<<usn<<"...\n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": just doing my job "<<usn<<"...\n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "what is your name") || !strcmp(s, "what do i call you") || !strcmp(s, "who are you") || !strcmp(s, "what are you called") || !strcmp(s, "whats the name") || !strcmp(s, "what do they call you") || !strcmp(s, "tell me your name"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": i am "<<botname<<" \n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": my name is "<<botname<<" \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": "<<botname<<" is my name \n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": i go by name "<<botname<<" \n";
                        break;
                    case 5:
                        cout<< "-----"<<botname<<": i was given the name "<<botname<<" \n";
                        break;
                    case 6:
                        cout<< "-----"<<botname<<": hello, my name is "<<botname<<" \n";
                        break;
                    case 7:
                        cout<< "-----"<<botname<<" hi, my name is "<<botname<<" \n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "alright") || !strcmp(s, "ok") || !strcmp(s, "understood") || !strcmp(s, "yeah") || !strcmp(s, "i understand"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": perfect \n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": sure \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": ok "<<usn<<"...\n";
                        break;
                        }
                    }

                    else if((!strcmp(s, "what are you")))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": I am your personal Bot Assistant "<<usn<<"...\n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": I am whatever you need me to be "<<usn<<"...\n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": I am a whole lot, your AI Assistant is one of them "<<usn<<"...\n";
                        break;
                        }
                    }

                    else if(!strcmp(s, "who created you") || !strcmp(s, "who made you") || !strcmp(s, "who programmed you") || !strcmp(s, "who built you"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": Sponsored by Bill'sUpdate and Landmark Technologies, \n i was programmed by "<<bossname<<", assisted by Engr. John Bato and other Engineers \n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": I was Built by "<<bossname<<" assisted by Engr John Bato and other Engineers \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": "<<bossname<<" built me with the assistance of Engr. John Bato and other Engineers \n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": with helping hands from Engr. John Bato and Other Engineers, i was built by "<<bossname<<" \n";
                        break;
                    }
                }

                else if(!strcmp(s, "what is my name") || !strcmp(s, "what do they call me") || !strcmp(s, "what am i called") || !strcmp(s, "what do they call me") || !strcmp(s, "tell me my name"))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": you are "<<usn<<" \n";
                        break;
                    case 2:
                        cout<< "-----"<<botname<<": your name is "<<usn<<" \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": "<<usn<<" is your name \n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": you go by name "<<usn<<" \n";
                        break;
                        }
                    }


                   else if(!strcmp(s, "") || !strcmp(s, " ") || !strcmp(s, "   "))
                    {
                        switch(z){
                    case 1:
                        cout<< "-----"<<botname<<": say something "<<usn<<" \n";
                        break;
                    /*case 2:
                        cout<< "-----"<<botname<<": i know a blank text when i see one "<<usn<<" \n";
                        break;
                    case 3:
                        cout<< "-----"<<botname<<": you gotta stop sending blank texts "<<usn<<" \n";
                        break;
                    case 4:
                        cout<< "-----"<<botname<<": blank texts? nahh... not fair "<<usn<<" \n";
                        break;
                    case 5:
                        cout<< "-----"<<botname<<": say that again "<<usn<<"... \n";
                        break;
                    case 6:
                        cout<< "-----"<<botname<<": pardon...?\n";
                        break;
                    case 7:
                        cout<< "-----"<<botname<<": seems i missed that part, could you say that again "<<usn<<"...\n";
                        break;
                    case 8:
                        cout<< "-----"<<botname<<": i don't understand "<<usn<<"...\n";
                        break; */
                        }
                    }

                    else if(!strcmp(s, "0") || !strcmp(s, "exit") || !strcmp(s, "bye") || !strcmp(s, "goodbye") || !strcmp(s, "talk later") || !strcmp(s, "see you later"))
                            {
                                cout << "-----"<<botname<<": Alright "<<usn<<" \n";
                                cout << "-----"<<botname<<": Punch (y) to close conversation or (n) to continue conversation: ";
                                cin>>c;
                                if(c =='y'){
                                cout<< "-----"<<botname<<": Have an awesome day "<<usn<<" \n\n\n";
                                goto subsubmenu;
                                }
                                else if(c == 'n'){
                                        cout<< "-----"<<botname<<": Thanks For Sticking Around "<<usn<<" \n";
                                    goto bot616;
                                }
                                else{
                                    cout<< "\n-----"<<botname<<": Invalid Key!!! please, yield to instructions "<<usn<<" \n";
                                    goto bot616;

                                }
                            }

                            /*else{
                                cout<< "\n-----"<<botname<<": i dont understand you "<<usn<<" \n";
                            }*/

                } //end of while loop for chatbot616
            }
            break;


        case 2:
              if(opera == 2){
                    disclaimer:
                cout<< "\n\n-----------------------------------DISCLIAMER-----------------------------------\n\n";
                cout<< "1.- This software is not meant to be used by PREGNANT WOMEN, ATHLETS, BODY BUILDERS\n--- and CHILDREN. \n";
                cout<< "2.- This software was created for primarily research and academic purposes. \n";
                cout<< "3.- This software is open source to all. \n";
                cout<< "4.- The AI CHATBOT only returns preprogrammed response to preprogrammed statements \n";
                cout<< "5.- Body Mass Index(BMI) calculation is based on an already programed algorithm\n--- consisting generally accepted BMI Range. \n";
                cout<< "6.- This software is proudly sponsored by BILL'SUPDATE and LANDMARK TECHNOLOGIES\n--- in association with BABILA GEORGE REAL ESTATE AGENCY. \n";
                cout<< "7.- You alone are responsible for using this software outside the purpose for which\n--- it was created. \n";
              }
              break;


        case 3:
            if(opera == 3){
                cout<< "\n----------------------------ABOUT THE AI DIET CONSULTANCY-----------------------\n";
                cout<< "The AI Diet Consultancy is a software programmed with aim to function and or play\n";
                cout<< "the role of an actual human diet consultant. This application is not to replace the\n";
                cout<< "human dieticians, but is to assist in playing their role in a more efficient manner.\n";

                cout<< "\n--------------------------------SPONSORS AND PARTNERS----------------------------\n";
                cout<<"----------Proudly Sponsored by BILL'SUPDATE and LANDMARK TECHNOLOGIES.----------- \n";
                cout<<"---------------In association with BABILA GEORGE REAL ESTATE AGENCY-------------- \n";
                cout<<"------------------Thanks for patronizing KZ AI DIET CONSULTANCY.----------------- \n";
                cout<<"----------------contact:+237682726566 && email:mnkitzito@gmail.com--------------- \n";
                cout<<"-----Follow KZ AI DIET CONSULTANCY on FACEBOOK, GITHUB, LINKEDLN, CONNECTYU.----- \n";
                cout<<"-------------------Powered by BILL'SUPDATE all rights reserved.------------------ \n";
            }
                break;

        case 4:
            if(opera == 4){
                goto mainmenu;
            }

        default: //this is the default of the customer service / sub menu do while loop
    cout<< "Syntax Error OR Invalid Operation!!!\n";
    cout<< "Please, Select from the list of operations.";
    goto subsubmenu;
    break;

            }
    cout<<"\nproceed to other operations?(PUNCH ANY KEY): ";
    cin>> c;
        }while(opera !=0 ); // this is the end condition of the customer service/ sub menu do while loop
    }
    break;


        default: //this is the default of the overall do while loop
           /* if((opp <=! 0) || (opp >=! 0)){
                cout<< "\nQuit Screwing Around and Select a Valid Operation!!!";
                goto mainmenu;
            }
            */
    cout<< "---Syntax Error OR Invalid Operation!!!\n";
    cout<< "---Please Select From the list of operations\n";
    goto mainmenu;

    break;
}
    cout<<"\nproceed to other operations...?(y/n): ";
    cin>> c;
    //cin>> opp;
}
while((opp != 0)); //this is the close condition of the overall do while loop
    }
