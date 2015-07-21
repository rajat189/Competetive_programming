using System;
public class EnormousInputTest {
static public void Main() {
int index, divisor, number, divisible = 0;
string[] firstLine = new string[2];
string line;
line = Console.ReadLine();
firstLine = line.Split(' ');
number = Int32.Parse(firstLine[0]);
divisor = Int32.Parse(firstLine[1]);
int[] data = new int[900000]; // unused, see Guarav Kumar's
for (index = 0; index < number; index++) {
if (Int32.Parse(Console.ReadLine()) % divisor == 0) divisible++;
}
Console.WriteLine("{0}", divisible);
}
}