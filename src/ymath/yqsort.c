/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yqsort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim < youkim@student.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:26:06 by youkim            #+#    #+#             */
/*   Updated: 2021/12/16 11:30:58 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	partition(int arr[], int left, int right)
{
	int			lo;
	int			hi;
	const int	pivot = left;

	lo = left + 1;
	hi = right;
	while (lo < hi)
	{
		while (arr[lo] <= arr[pivot] && lo <= right)
			lo++;
		while (arr[hi] > arr[pivot] && hi >= left)
			hi--;
		if (lo < hi)
			yswap(&arr[lo], &arr[hi]);
	}
	yswap(&arr[pivot], &arr[hi]);
	return (hi);
}

static void	quicksort(int arr[], int left, int right)
{
	int	pivot;

	if (left >= right)
		return ;
	pivot = partition(arr, left, right);
	quicksort(arr, left, pivot - 1);
	quicksort(arr, pivot + 1, right);
}

void	yqsort(int size, int arr[])
{
	quicksort(arr, 0, size - 1);
}
