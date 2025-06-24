if (d % 2 == 0)
        {

            ans = n / 2;
            ans = ans - 1 - (d / 2);
        }
        else
        {
            ans = n / d;
        }
        cout << ans << endl;