=0; i<=n-s; i++)
    {
        int sum=0;
        for(int j=0; j<s; j++)
        {
            sum+=a[i+j]+b[j];
        }
        cout<<sum<<endl;
    }