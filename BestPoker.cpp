class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
     char n = suits[0];
     int card = ranks[0];
     int count=0;
     int suit =0;
    for(int i=1; i< ranks.size(); i++)
    {
    if(suits[i]==n)
        suit++;
    }

    int counts[14]={0};
    for(int i=0; i<ranks.size(); i++)
    {
     counts[ranks[i]]++;
    }
    int max =0;
    for(int i=1;i<=13; i++)
    {
     if(counts[i]> max)
     max = counts[i];
    }
    if(suit ==4)
    return "Flush";
    else if( max >=3)
    return "Three of a Kind";
    else if( max==2 )
    return "Pair";
    else
    return "High Card";
    }
};
