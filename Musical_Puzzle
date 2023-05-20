//https://codeforces.com/problemset/problem/1833/A
using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int ans = 1;
        
        for (int i = 0; i < t; i++)
        {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();

            int melodies = CountMelodies(n, s);
            Console.WriteLine(melodies);
        }
    }

    static int CountMelodies(int n, string s)
    {
        HashSet<string> taken = new HashSet<string>();
        string take = "";
        take += s[0];
        take += s[1];
        taken.Add(take);

        for (int i = 2; i < n ; i++)
        {
            take = "";
            take += s[i-1];
            take += s[i];
            taken.Add(take );

        }

        return taken.Count;
    }
}


