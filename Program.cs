using System.Runtime.InteropServices;
public class Program
{
    [DllImport(@"C:\Документы\C#\ConsoleApp5\Project2.dll", SetLastError = true)]
    public static extern void hello(int a);
    static void Main()
    {
        hello(5);
    }
}