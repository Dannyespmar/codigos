//CODIGO CLASE IGUAL
o = sizeof(a)/ sizeof(a[0]);
  cout<<"\n"<<tamanio;
//valor maximo de manera dinamica
  for(int i=0; i<tamanio;i++){
    //cout<<"\n"<<"el valor se repite: "<<i;
    cout<<"\n"<<"el valor del vecto a["<<i<<"]"<< a[i];
  }

//numero menor
  int menor = a[0];

    for (int i = 1; i < tamanio; i++)
    {
        if (a[i] < menor)
        {
            menor = a[i]; // actualizamos el valor del menor
        }
    }
    
    //numero mayor
    int mayor = a[0];

    for (int i = 1; i < tamanio; i++)
    {
        if (a[i] > mayor)
        {
            mayor = a[i]; // actualizamos el valor del menor
        }
        //numero igual
    }
    int numero_igual =3 ; a[0];

    for (int i = 1; i < tamanio; i++)
    {
        if (a[i] == numero_igual)
        {
            numero_igual = a[i]; // actualizamos el valor del menor
        }
    }
    cout << "el numero menor es: " << menor;

    cout << "el numero mayor es: " << mayor;

    cout << "el numero i
gual es: " << numero_igual;

  return 0;
}