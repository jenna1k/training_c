/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d04_recursion_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 10:49:55 by dakim             #+#    #+#             */
/*   Updated: 2018/07/28 11:47:05 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fn(int i)	// parameter, argument
{
	//int i;			// if  add a variable (declare an "i") inside of function, it will not increase everytime function call itself.
	
	i = 0;			// initialize it to 0 (to have a counter)

	if (i <= 5)
	{
		i += 1;		// increment "i"
		fn();
	}
	else
	{
		return (0);
	}

}

int		main()
{
	fn();
	return (0);
}

