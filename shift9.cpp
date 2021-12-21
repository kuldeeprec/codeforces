int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0  , pervs = 0;
        bool val = true;
        forr(i, n)
        {
            cin >> a[i];
            pervs += a[i];
            sum += i ;
 
            if (sum > pervs)
                val = false;
        }
        if (val)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
