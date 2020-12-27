vector<int> appleleft;
vector<int> daysleft;

appleleft.push_back(apples[0]-1);
daysleft.push_back(days[0]-1);
int min_days_left = days[0] -1;
int pos = 0;
int caneatdays;
for(int i = 1; i < apples.size(); i++){
    for(int i = 0; i < appleleft.size(); i++){
        daysleft[i] -= 1;
        if(daysleft[i] == 0)
            appleleft[i] = 0;
        else{
            if(min_days_left > daysleft[i])
            {
                min_days_left = daysleft[i];
                pos = i;
            }
        }
    }
    appleleft[i] -= 1;
    if(appleleft[i] == 0)
        daysleft[i] = 0;
    appleleft.push_back(apples[i]);
    daysleft.push_back(days[i]);
    if(min_days_left > days[i])
    {
        min_days_left = days[i];
        pos = i;
    }
}
while(max(appleleft) != 0){
    min_days_left = min(daysleft);
    pos = daysleft.find(min_days_left);
    daysleft[pos] -=1;
    appleleft[pos] -=1;
}

