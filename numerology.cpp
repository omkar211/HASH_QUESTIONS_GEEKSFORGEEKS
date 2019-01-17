  #include<iostream>
  using namespace std;
  void your_birthday_number(string str)
  {
      int date=2;
      cout<<"The birthday number is one of  most important indicators in the numerology chart.The vibration of the "<<endl
     <<"day you werte born on has an enormous influence on your life."<<endl
      <<"It indicates your talents and abilities,as well as your attitudes towards challenges and opportunities."<<endl
      <<"    While you can change your name for a more numerologically favourable one ,you can not change your birthday."<<endl
      <<"    the influence of your birthday"
        <<"  greatest between your twenty-eight and fifty-sixth birthdays. "
      <<endl<<endl
     << "Birthdays are classified into three classes called concords, which are used to assess compatibilities with onther number."<<endl
     << "if two people belong to the same concord . They will be compatitable";

    cout<<"\n\n\n\n\n"<<"             WHAT YOUR BIRTH DAY INDICATES"<<"\n\n\n";
        cout <<"if it is ";
        if(date==1){
        cout<<"Your are ambitious , logical,independent ,strong willed and a natural leader ."<<"\n"
        "you need to be at the helm of affairs as you dislike interference and restraint .you are"<<"\n"
         "pratical ,and a good counsellor .you begin projects well but do not finish them "<<"\n"
         "Routine frustrates you.You have excellent business instincts and broad vision ,"<<"\n"
         "and will achieve sucess .guard against being lazy""\n"
         "You need to love and companionship, but are undemonstrative. "<<"\n"
         "you also crave praise and sympathy ."<<"\n"
         "You can domineering,obstinate and selfish , and handle emotional matters with reason instead of with feeling."<<"\n"
         "professions you are suited for include teaching, marketing ,analysis, consultancy ,work in human resources,aviation or engineering."<<"\n";

        }
      if (date==2)
        {
           cout <<"You are warn-herted and affectionate. However,"<<"\n"
           "You may be emotional and sensitive ,and set easily"<<"\n"
           "hurt. You should avoid people with negative attitudes as"<<"\n"
           "you are susceptible to depression .You are tactful and cooperative, "<<"\n"
           "and work better on your own .You are also imaginative and impractical."<<"\n"
           "you are appreciative of beautiful things and your accommodating nature wins you manu friends"<<"\n"
           "        You need tolove affection. you are a natural peacemaker, and successful in"<<"\n"
           "personal relationships. you enjoy change and travelling, and are skilled in musics and art."<<"\n"
           "you are intuitive but liable to underestimate yourself and be exploited."<<"\n"
           "A harmonious and peaceful environment is vital for your peace of mind ."<<"\n"
           "   you will be successful as a politician ,analyst, statesman,musician ,actor or writer."<<"\n";
        }
        if(date==3)
        {
            cout<<"You are frank, cheerful and fun loving, and you make friendly easily."<<"\n"
            "You are an inspiring speaker with intellectual interests and vivid imagination."<<"\n"
            "you function best on mental and intellectual planes."<<"\n"
            "Some form of expression - writing,speaking ar acting --is vital for your well-being."<<"\n"
            "you are restless, moody and fear loneliness. you have abundant energy and recuperative powers"<<"\n"
            " You are suited to occupations that bring you in contact with people--law, music ,medicine ,advertising and lecturing."<<"\n"
            "You may one of three kinds: artistics and inclined towards literary pursuits ,social and unstable by nature,"<<"\n"
            "or emotional and drawn to acting."<<"\n";
        }

  }
  int main()
  {
    cout<<"Enter your birth-date pattern must be dd/mm/yyyy"<<endl;
    string date;
    getline(cin ,date) ;
    cout<<endl<<"Enter your Name :-"<<endl;
    string name;
    getline(cin,name);
    cout<<endl<<"Prediction based on YOUR BIRTHDAY NUMBER"<<endl<<endl<<endl;
     your_birthday_number(date);
      }
