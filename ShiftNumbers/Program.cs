using System;

class Program
{
    static void Premesti(int[] a, int n)
    {
        int[] rezultat = new int[n];
        int index = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                rezultat[index] = a[i];
                index++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                rezultat[index] = a[i];
                index++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            a[i] = rezultat[i];
        }
    }

    static void Main()
    {
        int N = int.Parse(Console.ReadLine());  
        int[] a = new int[N];

        string[] parts = Console.ReadLine().Split(' ');
        for (int i = 0; i < N; i++)
        {
            a[i] = int.Parse(parts[i]);
        }

        Premesti(a, N);

        for (int i = 0; i < N; i++)
        {
            Console.Write(a[i]);
            if (i < N - 1) Console.Write(" ");
        }
    }
}
