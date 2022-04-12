 int isValid(string s) {
            // code here
            int counter=0;
            for(int i=0;i<s.length();i++)               //1.Check wheteher there are three dots or not.Three dots means there will be 4 sections
                                                         //2.create a set.Enter 0 to 255 in string format.Check the string before dot and check it is the part of set
                                                         //3.increment the counter.if counter==4 at the end return 1 else return 0
            {
                if(s[i]=='.')
                counter++;
            }
            if(counter!=3)
            return 0;
            set<string>s1;
            for(int i=0;i<256;i++)
            s1.insert(to_string(i));
            string temp="";counter=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]!='.')
                temp=temp+s[i];
                else
                {
                    if(s1.count(temp)==1)
                    counter++;
                    temp="";
                }
            }
            if(s1.count(temp)==1)
            counter++;
            if(counter==4)
            return 1;
            else
            return 0;
        }
