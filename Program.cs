using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_COMBUSTIVEL {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int codigo, soma1, soma2, soma3;

            soma1 = 0;
            soma2 = 0;
            soma3 = 0;

            Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            codigo = int.Parse(Console.ReadLine());

            while (codigo != 4) {
                if (codigo == 1) {
                    soma1 = soma1 + 1;
                }
                else if (codigo == 2) {
                    soma2 = soma2 + 1;
                }
                else if (codigo == 3) {
                    soma3 = soma3 + 1;
                }

                Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
                codigo = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("MUITO OBRIGADO");
            Console.WriteLine("Alcool: " + soma1);
            Console.WriteLine("Gasolina: " + soma2);
            Console.WriteLine("Diesel: " + soma3);

        }
    }
}
