int main()
{
	int k = 3; //Вводимо змінну k
	int m = 2; //Вводимо змінну m
	int n = 1; //Вводимо змінну n
	int x = 0; //Вводимо додаткову змінну x

	if ( m < k ){ //Якщо m < k то
		x = k; //x набуває значення k тобто 3
		k = m; //k набуває значення m тобто 2
		m = x; //m набувеє значення x тобто 3
	}
	if ( n < m ){ //Якщо n < m то
		x = n; //x набуває значення n тобто 1
		n = m; //n набуває значення m тобто 3
		m = x; //m набуває значення x тобто 1
	}
	if ( m < k ){ //Якщо m < k то
		x = k; //x набуває значення k тобто 2
		k = m; //k набуває значення m тобто 1
		m = x; //m набуває значення x тобто 2 
	}

	return 0;
}