template<typename T>
class Sort
{	
private:
	/// <summary>
	/// Swap the variables
	/// </summary>
	/// <param name="x">Major Value</param>
	/// <param name="y">Minor Value</param>
	static void Swap(T* x, T* y)
	{
		T aux = *x;
		*x = *y;
		*y = aux;
	};

public:
	/// <summary>
	/// Bubble Sort Algorithm
	/// </summary>
	/// <param name="var">Pointer to first element from list</param>
	/// <param name="size">Size of List</param>
	static void Bubble(T* var, int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (var[j] > var[j + 1])
				{
					Swap(&var[j + 1], &var[j]);
				}
			}
		}
	}
	// <summary>
	/// Quick Sort Algorithm
	/// </summary>
	/// <param name="var">Pointer to first element from list</param>
	/// <param name="size">Size of List</param>
	static void Quick(T* var, int init, int end)
	{
		T pivot;
		int left = init, right = end - 1;
		pivot = var[int(init + end) / 2];
		while (left <= right)
		{   
			while (var[left] < pivot && left < end)
			{
				left++;
			}
			while (var[right] > pivot && right > init)
			{
				right--;
			}
			if (left <= right)
			{
				Swap(&var[left], &var[right]);
				left++;
				right--;
			}
		}
		if (init < right)
		{
			Quick(var, init, right + 1);
		}
		if (left < end)
		{
			Quick(var, left, end);
		}
	}
	// <summary>
	/// Selection Sort Algorithm
	/// </summary>
	/// <param name="var"> Pointer to first element from list</param>
	/// <param name="size">Size of List</param>
	static void Selection(T* var, int size)
	{
		if (size > 1)
		{
			for (int i = 0; i < size; i++)
			{
				if (var[0] > var[i])
				{
					swap(&var[0], &var[i]);
				}
			}
			Selection(&var[1], size - 1);
		}
	}
};


