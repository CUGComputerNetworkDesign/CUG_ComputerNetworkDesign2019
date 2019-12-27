bool IPcmp(int *ip1,int *ip2)
{
    bool res = true;
    for(int i = 0;i < 4;i++)
    {
        if(ip1[i] != ip2[i])
        {
            res = false;
        }
    }
    return res;
}
