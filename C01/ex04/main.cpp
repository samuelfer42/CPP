/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:53:29 by safernan          #+#    #+#             */
/*   Updated: 2022/05/07 03:12:46 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include "fstream"

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error Bad arguments : ./Sed \"file\" \"s1\" \"s2\"" << std::endl;
		return(2);
	}
	
	std::string file(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	
	if (s1 == "")
	{
		std::cout << "Error can't be empty" << std::endl;
		return (2);
	}	

	std::ofstream	infile;
	std::fstream	outfile;
	std::string		line;
	size_t			pos;
	
	outfile.open(file.c_str(), std::fstream::in);
	if (outfile.fail())
	{
		std::cout << "Error: Can't open " << file << std::endl; 
		return (0);
	}
	line = file + ".replace";
	infile.open(line.c_str(), std::ios::out);
	if (infile.fail())
	{
		std::cout << "Error: Can't open " << line << std::endl;
		return (0);
	}
	pos = 0;
	while(getline(outfile, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		infile << line;
		if (!outfile.eof())
			infile << std::endl;
	}
	infile.close();
	outfile.close();
	return (1);
}
