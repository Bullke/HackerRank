using System;
using System.Collections.Generic;
using System.IO;

class Solution
{

    public class Node
    {

        private int count = 0;
        private int depth = 0;
        private Node[] subnode = null;

        private Node[] Subnode
        {
            get
            {
                if (subnode == null)
                {
                    subnode = new Node[52];
                }
                return subnode;
            }
        }

        public Node() : this(0) {}

        private Node(int input)
        {
            this.depth = input;
        }

        public int Add(string input)
        {
            Node current = this;
            int index = 0;
            for (int position = 0; position < input.Length; position++)
            {
                index = CharIndex(input[position]);
                if (current.Subnode[index] == null)
                {
                    current.Subnode[index] = new Node(depth + 1);
                }
                current = current.Subnode[index];
            }
            current.count++;
            return current.count;
        }

        private int CharIndex(char input)
        {
            int index = 0;
            if ((input >= 'A') && (input <= 'Z'))
            {
                index = (input - 'A');
            }
            else if ((input >= 'a') && (input <= 'z'))
            {
                index = (input - 'a');
            }
            else
            {
                throw new ArgumentException("Input must be an alphabetical character");
            }
            return index;
        }

        public int CountOf(string input)
        {
            Node current = this;
            int index;
            for (int position = 0; position < input.Length; position++)
            {
                index = CharIndex(input[position]);
                if (current.Subnode[index] == null)
                {
                    return 0;
                }
                else
                {
                    current = current.Subnode[index];
                }
            }
            return current.count;
        }
    }

    static void Main(String[] args)
    {
        Node node = new Node();

        int N = int.Parse(Console.In.ReadLine());
        for (int position = 0; position < N; position++)
        {
            string input = Console.In.ReadLine();
            node.Add(input);
        }

        int Q = int.Parse(Console.In.ReadLine());
        for (int position = 0; position < Q; position++)
        {
            string input = Console.In.ReadLine();
            Console.Out.WriteLine(node.CountOf(input));
        }
    }
}