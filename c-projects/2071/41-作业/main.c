int contrastFormat(char *s){
    if(s[1]=='\0'||s[0]=='\0')
        return -1;
    char temp[3]={0};
    int n=-1;
    strncpy(temp,s,2);
    if(strcmp(temp,"IV")==0)
      n=4;
    if(strcmp(temp,"IX")==0)
        n=9;
    if(strcmp(temp,"XL")==0)
        n=40;
    if(strcmp(temp,"XC")==0)
        n=90;
    if(strcmp(temp,"CD")==0)
        n=400;
    if(strcmp(temp,"CM")==0)
        n=900;
    return n;
}
int romanToInt(char * s){
    int n=0;
    while (*s!='\0') {
        if(contrastFormat(s)!=-1){
            n+=contrastFormat(s);
            s+=2;
        }else{
            switch (*s) {
                case 'I':n+=1;break;
                case 'V':n+=5;break;
                case 'X':n+=10;break;
                case 'L':n+=50;break;
                case 'C':n+=100;break;
                case 'D':n+=500;break;
                case 'M':n+=1000;break;
               default:
                    break;
            }
            s++;
        }
    }
    return n;
}
