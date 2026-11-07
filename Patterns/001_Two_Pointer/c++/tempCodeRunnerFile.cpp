
    int ii = 0;
    int jj = 0;
    if (i == 0)
    {
        for (auto it : pos)
        {
            cout << it << " ";
        }
    }
    else if (j == 0)
    {
        for (auto it : neg)
        {
            cout << it << " ";
        }
    }
    else
    {
        while (ii < i && jj < j)
        {
            if (neg[ii] < pos[jj])
            {
                ans.push_back(neg[ii]);
                ii++;
            }
            else
            {
                ans.push_back(pos[jj]);
                jj++;
            }
        }
        while (ii < i)
        {
            ans.push_back(neg[ii]);
            ii++;
        }
        while (jj < j)
        {
            ans.push_back(pos[jj]);
            jj++;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }